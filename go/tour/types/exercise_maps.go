package main

import (
        "strings"
        "golang.org/x/tour/wc"
)

func WordCount(s string) map[string]int {
        a := make(map[string]int)
        b := strings.Split(s, " ")
        for i := 0; i < len(b); i++ {
                _, ok := a[b[i]]
                if ok {
                        a[b[i]] += 1
                } else {
                        a[b[i]] = 1
                }
        }
        return a
}


func main() {
        wc.Test(WordCount)
}
