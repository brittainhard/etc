package main

import (
        "fmt"
        "math"
)

const mindiff = 0.0001

func improve(n, guess float64) float64 {
        return ((n / guess) + guess) / 2
}

func good_enough(n, guess float64) bool {
        return math.Abs(n - math.Pow(guess, 2)) < mindiff

}

func newton_root(n, guess float64) float64 {
        if good_enough(n, guess) {
                return guess
        } else {
                return newton_root(n, improve(n, guess))
        }
}

func main() {
        fmt.Println(newton_root(6, mindiff))
}
