package main

import (
    "fmt"
)

func main(){
	var t int
	fmt.Scan(&t)
	for j := 1; j <= t; j++ {
		var n, l, r int
		fmt.Scan(&n)
		fmt.Scan(&l)
		fmt.Scan(&r)
		fmt.Println(n|(((1 << uint(l - 1)) - 1) ^ ((1 << uint(r)) - 1))) 
	}
}