package main


import (
    "fmt"
    "math"
)


func pow(x, n, lim float64) float64 {
    // Set the variable, then test the variable you just created. Sweet.
    if v := math.Pow(x, n); v < lim {
        return v
    }
    return lim
}

func main() {
    fmt.Println(
        pow(3, 2, 10),
        pow(3, 3, 20),
    )
}
