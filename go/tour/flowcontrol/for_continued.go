package main

import "fmt"


// So This syntax is a bit weird. Just geting rid of the ++ thing and the i :=
// thing.
func main() {
    sum := 1
    for ; sum < 1000; {
        sum += sum
    }
    fmt.Println(sum)
}
