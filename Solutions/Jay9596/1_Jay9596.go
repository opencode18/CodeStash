package main

import (
	"fmt"
)

func main() {
	var n, x, y, p int
	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d %d %d\n", &x, &y, &p)
		for p > 0 {
			if p%2 == 0 {
				y *= 2
			} else {
				x *= 2
			}
			p--
		}
		x, y = setOrd(x, y)
		fmt.Println(x / y)
	}
}

func setOrd(x, y int) (int, int) {
	if x > y {
		return x, y
	}
	return y, x
}
