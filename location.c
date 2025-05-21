#include <stdio.h>
#include <string.h>

int main() {
    char city[20];

    printf("Enter the name of a city: ");
    scanf("%s", city);

    if (strcmp(city, "Nairobi") == 0) {
        printf("Country: Kenya\n");
    } else if (strcmp(city, "Mogadishu") == 0) {
        printf("Country: Somalia\n");
    } else if (strcmp(city, "Cairo") == 0) {
        printf("Country: Egypt\n");
    } else if (strcmp(city, "London") == 0) {
        printf("Country: United Kingdom\n");
    } else if (strcmp(city, "Paris") == 0) {
        printf("Country: France\n");
    } else {
        printf("City not found in the database.\n");
    }

    return 0;
}
