#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int star=n;
    for(i = 1; i<=n; i++){
        for(j = 1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star--;
    }
} 