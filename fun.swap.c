# 4. fun-swap
#include<stdio.h>
int swap();
int main(){
    swap;
    int n1;
    printf("enter the value of n1:");
    scanf("%d",&n1);
    int n2;
    printf("enter the value of n2:");
    scanf("%d",&n2);
    printf("before swapping: n1=%d,n2=%d\n\n",n1,n2);
    n2=n1+n2-(n1=n2);
    printf("after swapping:n1=%d,n2=%d\n\n",n1,n2);
}
