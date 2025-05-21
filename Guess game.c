#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess, number = 7;

    printf("Guess the number between 1 and 10: ");
    scanf("%d", &guess);

    if (guess == number) {
        printf("Correct! You win!\n");
    } else {
        printf("Wrong! The correct number was %d.\n", number);
    }

    return 0;
}
