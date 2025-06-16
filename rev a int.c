#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
int r=0;
while(a>0){
        r=r*10+a%10;
        a/=10;
}
printf("%d",r);
}

