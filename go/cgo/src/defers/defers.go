package defers

// #include "defers.h"
import "C"
import "fmt"


func DoDefer() {
    defer C.hello_defer()
    for i:= 10; i >= 0; i-- {
        fmt.Println(i)
    }
}
