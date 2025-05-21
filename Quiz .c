#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("1. What is the capital of France?\n");
    printf("1. London\n2. Berlin\n3. Paris\n4. Rome\n");
    scanf("%d", &answer);
    if (answer == 3) score++;

    printf("2. What is 5 + 3?\n");
    printf("1. 6\n2. 8\n3. 9\n4. 7\n");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("3. Which planet is known as the Red Planet?\n");
    printf("1. Mars\n2. Venus\n3. Earth\n4. Jupiter\n");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("You scored %d out of 3.\n", score);

    return 0;
}
