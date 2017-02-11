package main

import (
    "fmt"
    "math/cmplx"
)


var (
    ToBe bool = false
    MaxInt uint64 = 1 << 64 - 1
    z complex128 = cmplx.Sqrt(-5 + 12i)
)

func main() {
    // Use %T to print tye type, and %v to print the value. These look like they
    // are independent of the type. 
    fmt.Printf("Type %T Value %v\n", ToBe, ToBe)
    fmt.Printf("Type %T Value %v\n", MaxInt, MaxInt)
    fmt.Printf("Type %T Value %v\n", z, z)
}
