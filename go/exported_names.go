// In go, exported names begin with a capital letter. Importing math.pi breaks
// the program, but math.Pi does not.

package main

import (
    "fmt"
    "math"
)

func main() {
    fmt.Println(math.Pi)
}
