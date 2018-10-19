package main

import "fmt"

func fibb() func(int) int {
        former := 1
        return func(latter int) int {
                current := former + latter
                former = latter
                return current
        }
}

func main() {
        f := fibb()
        n := 0
        for i := 0; i < 10; i++ {
                fmt.Println(n)
                n = f(n)
        }
}
