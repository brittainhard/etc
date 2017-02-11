package main

import "fmt"

// The := syntax can be used inside functions, but nto as global declarations.
func main() {
    var i, j int = 1, 2
    k := 3
    c, python, java := true, false, "No!"
    fmt.Println(i, j, k, c, python, java)
}
