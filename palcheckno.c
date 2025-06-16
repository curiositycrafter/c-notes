#include<stdio.h>
#include<string.h>
int pal(char a[]){
    int k=(strlen(a)%2==0)?1:0;
for(int i=0;i<k+(strlen(a)/2);i++){
    for(int j=strlen(a)-1;j>(strlen(a)/2)+k;j--){
        if(a[i]!=a[j]){
            return 0;}}}
return 1;}
//56 121
void main(){
char a[100];
int f=0;
scanf("%s",a);
printf(pal(a)==0?"Not a pal":"Pal");
}
