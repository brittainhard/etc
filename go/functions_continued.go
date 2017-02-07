package main

import "fmt"


// Just a way to show arguments without having to repeat "int". Its like when
// declaring variables you dont have to do int a, int b, int c, etc. Nothing
// special here.

func add(x, y int) int {
    return x + y
}

func main() {
    fmt.Println(add(42, 13))
}
