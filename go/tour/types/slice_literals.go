package main

import (
        "fmt"
        "reflect"
)

func main() {
        // I guess you don't even need to specify array length?
        q := []int{2, 3, 5, 7, 11, 13}
        fmt.Println(q)

        r := []bool{true, false, true, true, false, true}
        fmt.Println(r)

        s := []struct {
                i int
                b bool
        }{
                {2, true},
                {3, false},
                {5, true},
                {7, true},
                {11, false},
                {13, false},
        }
        fmt.Println(s)
        fmt.Println(reflect.TypeOf(s[0]))
        fmt.Println(reflect.TypeOf(q))
        fmt.Println(len(s), cap(s))
}
