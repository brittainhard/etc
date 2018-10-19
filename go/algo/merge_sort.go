package main


import (
        "fmt"
        "math/rand"
)


func randArray(length int) []int {
        a := make([]int, 0)
        for i := 0; i < length; i++ {
                a = append(a, rand.Intn(length))
        }
        return a
}

func main() {
        a := randArray(99)
        fmt.Println(a)
}
