#include<stdio.h>
#include<string.h>
void main(){
    int ip;
    int i=0;
    char v[13][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int d[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    scanf("%d",&ip);
    if(ip>5999 || ip<1){printf("Invalid input");}
    else{
    while(ip>0){if(ip>=d[i]){
        printf("%s",v[i]);
        ip-=d[i];

    }else{i++;}
    }}
        //int f=1;
        // if((ip/d[i])==0){
        //     ip=ip;}
        //     else{
        //     ip/=ip/d[i];
        //     f=1;
        //     printf("%s",v[i]);
        //     }
        //     i++;
        // ip=(f==1?ip-d[i]:ip);   }
    // while(scanf("%c",&ip))
    // for(int i=0;i<strlen(ip);i++){
    //     printf("%c",ip[i]);
    // }

}
