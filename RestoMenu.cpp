#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;
    char more;

    // To store bill details
    char items[10][20];
    int quantities[10];
    float prices[10];
    int count = 0;

    printf("Welcome to Food Billing System\n");
    printf("--------------------------------\n");
    printf("1. Burger - Rs 80\n");
    printf("2. Pizza  - Rs 150\n");
    printf("3. Momos  - Rs 70\n");
    printf("4. Coffee - Rs 50\n");

    do {
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 1:
                sprintf(items[count], "Burger");
                prices[count] = qty * 80;
                break;
            case 2:
                sprintf(items[count], "Pizza");
                prices[count] = qty * 150;
                break;
            case 3:
                sprintf(items[count], "Momos");
                prices[count] = qty * 70;
                break;
            case 4:
                sprintf(items[count], "Coffee");
                prices[count] = qty * 50;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }

        quantities[count] = qty;
        total += prices[count];
        count++;

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    // Final Bill Display
    printf("\n******** Final Bill ********\n");
    printf("Item\tQty\tPrice\n");
    printf("---------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%s\t%d\t%.2f\n", items[i], quantities[i], prices[i]);
    }

    printf("---------------------------\n");
    printf("Total Amount = Rs %.2f\n", total);
    printf("***************************\n");
    printf("Thank you! Visit Again!\n");

    return 0;
}

