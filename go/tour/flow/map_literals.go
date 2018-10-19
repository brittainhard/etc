package main

import "fmt"

type Vertex struct {
        Lat, Long float64
}

var m = map[string]Vertex{
        "Bell Labs": Vertex{
                40.68433, -74.39967,
        },
	"Google": Vertex{
		37.42202, -122.08408,
	},
}

func main() {
	a := make(map[int]string)
	a[2] = "John"
        var b map[int]int
        fmt.Println(b)
	fmt.Println(m)
	fmt.Println(a)
}
