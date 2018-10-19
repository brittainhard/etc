package main

import (
        "fmt"
        "math"
)

func main() {
        // Applying types like functions, kinda cool.
        x, y := 3, 6
        z := math.Sqrt(float64(x * x + y * y))
        a := uint(z)
        fmt.Println(x, y, z, a)
}
