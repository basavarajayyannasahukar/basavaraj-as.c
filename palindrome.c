#include<stdio.h>
int main(){
    int num,remainder,reverced=0,original;
    printf("enter the number intiger");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainder=num%10;
        reverced=reverced*10+remainder;
        num/=10;
    }
    if(reverced==original){
        printf("%d is polindrome\n",original);
    }
    else{
        printf("%d is not polindrome\n",original);
    }
    return 0;
}
