package main

import (
        "fmt"
        "math"
)


const mindiff = 0.0001


type ErrNegativeSqrt float64


func (e ErrNegativeSqrt) Error() string {
        return fmt.Sprintf("need non-negative float64: got %f", e)
}

func Improve(n, guess float64) float64 {
        return ((n / guess) + guess) / 2
}

func GoodEnough(n, guess float64) bool {
        return math.Abs(n - math.Pow(guess, 2)) < mindiff
}

func Sqrt(n, guess float64) (float64, error) {
        if n < 0 {
                return n, ErrNegativeSqrt(n)
        }

        if GoodEnough(n, guess) {
                return guess, nil
        } else {
                return Sqrt(n, Improve(n, guess))
        }
}

func main() {
        fmt.Println(Sqrt(2, 1))
        fmt.Println(Sqrt(-2, 1))
}
