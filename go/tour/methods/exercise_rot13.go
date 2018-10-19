package main

import (
        "io"
        "os"
        "strings"
)

type rot13reader {
        r io.Reader
}

func (r *rot13reader) Read(b []byte) string {
}

func main() {
        s := strings.NewReader("Lbh penpxrq gur pbqr!")
        r := rot13reader{s}
        io.Copy(os.Stdout, &r)
}
