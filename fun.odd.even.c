# 10.fun-odd-even
#include <stdio.h>
int even();
int main(){
    even();
}

 int even()
 {
     int n;
     
     printf("enter the value:");
     scanf("%d",&n);
     if(n%2==0){
         printf("even no");
     }
         else{
             printf("odd no");
         }
         return 0;
 }
