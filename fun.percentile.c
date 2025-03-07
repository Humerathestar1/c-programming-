# 14.fun.percentile
#include <stdio.h>
int fun();
int main(){
   fun();
 
}
int fun() {
   int a;
   printf("enter your percentage=");
   scanf("%d",&a);
   if(75<=a){
       printf("you eligible to give jee exam\n");
       int b;
        printf("enter your percentile=");
        scanf("%d",&b);
        if(90<=b){
            printf("you are selected in collage\n");
        }
        else{
              printf("you are not selected in collage\n");
        }
    }
