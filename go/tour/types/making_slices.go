package main

import "fmt"

func main() {
        a := make([]int, 5)
        b := make([]int, 0, 10)
        c := make(a, 10)
        fmt.Println(a, b, c)
}
