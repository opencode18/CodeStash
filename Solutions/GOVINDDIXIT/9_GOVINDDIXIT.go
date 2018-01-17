package main
import "fmt"

func main(){
	var t int
	fmt.Scan(&t)
	for i:=0; i<t; i++ {
		var n int
		fmt.Scan(&n)
		var ar [10000]int
		for j:=0; j<n; j++ {
			fmt.Scan(&ar[j])
		}
		var m, a int
		m  = 0
		fmt.Scan(&a)
		for j:=0; j<n; j++ {
			for k:=j+1; k<n; k++ {
				sum := 0
				for l:=j; l<=k; l++ {
					sum += ar[l]
				}
				if sum == a {
					if m < k-j+1 {
						m = k-j+1
					}
				}
			}
		}
		fmt.Println(m)
	}
}
