#include<stdio.h>
void main(){
    int a,f=0;
    scanf("%d",&a);//30
    for(int i=2;i<a;i++){//2-29

        if (i!=2 &&i!=3 &&i!=5 && a%i==0){
            f=1;
        }
    }
    printf("%s",(f==1)?"Ugly":"Neat");
}
/*
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a <= 0) {
        printf("Neat\n");
        return 0;
    }

    while (a % 2 == 0) a /= 2;
    while (a % 3 == 0) a /= 3;
    while (a % 5 == 0) a /= 5;

    if (a == 1)
        printf("Ugly\n");
    else
        printf("Neat\n");

    return 0;
}

/*
