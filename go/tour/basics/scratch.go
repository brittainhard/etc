package main

import "fmt"


func add(x, y int) int {
    return x + y
}

func main() {
    var a int = add(1, 2)
    fmt.Println(a)
}
