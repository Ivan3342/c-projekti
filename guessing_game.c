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

        printf("You have %d tries left.\n", guess_number);
    }
    while (guess_number > 0);
    
    if(guess_number <= 0) {
        printf("You did not guess the number. Better luck next time\n");
    }

    return 0;
}