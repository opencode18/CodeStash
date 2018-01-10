#include <iostream>
using namespace std;

void rankify(int* a ,int n){

    float b[n]={0};
    for (int i=0;i<n;i++){
        int r=1,s=1;
        for (int j=0;j<n;j++){
            if (j != i && a[j] < a[i])
                r += 1;
            if (j != i && a[j] == a[i])
                s += 1;
        }

        b[i] = r + (float)(s - 1)/(float) 2;

    }

    for(int i=0;i<n;i++)
        cout<<b[i]<<' ';

    }

int main() {
    int a[100],i=0;
    while(scanf("%d ",&a[i]) != EOF)
    {
    	i++;
    }
    int n=i;
    rankify(a,n);

    return 0;
}
