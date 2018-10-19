package main

import "golang.org/x/tour/pic"

func Pic(dx, dy int) [][]uint8 {
        a := make([][]uint8, dy)

        for i := 0; i < dy; i++ {
                a[i] = make([]uint8, dx)
        }

        for i := range a {
                for j := range a[i] {
                        a[i][j] = uint8(1)
                }
        }

        return a
}

func main() {
        pic.Show(Pic)
}
