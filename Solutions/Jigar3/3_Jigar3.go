package main

import "fmt"

func main() {
    var t int
    fmt.Scan(&t)
    for t>0 {
      var x int
      fmt.Scan(&x)
      ans := x/2
      fmt.Println(ans)
      t-=1
    }
}
