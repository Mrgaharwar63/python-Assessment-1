#include <stdio.h>

int main() {
    int choice, qty;
    int price = 0, total = 0;
    char more;

    printf("***** Welcome to Food Billing System *****\n");
    printf("Menu:\n");
    printf("1. Burger  - Rs 80\n");
    printf("2. Pizza   - Rs 150\n");
    printf("3. Momos   - Rs 70\n");
    printf("4. Coffee  - Rs 50\n");

    do {
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (choice == 1) {
            price = 80 * qty;
            printf("You ordered Burger x %d\n", qty);
        }
        else if (choice == 2) {
            price = 150 * qty;
            printf("You ordered Pizza x %d\n", qty);
        }
        else if (choice == 3) {
            price = 70 * qty;
            printf("You ordered Momos x %d\n", qty);
        }
        else if (choice == 4) {
            price = 50 * qty;
            printf("You ordered Coffee x %d\n", qty);
        }
        else {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        total += price;

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    printf("\n******** Final Bill ********\n");
    printf("Total Amount to Pay: Rs %.2f\n", total);
    printf("*****************************\n");
    printf("Thank You! Visit Again!\n");

    return 0;
}

