package main

import "fmt"


const Pi = 3.14

func main(){
    // := syntax is just for new variables, since it does type inference. Also,
    // a constant is just like it sounds. Cannot change its value. Also, it must
    // be explicitly defined, cannot be defined using the shorthand := syntax.
    // However, you apparently dont have tp specify type.
    const World = "Potato"
    // Doesnt work
    // World = "Apple"
    a := "Potato"
    a = "Apple"
    fmt.Printf("%v\n", a)
}
