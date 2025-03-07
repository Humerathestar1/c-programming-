/conditional program
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
