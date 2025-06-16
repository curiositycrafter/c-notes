#include<stdio.h>
void main(){
int n=123,s=0,i=0;
while(n>0){
    int t=n%10;
    (i%2==0)?(s+=t):(s-=t);
    n/=10;
    i++;//i=!i or i=1 and then i*=-1 and check if its like 1 or -1
}
printf("%d",s);
}
