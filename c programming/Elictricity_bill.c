# include <stdio.h>
int main(){
    int customer_id, prev_read, current_read,usage, pay;
    printf("Enter the customer Id:");
    scanf("%d",&customer_id);
    printf("Enter the previous reading:");
    scanf("%d",&prev_read);
    printf("Enter the current Reading:");
    scanf("%d",&current_read);

    usage=current_read-prev_read;
    printf("%d",usage);

    if(usage>=0 && usage<=50){
        pay=usage*1;
        printf("customer_Id\t=\t%d\nprev_read\t=\t%d\ncurrent_read\t=\t%d\nusage\t\t=\t%d\npay\t\t=\t%d\n",customer_id,prev_read,current_read,usage,pay);
    } 
    
    else if(usage>=51 && usage<=100){
        pay=usage*2;
        printf("customer_Id\t=\t%d\nprev_read\t=\t%d\ncurrent_read\t=\t%d\nusage\t\t=\t%d\npay\t\t=\t%d\n",customer_id,prev_read,current_read,usage,pay);
    }
    else if(usage>=101 && usage<=200){
        pay=usage*3;
        printf("customer_Id\t=\t%d\nprev_read\t=\t%d\ncurrent_read\t=\t%d\nusage\t\t=\t%d\npay\t\t=\t%d\n",customer_id,prev_read,current_read,usage,pay);
    } 
    else if(usage>=201 && usage<=400){
        pay=usage*4;
        printf("customer_Id\t=\t%d\nprev_read\t=\t%d\ncurrent_read\t=\t%d\nusage\t\t=\t%d\npay\t\t=\t%d\n",customer_id,prev_read,current_read,usage,pay);
    } 
    else{
        printf("Invalid bill");
    }
    return 0;
}