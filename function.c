# 1. fun.basic
//call function multiple times
#include <stdio.h>
void greet(){
    printf("hello everyone\n:");
    printf("how are you?\n");
    return;
}

int main()
{
    greet();
    greet();
    greet();
    return 0;
}
# 2. fun.multiple-times
#include <stdio.h>
void england(){
    printf("you are in england\n");
    return;
}
void australia(){
    printf("you are in australia\n");
    england();
    return;
}
void india(){
    printf("you are in india\n");
    australia();
    return;
}
int main(){
    
    india();
    return 0;
    
}
# 3.fun.all-operator
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
# 5. fun-cube
#include <stdio.h>
int cube();
int main(){
    cube();
}
int cube()
{
    int i;
    printf("enter any no:");
    scanf("%d",&i);
    i*=i;
    printf("cube %d",i);

    return 0;
}
# 6.fun.table
#include <stdio.h>
int table();
int main(){
    table();
}

int table()
{
    int i;
    for(i=19;i<=190;i=i+19){
        printf("%d\n",i);
    }

    return 0;
}
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
# 11.fun.ctrl-structure
#include <stdio.h>
int mains();
int condition();
int forr();
int main() {
   mains();
   condition();
   forr();
}
// basic program.
int mains(){
    printf("welcome to my hospital");
    return 0;
}
//conditional program
int condition() {
    int i;
    char charr;  
    do {
        printf("\nEnter your appointement no: ");
        scanf("%d", &i);
        if (i >= 0 && i<=50) {
            printf("you can see the doctor in the morning\n");
        }
        else if (i>=51 && i<=100) {
            printf("You can see the doctor in the evening\n");
        } 
        else {
            printf("You take an appointement for the next day\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        getchar();  
        charr = getchar();  
 } while (charr == 'y' || charr == 'Y'); 
    return 0; 
}
int forr(){
    int i;
    printf("\n enter your rating: ");
    scanf("%d", &i);
    for(i=1;i<=1;i++){
    int rating;
            printf("Enter your rating (1-5): ");
            scanf("%d",&rating);
            switch (rating) {
                case 1: 
                      printf("one star\n"); 
                      break;
                case 2:
                       printf("two star\n");
                       break;
                case 3: 
                       printf("three star\n");
                       break;
                case 4:
                       printf("four star\n");
                       break;
                case 5:
                       printf("five star\n"); 
                       break;
                default: 
                        printf("not intrested\n"); 
                        break;
     }
  }
# 12.fun.addition
#include <stdio.h>
int fun();
int main() {
    fun();
}
int fun(){

     for(int i=5;i<=50;i++){
       if(i%2 !=0){
          printf("%d\n",i);
      }
}
return 0;
}

# 13.fun.week
#include <stdio.h>
int program();
int main() {
   
 program();
}
int program()
{
   int day;
   printf("enter day (1-7):");
   scanf("%d",&day);
   switch(day){
       case 1 : printf("monday\n");
               break;
       case 2 : printf("tuesday\n");
               break;
       case 3 : printf("wednesday\n");
               break;
       case 4: printf("thrusday\n");
               break;
       case 5 : printf("friday\n");
               break;
      case 6: printf("saturday\n");
              break;
     case 7: printf("sunday\n");
             break;
      default : printf("not a valid day");
      }

return 0;
}
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
#15. fun.hospital
#include <stdio.h>
int mains();
int condition();
int forr();
int main() {
   mains();
   condition();
   forr();
}
// basic program.
int mains(){
    printf("welcome to my hospital");
    return 0;
}
//conditional program
int condition() {
    int i;
    char charr;  
    do {
        printf("\nEnter your appointement no: ");
        scanf("%d", &i);
        if (i >= 0 && i<=50) {
            printf("you can see the doctor in the morning\n");
        }
        else if (i>=51 && i<=100) {
            printf("You can see the doctor in the evening\n");
        } 
        else {
            printf("You take an appointement for the next day\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        getchar();  
        charr = getchar();  
 } while (charr == 'y' || charr == 'Y'); 
    return 0; 
}
int forr(){
    int i;
    printf("\n enter your rating: ");
    scanf("%d", &i);
    for(i=1;i<=1;i++){
    int rating;
            printf("Enter your rating (1-5): ");
            scanf("%d",&rating);
            switch (rating) {
                case 1: 
                      printf("one star\n"); 
                      break;
                case 2:
                       printf("two star\n");
                       break;
                case 3: 
                       printf("three star\n");
                       break;
                case 4:
                       printf("four star\n");
                       break;
                case 5:
                       printf("five star\n"); 
                       break;
                default: 
                        printf("not intrested\n"); 
                        break;
     }
  }
}
    else{
        printf("not eligible to give jee exam");
    }
    return 0;
   }
