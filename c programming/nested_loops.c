#include<stdio.h>
int main(){
    int n,i=1,j=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        while(j<=10){
            printf("%d\t",(i*j));
            j++;
        }
        i++;
        printf("\n");
      
    }
    return 0;
}