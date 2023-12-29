// #include <stdio.h>
// int main(){
//     int num, sum=0, m;
//     printf("enter a number:");
//     scanf("%d",&num);
//     while(num>0){
//         m=num%10;
//         sum=sum+m;
//         num=num/10;
//     }
//     printf("%d",sum);
// }

//Reverse of a number logic=num!=0 rem=num%10  rev=0, rev=rev*10+rem num=num/10 
// #include <stdio.h>
// int main(){
//     int number, rem, rev=0;
//     printf("Enter the value of number:");
//     scanf("%d",&number);
//     while(number!=0){
//        rem=number%10;
//        rev=rev*10+rem;
//        number=number/10; 
//     }
//     printf("reverse of a number is:%d",rev);
//     return 0;
// }



//Prime number or not
#include<stdio.h>
int main(){
    int i,n,m, factor=0;
    printf("Enter any number:");
    scanf("%d",&n);
    m=n/2;
    for(i=2; i<=m;i++){
        if(n%i==0){
            printf("Number is not a prime number");
            factor=factor+1;
            break;
        }
    }
    if(factor==0){
        printf("number is prime number");
    }
    return 0;
}