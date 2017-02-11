package main


import (
    "fmt"
    "math"
)


func pow(x, n, lim float64) float64 {
    if v := math.Pow(x, n); v < lim {
        return v
    } else {
        fmt.Printf("%g >= %g\n", v, lim)
    }
    // Can't use the v variable after this flow has executed. Would probably
    // need to add another statement if you want to keep the v variable.
    return lim
}

func main() {
    fmt.Println(
        pow(3, 2, 10),
        pow(3, 3, 20),
    )
}

