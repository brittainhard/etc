package main


import (
        "math/rand"
        "fmt"
)


func bubbleSort(a []int) {
        for i := 0; i < len(a); i++ {
                for v := 0; v < len(a) - 1; v++ {
                        x := a[v]
                        y := a[v + 1]
                        if x > y {
                                a[v] = y
                                a[v + 1] = x
                        }
                }
        }
}

func randArray(length int) []int {
        a := make([]int, 0)
        for i := 0; i < length; i++ {
                a = append(a, rand.Intn(length))
        }
        return a
}

func main() {
        a := randArray(99)
        bubbleSort(a)
        fmt.Println(a)
}
