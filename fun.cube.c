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
