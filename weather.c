#include <stdio.h>

int main() {
    float temp;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 10) {
        printf("It's cold.\n");
    } else if (temp >= 10 && temp <= 25) {
        printf("The weather is moderate.\n");
    } else {
        printf("It's hot.\n");
    }

    return 0;
}