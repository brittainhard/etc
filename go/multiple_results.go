// Is the syntax for dealing with multiple results the ":=" thing? This wasn't
// really explained in the example on the website.

package main

import "fmt"


func swap(x, y string) (string, string) {
    return y, x
}

func main() {
    a, b := swap("Hello", "World")
    fmt.Println(a, b)
}
