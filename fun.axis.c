# 7.fun-axis
#include<stdio.h>
int axis();
int main(){
    axis();
}
int axis(){
    int x,y;
    printf("enter the value of x&y:");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("the point is origin");
    }
    else if(y==0){
        printf("the point lies on x-axis");
    }
    
    else {
        printf("the point lies on y-axis");
    }
}
