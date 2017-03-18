package main

import "fmt"


type Vertex struct {
        X, y int
}


var (
        v1 = Vertex{1, 2}
        v2 = Vertex{X: 0} // Y is implcit as 0
        v3 = Vertex{} // X and Y are 0

        // What is the difference here? Is it pointing to a vertex that has not
        // been created? Weird.
        p = &Vertex{1, 2} // *Vertex type.
)


func main() {
        fmt.Println(v1, v2, v3, p)
}
