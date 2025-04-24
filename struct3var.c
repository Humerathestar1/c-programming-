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
    a.id_card=1256;
    a.schlor_no=2424556;
    strcpy(a.class,"12th");
    a.percantage=23.4;
    
    struct student b;
    b.id_card=1673;
    b.schlor_no=2420056;
    strcpy(b.class,"12th");
    b.percantage=23.4;
    
    struct student c;
    c.id_card=123;
    c.schlor_no=572456;
    strcpy(c.class,"12th");
    c.percantage=45.4;
    
    
    printf("id card is %d\n",a.id_card);
    printf("scholar no %d\n",a.schlor_no);
    printf("class %s\n",a.class);
    printf("percantage %f",a.percantage);

      printf("id card is %d\n",b.id_card);
    printf("scholar no %d\n",b.schlor_no);
    printf("class %s\n",b.class);
    printf("percantage %f",b.percantage);

      printf("id card is %d\n",c.id_card);
    printf("scholar no %d\n",c.schlor_no);
    printf("class %s\n",c.class);
    printf("percantage %f",c.percantage);

return 0;
}
