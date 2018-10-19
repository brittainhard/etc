package main


import (
        "fmt"
        "sync"
        "time"
)


// Safe to use concurrently.
type SafeCounter struct {
        v map[string]int
        mux sync.Mutex
}


// Increments the counter for the given key.
func (c *SafeCounter) Inc(key string) {
        // Lock so only one goroutine can access map c.v
        c.mux.Lock()

        c.v[key]++
        c.mux.Unlock()
}

// Returns the current value of the counter for the given key
func (c *SafeCounter) Value(key string) int {
        // Lock so only one goroutine can access map c.v
        c.mux.Lock()

        defer c.mux.Unlock()
        return c.v[key]
}

func main() {
        c := SafeCounter{v: make(map[string]int)}

        for i:= 0; i < 100; i++ {
                go c.Inc("somekey")
        }
        time.Sleep(time.Second)
        fmt.Println(c.Value("somekey"))
}
