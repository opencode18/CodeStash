import java.util.*;
import java.lang.*;
import java.io.*;
class senky {
	
	public static void reverse(String [] str,int n){
        
        for(int j=0;j<n;j++){
            String s = str[j];
            String [] words = s.split("\\.");        
            for(int i=words.length-1;i>=0;i--){  
                if(i==0){
                    System.out.print(words[i]);
                }else
                System.out.print(words[i]+".");
                

            }  
            System.out.println();
        }
    }
    public static void main (String[] args) {
	    Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String [] str = new String[n];
        for(int k=0;k<n;k++){
            str[k] = scan.next();
        }
        reverse(str,n) ;
	}
}