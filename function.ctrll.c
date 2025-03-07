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
