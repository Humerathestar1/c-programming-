# 8. fun.year
#include<stdio.h>
int year();
int main(){
    year();
}

int year(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0){
        printf("is a leap year");
    }
    else{
        printf("its not a leap year");
    }
}
