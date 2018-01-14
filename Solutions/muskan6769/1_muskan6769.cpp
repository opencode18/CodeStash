#include<iostream>
using namespace std;
int main()
   {int t,i,x,y,p,max,min;
      cin>>t;
      while(t--){
          cin>>x>>y>>p;
          for(i=1;i<=p;i++)
                {
                    if(i%2==0)
                       {
                          y=y*2;}
                    else
                          x=x*2;
                 }

      if(x>y)
        { max=x;
         min=y;}
      else{
        max=y;
        min=x;}
    cout<<max/min<<endl;
   }
return 0;
}


          
