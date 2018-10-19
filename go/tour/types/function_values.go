package main

import (
        "fmt"
        "math"
)

func compute(x float64, fn func(float64, float64) float64) float64 {
        return fn(2, 3) * x
}

func hypot2(x, y float64) float64 {
        return math.Sqrt(x * x + x * y)
}


func main() {
        // Hypot is not defined globally, only available here.
        hypot := func(x, y float64) float64 {
                return math.Sqrt(x * x + x * y)
        }
        fmt.Println(hypot(3, 4))
        fmt.Println(hypot2(3, 4))
        fmt.Println(compute(4.0, hypot))
        fmt.Println(compute(4.0, hypot2))
}
