#include <iostream>
using namespace std;

void rankify(int* ar ,int n){
    float rank[n] = {0};
    for (int i=0;i<n;i++){
        int r=1,s=1;
        for (int j=0;j<n;j++){
            if (j != i && ar[j] < ar[i]) {
                r += 1;
            }
            if (j != i && ar[j] == ar[i]) {
                s += 1;      
            }
        }
         
        // rank
        rank[i] = r + (float)(s - 1)/(float) 2;
    
    }
    for(int i=0;i<n;i++){
        cout<<rank[i]<<' ';
    }
}
int main() {
    int n;
    cin>>n;
    int ar[n];
     
    for(int i=0;i<n;i++) {
        cin>>ar[i];
    }
     
    rankify(ar,n);
     
    return 0;
}