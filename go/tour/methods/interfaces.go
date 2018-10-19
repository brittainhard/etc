package main

import "fmt"

type PersonInterface interface {
        DoThing() int
        DoOtherThing(int) int
}

type Person struct {
        Name string
        Age int
}

type Gender struct {
        Gender string
}

func (p Person) DoThing() int {
        return 1
}

func (p Person) DoOtherThing(n int) int {
        return 1
}

func main() {
        var i PersonInterface
        i = Person{"Kelly", 28}
        i.DoOtherThing(1)
        fmt.Println(i)
}
