#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int x,y,p,min=0,max=0;
scanf("%d%d%d",&x,&y,&p);
for(int i=1;i<=p;i++){
if(i%2==0)
y=y*2;
else
x=x*2;
}
if(x>y){
max=x;
min=y;
}
else{
max=y;
min=x;
}
printf("%d",max/min);
}
return 0;
}