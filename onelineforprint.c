/*#include<stdio.h>
void main(){

    for(int i=0;i<5;i++,(for(int j=0;j<5;j++,printf("*"))));    ->Here u can only do a function call not others like loops ok?
}*/
#include<stdio.h>
void a(){
    for(int j=0;j<5;j++,printf("*"));
}
void main(){

for(int i=0;i<5;i++,a(),printf("\n"));
}
//the above is valid and u can use it as well
