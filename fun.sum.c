# 9. fun-sum
#include<stdio.h>
int add();
int main(){
    add();
}
int add()
{
    int a,b,sum;
    printf("enter the value of a & b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d",sum);
    return 0;
}
