package main

/*
#include "hello.h"
*/
import "C"


func main() {
    C.hello_world()
    C.hello_world()
    C.hello_world()
    C.hello_world()
}
