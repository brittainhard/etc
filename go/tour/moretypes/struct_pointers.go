package main

import "fmt"


type Vertex struct {
        X int
        Y int
}


func main() {
        v := Vertex{1, 2}
        p := &v
        p.X = 1e9
        // This is how you should actually change stuff, an the other way is
        // just syntactic sugar. I wonder what it would
        // be like in c...
        (*p).Y = 4
        fmt.Println(v)
}
