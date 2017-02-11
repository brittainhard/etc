// Is the syntax for dealing with multiple results the ":=" thing? This wasn't
// really explained in the example on the website.

package main

import "fmt"


func swap(x, y string) (string, string) {
    return y, x
}

func main() {
    // It looks like this syntax is shorthand for assignment and type. You can
    // set this without having to define the variable with a type.
    a, b := swap("Hello", "World")
    fmt.Println(a, b)
}
