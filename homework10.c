/*ex1*/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    char concat[202];
    char copy[101];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcpy(concat, str1);
    strcat(concat, str2);
    printf("\nConcatenated string: %s\n", concat);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are the same.\n");
    } else {
        printf("The strings are different.\n");
    }

    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    strcpy(copy, str1);
    printf("Copy of first string: %s\n", copy);

    return 0;
}
*/





/*ex2*/
/*
#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *time_info;

    time(&current_time);

    time_info = localtime(&current_time);

    printf("Current Date: %04d-%02d-%02d\n",
           time_info->tm_year + 1900,
           time_info->tm_mon + 1,
           time_info->tm_mday);

    printf("Current Time: %02d:%02d:%02d\n",
           time_info->tm_hour,
           time_info->tm_min,
           time_info->tm_sec);

    return 0;
}
*/






/*ex3*/
/*
#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a floating-point number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Square root of a negative number is not defined in real numbers.\n");
    } else {
        printf("Square root: %.4f\n", sqrt(num));
    }

    printf("Rounded to nearest integer: %.0f\n", round(num));

    printf("Sine of the number: %.4f\n", sin(num));

    return 0;
}
*/
