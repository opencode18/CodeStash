/*coded by 16priyesh*/
#include <iostream>
using namespace std;

int main() {
    long long int number, temp;
    int t, l, r;
    cin>>t;
    while(t--){
        cin>>number>>l>>r; //taking the inputs 
        temp = 1<<(r-l+1); //calculating the number with all bits from l to r set
        temp -= 1;
        temp = temp<<(l-1);
        number = temp|number; //taking or with that number
        cout<<number<<endl; //printing the number
    }
    return 0;
}