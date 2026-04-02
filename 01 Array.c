#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("\nArray Operations Menu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Insertion
                printf("Enter position to insert: ");
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);

                if(pos < 1 || pos > n + 1) {
                    printf("Invalid position!\n");
                } else {
                    for(i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                }
                break;

            case 2: // Deletion
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    for(i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 3: // Display
                printf("Array elements are: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("\nArray Operations Menu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Insertion
                printf("Enter position to insert: ");
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);

                if(pos < 1 || pos > n + 1) {
                    printf("Invalid position!\n");
                } else {
                    for(i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                }
                break;

            case 2: // Deletion
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    for(i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 3: // Display
                printf("Array elements are: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}