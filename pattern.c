#include<stdio.h>
void main(){
    int n=3;
for(int i=1;i<=n;i++){
        for(int s=n-i;s>0;s--,printf(" "));
    for(int j=0;j<2*i-1;j++){
        if(i==n||j==0 ||j==2*i-2) printf("*");
        else printf(" ");}
        printf("\n");}}
