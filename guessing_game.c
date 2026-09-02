#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()  {

    int guess_number = 10;
    int guess;
    srand(time(0));
    int number = rand()%100;

    do {
        printf("Enter a number: ");
        scanf("%d", &guess);

        guess_number--;
    }
    while (guess_number > 0);

    return 0;
}