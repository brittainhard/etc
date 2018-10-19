package main

import (
        "fmt"
        "math"
        "reflect"
)

type Vertex struct {
        X float64
        Y float64
}

func (v Vertex) Square() float64 {
        return math.Pow(v.X, v.Y)
}

func main() {
        v := Vertex{3, 3}
        fmt.Println(v.Square())
}
