// In variables and functions, the type comes after the name of the thing.
// Otherwise this is very straightforward.

package main

import "fmt"


func add(x int, y int) int {
    return x + y
}

func main() {
    fmt.Println(add(42, 13))
}
