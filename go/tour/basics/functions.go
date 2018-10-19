package main

import "fmt"

func add(x, y int) int {
        return x + y
}

// Combining shorter stuff looks like this. Doesn't seem to care about order.
func potato(x, y int, p string, z int) {
        fmt.Println(p)
}

func main() {
        fmt.Println(add(2, 3))
        potato(1, 2, "hey", 3)
}
