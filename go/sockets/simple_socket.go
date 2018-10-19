package main


import (
        "net"
        "fmt"
        "io/ioutil"
        "os"
)

func checkError(err error) {
    if err != nil {
        fmt.Fprintf(os.Stderr, "Fatal error: %s", err.Error())
        os.Exit(1)
    }
}

func main() {
        addr, err := net.ResolveTCPAddr("tcp4", "127.0.0.1:15000")
	checkError(err)
        conn, err := net.DialTCP("tcp", nil, addr)
	checkError(err)
        _, err = conn.Write([]byte("Potato"))
	checkError(err)
        result, err := ioutil.ReadAll(conn)
	checkError(err)
        fmt.Println(string(result))
        os.Exit(0)
}
