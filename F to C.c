#include <stdio.h>
#include <stdlib.h>

int main()


 {
    float fahrenheit, celsius;
    int start, end, increment;

    printf("Enter starting Fahrenheit value: ");
    scanf("%d", &start);
    printf("Enter ending Fahrenheit value: ");
    scanf("%d", &end);
    printf("Enter increment value: ");
    scanf("%d", &increment);

    printf("Fahrenheit\tCelsius\n");

    for (fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%9.2f\t%7.2f\n", fahrenheit, celsius);
    }

    return 0;
}




