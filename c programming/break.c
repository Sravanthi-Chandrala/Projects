// #include <stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         if(i==5){
//             break;
//         }
//         printf("%d\n",i);
//        i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<=3; i++){
        printf("%d\n",i);
        if (n<0){
            continue;
        }
        sum=sum+n;
    }
    printf("%d\n",sum);
    printf("%d",i);
    return 0;
}

//
// #include <stdio.h>
// int main()
// {
//    int n;
//    printf("Enter the number of times you want to print your name:");
//    scanf("%d", &n);
//    char name[25];
//    printf("\nEnter your name:");
//    scanf("%s", name);
//    for(int i = 1; i <= n; i++) {
//         if(i % 5 == 0)
//             break;
//         printf("%s\n", name);
//    }
//    return 0;
// }