# Buffer overflow attacks
    Buffer overflow is a bug that affects low level code, usually written in C
and C++.  Normally this will crash, but an attacker can alter the situation,
make it do much worse, lets them steal info, corrupt code using shell scripts. C
and C++ have problems with buffer overflow, and they are freaking everywhere.
Long history. These languages are very relevant.

## Critical systems
 Kernels, servers, embedded systems. Mars rover! Drive the
economy. A successfull attack has tremendous consequences.

## Significant ones 
First one was in 1988. Morris worm. Went everywhere, touched
10% of the internet.  CodeRed exploted IIS webserver in 2001. Propted gates to
write his famous memo about security.  Hit again with SQLSlammer, with MS-SQL
server.  Reported buffer overflow problems continue to arise.  Buffer overflow
things keep happening. Defenses and attacks using buffer overflow.

### Buffer overflows deined Access a buffer outside its set bounds, allowing you
to access parts of memory you shouldnt be allowed to access.  Can happen during
iteration, or by direct access using pointer arithmetic.

# Memory Layout
    Inerested in how programs are laid out in memory.  What does the call stack
look like?  What effect does calling a function have on memory?
	
    All programs are processes. Processes are given to the operating system to
run. The proess thinks it owns all the memory, and it thinks its the only
programmign running. The addresses are virtual addresses which are then mapped
to actual addresses.  At the bottom - text, or code segment.  Next is data
segment.  Initialized data area. int y = 10; Contains metadata for calling and
returning functions.  Above is, uninitlalized data area. int y; Are set to 0.
All of the above is known at compile time.

    Top of the space is command line aguments and environment variable. Set when
the process starts.  Below that is the stack, which holds local variables, and
metadata that the program uses to call and return from functions.  Below that is
the heap. This is the area that malloc manages.  Stack and heap are managed at
runtime, i.e. when the program is running.

## Memoryallocation
Highest address is at the lowest address, stack is at the
highest address. Stack and heap gow in opposite directions.  Program maintains a
stack pointer. when there is a push instrution, it wpull move the stack pointer
after pushing the value If the function returns, it will pop a large portion of
the stack off.  Compiler emits the instsructions that adjust the stack at
runtime.  Code, which is the implementation of Malloc keeps track of the heap.
The memory that the heap uses it apportioned by the OS, but the individual data
ist managed by malloc.  The stack is the target of the first attack.

## Stack and function calls
What happens when we call a function? What data
needs to be stored? Where does it go?  What happens when we return a function?
What data needs to be restored? Where does it come from?  When a caller calls a
function, it pushes the arguments in reverse order of the code. Arg1 is last,
since the stack grows outward. Local variables are stored as they appear in the
text. Function wants to increase the value if loc1, but loc1 is far away from
the arguments. How does it find out where loc2 is? The program cannot know the
exact address of local variables at compile time. No variables at allduring
compile time. If the function can be called from different places, the address
of loc2 differs depending on who called the function.  Compiler always knows the
relative address of the variables. It's always 8 bytes before the question mark
on the stack.  Its not really explained how it knows that its 8 bytes.  The
stack frame for the function is all of these parts which contain the local
variables nad function arguments. To know how to access local variables and
arguments, we need a reference point in the stack frame. Compilers store the
frame pointer in the "%epb" register. No matter where the function is called
from, it will always be 8 bytes distant from the current value of the frame
pointer, %ebp --8bytes--> start of function data.

### Calling func from main 
Main has its own frame pointer pointed at func. When
we want to return from func, main is gona wanna use the same frame pointer that
it had before.  So then when it goes to access its bariables its going to the
right adderesses. Maybe its always 8 bytes away beccause its addinf them to the
left and not to the right, so that difference never change, and the address is
merely pushed.  How do we restore the frame pointer?

### Step by Step 
Stack frame for func Caller's data for main.  Main was using
the frame pointer to access its own local variables. Is there one stack pointer?
Func changes the frame pointer, and main wants it back. How do we restore the
frame pointer? Think about how main is going to call func in the furst place.
When main passes its arguments to func, the stack frame pointer is the place 8
bytes away from the last argument. We then save main's frame pointer on the
stack.

### Backing up again. 
We need a reference point to be able to access local
variables. This is the frame pointer. %ebp.  Use stack pointer to save main's
frame pointer on the stack. Stack pointer is the thing on the layout that keeps
track of the mac location of stack memory. The stack is used to support calling
and returning from functions. Caller's data is the data from the calling
function. The highlighted partes are the stack frame FOR THE FUNCTION. It has
its own independent stack frame pointer apparently. Save frame pointer using
stack pointer. That instruction pointer is the hard part. You can spend some
time thinking about this, maybe even write some assembly to do this.

# Buffer Overflow
    Buffer is a contiguous set of memory associated with a variable or field.
Pretty much like a string in C An overflow happens when more data is pushed onto
the buffer than it can reasonable hold. When the program tries to use a variable
to access memory that doesnt belong to it, its performing an oveflow.  What
happens when a program reads or writes to a buffer outside its bounds?  Such a
program is "undefined".  It is effecively allowed to do anything.  I remember
someoen saying about how important it is th udnerstand what "undefined" means in
terms of C. Compilers could insert code to detect out of bounds accesses. Most
compilers assume that the program does not have an overflows, and so it will
access whatever memory is at the location. By knowing how memory is laud out, a
programmer can use out of bounds access to his advantage.

## Example.
arg1, then the isntruction pointer from the caller, then the frame
pointer. Then the 4 bytes buffer.  The frame pointer will be given more than it
can handle, and so it will overwrite the frame pointer with the new data.
Instruction pointer is the pointer return location. Stack pointer is at the end?
Frame pointer is where the caller keeps track of its local variables.
Instruction pointer is the return address.  Frame pointer is always ater
instruction pointer.  This is a benign outcome because it just overwrites the
frame pointer, and causes a segmentation fault.

## "Authenticated" example 
If we have a local variable assigned before the
preceeding one, then it can easily run over it.  In the authenticated example,
the buffer overflows into the authenticated variable, causing it to be nonzero.
strcpy is BROKEN. we can copy and size memory onto anything. This is why you use
strncpy and sprintf.  set number These program use program supplied strings, but
with user supplied strings they could be a number of different things.

# Code injection
    Using sprintf to copy into a buffer. i.e. scanning?  1. Load my own code in
memory.  2. Get the instruction pointer to point ot my code.

    Code must be machine code. Not C source code, but actual assembly language.
It can't contain any nonzero items, beacuse many of the vulnerable functions
willnot copy data that has zeroes in it. It will stop when it reaches a zero.
We also have to assume that the code is complete.  We want to run shellcode, so
that we can open a shell on the system, and do whatever the fuck we want, fast.
We have to find a way to get a bash shell. Maybe this is why permissions are so
important?  We dont know where uor code is in relation to the instruction
pointer. Somehow we have to get it to the beginning and start running it. The
key is: the very last step jumps back to the location of the return address.
Jump back to the return address, which also contains an instruction pointer. We
can set the return address to the address of our code. Save our code location at
the position of the instruction (i.e. return) pointer.  If we get it wrong, the
CPU will panic, crashing the program. That is, if we et the address wrong.

## Finding the return address of the code.  
If the adversary knows the code that he is trying to attack, and knows where in
the code the buffer overrun is, he might know where the buffer is with respect
to the frame pointer, and therefore where the return address is located.  If we
dont know what the code is, we dont know how far the buffer is from the saved
frame pointer.
    %epb is frame pointer, %esp is stack pointer, %eip is instruction pointer.
    One approach is just to try a bunch of times to figure it out.  Without
randomization, the stack always starts from the same fixed address. The stack
will grow, but not very deeply, unless the code is really recursive.  nop sled:
Single byte instruction that just moves to the next instruction, so an attacker
can inject a bunch of null characters until you get to the thing you are looking
for.

# Other Memory Exploits.
    We just looked at a stack smashing attack. You smash through the important
data to overwrite instruction pointers and inject malicious shellcode. Stack
smashing is a violation of integrity. The attack has violated the integrity of
the data, and violated the integrity of the program by allowing you to inject
code.

## Heap overflow
You can also overflow a heap buffer.  In the example,
overflowing the buffer of the vulnerable string buffer will move you over into
the terrotiry of the function pointer. Maybe there is an instruction pointer
there?  Overflow into adjacent objets. One containing a function pointer, more
challenging, because the attacker may need to work to get the right kind of
object near the one he needs to overflow.  Overfow heap metadata. It overwrites
the function pointer.  Attacker needs to work to get the object.

### Overflow heap metadata

Pointer returned from malloc may contain a header. This header may contain
pointers linking the returned object into a list of allocated data. Data not
currently in use by the program will be linked in a freelist instead.  Can then
flow that header into the corrupt heap itself.

Video question: This may come into use later: heap vulerabilities other fields
in the same struct as the buffer data structures used by malloc (general answer
based on the first answer) Neary objects allocated by Malloc. This is the same
with what was going on with with the C++ explanation.  You can hack into the
vtable to access nearby classes.

## Integer overflow.  Suppose the adversary has sent a very large number. C has
a set value size, and anything larger than that wll cause something to overflow,
and wrap around. You can wrap it around to 0, and all subsequent writes are to
the buffer are overflowing it. Weird, but I couldnt get the sizeof thing to say
its anything but 8 on the things that I allocated. Maybe the programis going
"uhh... no idea why you did that and i'm not even gonna try to figure out what
you did". Undefined behavior?

## Corrupting data 
Attacks shown so far affect code -- i.e. return addresses and
function pointers. Attacks can overflow data as well to modify a secret key to
one the attacker knows, so that he can have access to the system. They might
also modify state variables to bypass authentication checks. Might modify
interpreted strings to be used as part of commands, i.e. SQL injection.

## Read overflow 
Might leak secret information. I think that the rest has one of
these. It could have several examples of these.  This is basically the
heartbleed bug.

You were allowed to send a "heartbeat" to the open SSL server and it would
echothat message back. There were checks on the length, but the beat didn't
properly check whether the length was accurate. The attacker could read pretty
much every bit of data they wanted. Could leak passwords and cryptographic keys.

## Stale Memory

Dangling pointer bug. Occurs when a pointer is freed but theprogram continues to
use it. This will occur when someone allocates a bit of memory. Somehow the
address is being reused when you allocate somehing new.


THERE MAY BE SEVERAL OF THESE IN THE TEST, SO PAY ATTENTION TO THEM

# Format String Vulnerabilities
Formatted i/o

If you specify everything in the buffer as a string, you are safe. if not, it
directly interprets the format strings, ans this could cause a lot of problems.

If you do not supply a formatter it will try to read from

# This fucking lab
Apparently we have to send in binary data in the form of addresses. It accepts
binary data. We have to convert this to addresses.They have us go over addresses
so that probably has some use in this case.
