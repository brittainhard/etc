package main

// Simple. It just imports the rand package. It looks like the formatting here
// is neessary because of the lack of use of commas. Might be another way to
// write he import statement.

import (
    "fmt"
    "math/rand"
)

func main (){
    fmt.Println("My favorite number is", rand.Intn(10))
}
