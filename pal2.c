#include<stdio.h>
#include<string.h>
void main(){
char a[100];
scanf("%s",a);
int d=strlen(a)%2==0?1:0;
for(int i=0,j=strlen(a)-1;i<strlen(a)/2,j>((strlen(a)/2)-d);i++,j--)printf("%c %c\n",a[i],a[j]);
}
