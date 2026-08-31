#include <stdio.h>

int main() {

    int inp;

    while(true) {
        printf("Enter the action ID: ");
        printf("ID | Name  | Description\n");
        printf(" 1 | New   | Create a new file\n");
        printf(" 2 | Open  | Opens an already existing file\n");
        printf(" 3 | Read  | Prints the contents of a selected file\n");
        printf(" 4 | File  | Prints the name of the selected file\n");
        printf(" 5 | Save  | Save the contents of the file\n");
        printf("-1 | Close | Closes the program\n");
        scanf("%d", &inp);
        if(inp == -1) {
            printf("Closed the program.");
            break;
        }
    }

    return 0;
}