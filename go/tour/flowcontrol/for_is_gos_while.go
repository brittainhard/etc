package main

import "fmt"


func main() {
    sum := 1
    // There ain't no while thing, just a for thing. Kind of nice.
    for sum < 100 {
        sum += sum
    }
    fmt.Println(sum)
}
