#include<stdio.h>
void main(){
    int a,i=0;
    // if(    scanf("%d",&a)!=1){
    //     printf("No intervals to merge.");
    // }
    // else{scanf("%d",&a)
    scanf("%d",&a);
    //if(a==-5){printf("Invalid input");}
  if(a>0){
    int b[a],c[a],f=a;
        while(a>0){
            scanf("%d",&b[i]);
            scanf("%d",&c[i]);
            int j=b[i],k=c[i];
            /*if(b[i-1]<j && j<c[i-1] && i!=0){
               // b[i-1]=j;b[i]=0;
                if(c[i-1]<k){
                    c[i]=k;c[i-1]=0;
                    b[i]=b[i-1];
                    b[i-1]=0;
                }
                else{
                    c[i]=c[i-1];
                    c[i-1]=0;
                    b[i]=b[i-1];
                    b[i-1]=0;
                }
            }
            else {if(i!=0){
                if(c[i-1]<c[i]){
                b[i-1]=0;
                    c[i-1]=0;
                }
                else{
                    b[i-1]=0;c[i]=c[i-1];
                    c[i-1]=0;
                }
            }}*/
            //if(k<c[j-1] && i!=0){c[i-1]=k;c[i]=0;}
            if(j<=c[i-1]&&i!=0){
                b[i]=b[i-1];
                b[i-1]=0;
                c[i]=(c[i]<c[i-1])?c[i-1]:c[i];
                c[i-1]=0;
            }
        i++;a--;}
        for(int y=0;y<f;y++){
            if(b[y]!=0 &&c[y]!=0)
            printf("%d %d\n",b[y],c[y]);
        }
    }
    else{
        printf("Invalid input");
    }
   // }
}
