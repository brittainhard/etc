package main

import (
        "fmt"
        "strings"
)

func main() {
        board := [][]string{
                []string{"_", "_", "_"},
                []string{"_", "_", "_"},
                []string{"_", "_", "_"},
        }
        board[0][0] = "X"
        board[2][2] = "O"
        board[1][2] = "X"
        board[1][0] = "O"
        board[0][2] = "X"

        for i := 0; i < len(board); i++ {
                fmt.Printf("%s\n", strings.Join(board[i], " "))
        }
        john := "John"
        paul := []string{"P", "a", "u", "l"}
        fmt.Println(john[0])
        fmt.Println(paul[0])
}
