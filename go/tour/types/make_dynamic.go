package main

import "fmt"

func make_array(size, max int) []int {
        return make([]int, size, max)
}

func main() {
        a := make_array(5, 10)
        b := [2]int{1, 2}
        fmt.Println("")
        fmt.Println(a, b)
}
