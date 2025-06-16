#include<stdio.h>
void main(){
    char a;
    int b;
    scanf("%c %d",&a,&b);//Y 3
    for(int i=0;i<b;i++){
        int t=a+i;//121+0
        if(t>122){
            t-=26;
        }//121
        for(int j=0;j<b;j++){//121 122 123
            if((t+j)>122){
                printf("%c ",(char)(t+j-26));
            }
            else{
            printf("%c ",(char)(t+j));//Y Z  A
            }
        }
        printf("\n");
    }
    //printf("%c",(char)(123-26));
}
