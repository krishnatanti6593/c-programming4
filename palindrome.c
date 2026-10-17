#include<stdio.h>
int main(){
    int n,sum=0,i;
    printf("enter the number");
    scanf("%d",&n);
    int d=n;
    while(n>0){
        i= n%10;
        sum=sum*10+i;
        n=n/10;
    }
    if( sum==d){
        printf("palidrome");
    }
    else{
        printf("not a palidrome");
    }
    return 0;
}
