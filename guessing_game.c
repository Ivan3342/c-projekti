#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()  {

    int guess_number = 10;
    int guess;
    srand(time(0));
    int number = rand()%100;
    
    printf("Debug: %d", number);

    do {
        printf("Enter a number: ");
        scanf("%d", &guess);

        if(guess > number) {
            printf("Lower...\n");
        }
        else if (guess < number) {
            printf("Higher...\n");
        }
        else {
            printf("You guessed the number, good job! The number was %d\n", number);
            printf("It took you %d tries to guess the number.\n", (10-guess_number));
            return 0;
        }

        guess_number--;
    }
    while (guess_number > 0);

    return 0;
}