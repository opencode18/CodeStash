package main
import "fmt"

func main(){
	
	var t int
	fmt.Scan(&t)
	for z:=0; z<t; z++ {
		var n int
		fmt.Scan(&n)
		var a [100009]int
		
		for i:=0; i<n; i++ {
			fmt.Scan(&a[i])
		}
		for i:=0; i<n; i++ {
			for j:=i+1; j<n; j++ {
				if(a[i] > a[j]) {
					var tmp int
					tmp=a[i]
					a[i]=a[j]
					a[j]=tmp
				}
			}
		}
		
		var b [100009]int
		
		for i:=0; i<n; i++ {
			b[i]=1
		}
		
		var max_max=0
		
		for i:=1; i<n; i++ {
			var tmp int
			tmp=a[i]
			for j:=0; j<i; j++ {
				if(a[j]%tmp==0 || tmp%a[j]==0) {
					if(b[i] > (b[j]+1)) {
						b[i]=b[i]
					} else {
						b[i]=b[j]+1
					}
					
					if(max_max > b[i]) {
						max_max=max_max
					} else {
						max_max=b[i]
					}
				}
			}
		}
		
		if (max_max==1) {
			fmt.Println("-1")
		} else {
			fmt.Printf("%d ", max_max)
		}
		fmt.Printf("\n")
	}
}