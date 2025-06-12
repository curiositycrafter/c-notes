#include<stdio.h>
void main(){
int i=0;
for(;;){
 printf("%d",i++);
 if(i==0){
    break;
 }
}
}
