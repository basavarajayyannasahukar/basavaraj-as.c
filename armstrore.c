#include<stdio.h>
#include<math.h>
int main(){
    int num,original,remainder,result=0;
    printf("enter the intiger");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainder=num%10;
        result+=remainder*remainder*remainder;
        num/=10;
    }
    if(result==original){
        printf("%d is polindrome\n",original);
    }
    else{
        printf("%d is not polindrome\n",original);
    }
    return 0;
}
