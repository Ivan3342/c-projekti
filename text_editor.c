#include <stdio.h>
#include <stdlib.h>


void writef(FILE *f) {
    char buf[1024] = "Text\n";
    f = fopen("text.txt", "a+");
    printf("Enter the text you want to write:\n");
    fputs(buf, f);
    printf("Writing complete.\n");
    fclose(f);
}

void readf(FILE *f) {
    f = fopen("text.txt", "r");
    char buf[255];
    if(f == NULL) {
        printf("Error opening a file.\n");
    }
    else {
        while(fgets(buf, 255, f) != NULL) {
            fgets(buf, 255, f);
            printf("%s", &buf);
        }
    }
    fclose(f);
}

int main() {

    FILE *f;

    int inp;

    while(1) {
        printf("Enter the action ID:\n");
        printf("ID | Name  | Description\n");
        printf(" 1 | Write | Write into a file\n");
        printf(" 2 | Read  | Prints the contents of a selected file\n");
        printf("-1 | Close | Closes the program\n\n");
        scanf("%d", &inp);

        switch(inp) {
            case -1:
                printf("Closed the program.\n");
                return 0;
                break;
            case 1:
                writef(f);
                break;
            case 2:
                readf(f);
                break;
            default:
                printf("Wrong input, please select one of the following:\n");
                break;
        }
    }

    return 0;
}
