#include<stdio.h>
#include<string.h>
void main(){
char a[100];
scanf("%s",a);
int i,j;
for(i=0,j=strlen(a)-1;i<strlen(a)/2,a[i]==a[j];i++,j--);
if(i==strlen(a)-1)printf("Palindrome");
else printf("not a Palindrome");
}
