// #include<stdio.h>  
// int main(){  
// int i=1,number=0;      
// printf("Enter a number: ");    
// scanf("%d",&number);    
// for(i=1;i<=10;i++){      
// printf("%d*%d=%d\n",number,i,(number*i));    
// }    
// return 0;  
// }

#include <stdio.h>  
int main()  
{  
    int i,j,k;  
    for(i=0,j=0,k=0;i<4,k<8,j<10;i++)  
    {  
        printf("%d %d %d\n",i,j,k);  
        j+=2;  
        k+=3;  
    }
    return 0; 
}