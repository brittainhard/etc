package main

import "fmt"

var apple = func() func(int) int {
        return func(x int) int {
                return x + 1
        }
}

func adder() func(int) int {
        sum := 0
        a := apple()
        fmt.Println(a(1))
        return func(x int) int {
                sum += x
                return sum
        }
}

func main() {
        pos, neg := adder(), adder()
        for i:= 0; i < 10; i++ {
                fmt.Println(
                        pos(i),
                        neg(-2 * i),
                )
        }
}
