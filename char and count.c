#include<stdio.h>
#include<string.h>
void main() {
char a[100],z[100]="";
int f=0;
scanf("%s",a);
for(int i=0;i<strlen(a);i++){
    int c=1,flag=1;
    for(int j=i+1;j<strlen(a);j++){
        if(a[i]==a[j]){//this logic was fine
     c+=1;   
    }}
        for(int k=0;k<strlen(z);k++){
            if(a[i]==z[k]){flag=0;//u made a mistake here as u checked for the letters not in the array and that caused prob and u missed break too
            break;
            }
        }
        if(flag==1){z[f++]=a[i];
    printf("%c %d",a[i],c);}//this logic was fine
}
}
