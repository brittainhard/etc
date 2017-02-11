package main

import (
    "fmt"
    "math"
)


func abs(x float64) float64 {
    if x < 0.0 {
        return x * -1
    } else {
        return x
    }
}

func is_precise(x, y float64) bool {
    return math.Abs(math.Pow(x, 2.0) - y) < 0.1
}
    

func sqrt(x float64) float64 {
    root := float64(1)
    for !is_precise(root, x) {
        root = root - ((math.Pow(root, 2.0) - x) / (2 * root))
    }
    return root
}

func main() {
    fmt.Println(sqrt(4))
    fmt.Println(math.Sqrt(4))
}
