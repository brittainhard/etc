package main

import (
    "fmt"
    "math"
)

func main(){
    // To convert betweeo types, you have to be explicit about what you are
    // converting it do.
    x, y := 3, 4
    f := math.Sqrt(float64(x * x + y * y))
    z := uint(f)
    fmt.Println(x, y, z, f)
}
