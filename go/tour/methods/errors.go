package main

import (
        "fmt"
        "time"
)

type Person struct {
        Name string
        Age int
}

type PersonError struct {
        When time.Time
        What string
}

func (p *PersonError) Error() string {
        return fmt.Sprintf("at %v, %s", p.When, p.What)
}

func (p *Person) run() (bool, error) {
        if p.Name != "Brittain" {
                return false, &PersonError{
                        time.Now(),
                        "wrong name",
                }
        } else {
                return true, nil
        }
}

func main() {
        p := Person{"Brittain", 31}
        a := Person{"Kelly", 28}

        if r, e := p.run(); e != nil {
                fmt.Println(e)
        } else {
                fmt.Println(r)
        }

        if r, e := a.run(); e != nil {
                fmt.Println(e)
        } else {
                fmt.Println(r)
        }
}
