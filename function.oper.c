# fun.all-operator
#include<stdio.h>
int add();
int sub();
int multi();
int div();
int mod();

    int a,b;
    int add(){
        printf("enter the value of a and b");
        scanf("%d%d",&a,&b);
        a=a+b;
        printf("the addition is=%d",a);
    }
        int sub(){
            printf("enter the value of a and b:");
           scanf("%d%d",&a,&b);
           a=a-b;
           printf("the subtraction is=%d",a);
        }
         int multi(){
            printf("enter the value of a and b:");
           scanf("%d%d",&a,&b);
           a=a*b;
           printf("the multipicatin is=%d",a);
        }
         int div(){
            printf("enter the value of a and b:");
           scanf("%d%d",&a,&b);
           a=a/b;
           printf("the division is=%d",a);
        }
       int mod(){
            printf("enter the value of a and b:");
           scanf("%d%d",&a,&b);
           a=a%b;
           printf("the modulo is=%d",a);
        }
        int main() {
    add();
    sub();
    multi();
    div();
    mod();
    return 0;
}
