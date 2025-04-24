#include <stdio.h>
#include <string.h>

struct student {
    int id_card;
    char class[20];
    int schlor_no;
    float percantage;
 
}a,b,c;

int main() {
    struct student a;
    a.id_card=123;
    b.schlor_no=242456;
    strcpy(c.class,"12th");
    b.percantage=23.4;
    
    
    printf("id card is %d\n",a.id_card);
    printf("scholar no %d\n",b.schlor_no);
    printf("class %s\n",c.class);
    printf("percantage %f",b.percantage);




    

return 0;
}
