#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int star = 1;
    int space = n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=space;j++){
            printf(" ");
        }
        for(j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star ++;
        space--;
    }

}