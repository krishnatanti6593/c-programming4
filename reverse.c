#include<stdio.h>
int main(){
    int num,sum=0,i;
    printf("enter the number");
    scanf("%d",&num);
    int d=num;
    while(num>0){
        i=num%10;
        sum=sum*10+i;
        num=num/10;
    }
    printf("%d is the reverse  of %d",sum,d);
    return 0;
}