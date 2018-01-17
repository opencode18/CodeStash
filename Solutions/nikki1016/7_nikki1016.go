package main

import ( 
	"fmt"
	"strings"
)

func main(){
	var t int;
	fmt.Scan(&t);
	for z:= 0; z < t; z++{
		var str string;
		fmt.Scan(&str);
		ans := strings.Split(str, ".");
		for v:= len(ans)-1; v >0 ; v-- {
			fmt.Print(ans[v],".");
		}
		fmt.Println(ans[0]);
	}
} 
