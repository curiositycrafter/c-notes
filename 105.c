#include<stdio.h>
void main(){
for(int i=0;i<5;i++){
for(int j=0;j<10;j++){
        if(j<i+1 || i+j>=9){
    printf("*");}
    else{
        printf("0");
    }
}
printf("\n");
}}

