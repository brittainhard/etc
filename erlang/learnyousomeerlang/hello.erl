-module(hello).
-export([hello_world/0]).

hello_world() -> io:fwrite("hello_world\n").