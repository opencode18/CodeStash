    package main
     
    import (
    	"fmt"
    	"strings"
    )
     
    func reverse_words(s string) string {
    	words := strings.Fields(s)
    	for i, j := 0, len(words)-1; i < j; i, j = i+1, j-1 {
    		words[i], words[j] = words[j], words[i]
    	}
    	return strings.Join(words, ".")
    }
     
    func main() {
    	var t int
    	fmt.Scan(&t)
    	for j := 0; j < t; j++ {
    		var a string
    		fmt.Scan(&a)
    		fmt.Println(reverse_words(strings.Replace(a, ".", " ", -1)))
    	}
    }