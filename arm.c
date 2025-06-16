#include<stdio.h>
#include<math.h>
void main(){
    int a,c=0;
    double s=0;
    scanf("%d",&a);
    int f=a;
    int t=a;
    while(a>0){
        c+=1;
        a/=10;
    }
    while(t>0){
        s+=pow(t%10,c);
        t/=10;
    }
    printf("%s",((int)s==f)?"Yes":"No");
}
