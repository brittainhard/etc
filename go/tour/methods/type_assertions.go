package main

import "fmt"

func main() {
        // Interfaces are for values where you don't know what the hell is going
        // on.
        var i interface{} = "Hello"

        s := i.(string)
        fmt.Println(s)

        s, ok := i.(string)
        fmt.Println(s, ok)

        f, ok := i.(float64)
        fmt.Println(f, ok)
}
