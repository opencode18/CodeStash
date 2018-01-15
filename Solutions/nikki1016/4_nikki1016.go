package main

import (
	"fmt"
)

func Bubblesort(arr [1005]int) {

	swapped := true;
	for swapped {
		swapped = false
		for i := 0; i < len(arr) - 1; i++ {
			if arr[i + 1] < arr[i] {
				Swap(arr, i, i + 1)
				swapped = true
			}
		}
	}	
}

func Swap(arr [1005]int, i, j int) {
	tmp := arr[j]
	arr[j] = arr[i]
	arr[i] = tmp
}

func max(a ,  b int )(int){
	if( a > b){
		return a; 
	} else{
		return b;
	}
}
func main() {
	var k,  t int;
	 fmt.Scan(&t)
	for k = 0; k<t; k++ {
		var n , i, j int;
		
		fmt.Scan(&n)
		arr := make([]int, n, 1005)
		brr := make([]int, n, 1005)
		for i = 0; i<n; i++ {
			fmt.Scan(&arr[i])
			brr[i] = 0;
		}
		//Bubblesort(arr)
		swapped := true;
		for swapped {
			swapped = false
			for i := 0; i < len(arr) - 1; i++ {
				if arr[i + 1] < arr[i] {
					tmp := arr[i+1]
					arr[i+1] = arr[i]
					arr[i] = tmp
					swapped = true
				}
			}
		}
			for i =0; i< n; i++{
			c := arr[i]
			for j = i; j <n; j++ {
				if( arr[j] % c == 0 && i!=j){
					brr[j] = max(brr[i]+1, brr[j]);
				} else{
					brr[j] = max(brr[i], brr[j]);
				}
			}
		
		}
		if( brr[n-1] > 0){
			fmt.Println(brr[n-1]+1, " "); 
		} else{
			fmt.Println("-1"); 
		}
	}
	
}
