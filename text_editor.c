#include <stdio.h>

int main() {

    FILE *f;

    int inp;
    char[] inputString;

    fopen("text.txt", "r+");

    while(true) {
        printf("Enter the action ID: ");
        printf("ID | Name  | Description\n");
        printf(" 1 | Write | Write into a file\n");
        printf(" 2 | Read  | Prints the contents of a selected file\n");
        printf("-1 | Close | Closes the program\n");
        scanf("%d", &inp);

        switch(inp) {
            case -1:
                printf("Closed the program.\n");
                return 0;
                break;
            case 1:
                printf("Create a new file\n");
                break;
            case 2:
                printf("Open a file\n");
                break;
            default:
                printf("Wrong input, please select one of the following:\n");
                break;
        }
    }

    return 0;
}