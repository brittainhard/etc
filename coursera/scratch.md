7. char *buf = malloc(k);
    - unlikely to crash, unless the compiler doesnt like anything but ints for initializing size.

8. for(i = 0; i < k; i++) {
      buf[i] = argv[2][i]; /* 2 */
    }
    -

Answers
1. Consider the following variable declaration for 𝚋𝚊𝚛 in the function 𝚏𝚘𝚘
    Holds 128 elements
2. Consider the following code fragment: 𝚜𝚒𝚣𝚎𝚘𝚏(𝚒𝚗𝚝*) == 𝚜𝚒𝚣𝚎𝚘𝚏(𝚒𝚗𝚝). Which one of the following is true about it?
    This fragment's result depends on the compiler and architecture
3. Suppose you are compiling for a 32-bit platform and 𝚜𝚒𝚣𝚎𝚘𝚏(𝚒𝚗𝚝) == 𝟺. Which one of the following is equivalent to 𝚌[𝚋] if 𝚌 is of type 𝚒𝚗𝚝* and 𝚋 is of type 𝚒𝚗𝚝?
    *(c+b)
4. Consider the following program. What are possible outcomes from running this function? Check all that apply (note that the outcomes shown are not exhaustive):
    1. crash
    2. returns 127
5. Fizzbuzz
    The program outputs "fizz"
6. Which of the following are true of memory returned via the malloc function? Check all that apply.
    - It must be manually released by the programmer
    The memory is zero-initialized
7. Consider the following code
    This program could crash at 2 and 3
8. Which of the following are true statements about the program stack?
    It is used to store global variables while executing a function
    It is used to store local variables while executing a function
9. Which of the following are true of the X86 call instruction?
    Its target address may be specified in a general-purpose register
    Branches to a specified address
    Pushes flag registers onto the stack
10. Assuming we #𝚍𝚎𝚏𝚒𝚗𝚎 𝙽 and 𝙼 to be positive integers, and the calls to 𝚖𝚊𝚕𝚕𝚘𝚌() succeed (the arguments do not overflow, and do not return 𝙽𝚄𝙻𝙻), then which of the following is true?
    This program outputs a zero NxM matrix
11. What is TCP
    It is a protocol that supports reliable data transfer on the Internet
12. What is PHP?
    A programming language often used to implement web sites
13. Which of the following statements about HTML are true?
    Web browsers render HTML content served by web sites
    HTML is a text-based format (as opposed to a binary format)
    HTML documents have tags that identify different sorts of data
14. What is gcc?
    A compiler
15. The shell command cd; ls *.xml
    Will list all files ending in the xml suffix in user's home directory
