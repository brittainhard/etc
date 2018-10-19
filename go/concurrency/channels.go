package main

import (
        "fmt"
        "time"
)

func pinger(c chan string, limit int) {
        for i := 0; i <= limit; i++ {
                if i % 2 == 0 {
                        c <-"ping!"
                } else {
                        c <-"pong!"
                }

        }
}

func printer(c chan string) {
        for {
                msg := <-c
                fmt.Println(msg)
                time.Sleep(time.Second * 1)
        }
}

func main() {
        var c chan string = make(chan string)
        go pinger(c, 5)
        go printer(c)
        var input string
        fmt.Scanln(&input)
}
