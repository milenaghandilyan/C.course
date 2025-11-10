/* exercise 1
#include <stdio.h>

void doubleValue(int *ptr) {
    *ptr = *ptr * 2;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Original value: %d\n", num);

    doubleValue(&num);

    printf("Doubled value: %d\n", num);

    return 0;
}
*/




/* exercise 2
#include <stdio.h>

void calculateSumAndAverage(int *arr, int size, int *sum, float *average) {
    *sum = 0;

    for (int i = 0; i < size; i++) {
        *sum += *(arr + i);
    }

    *average = (float)(*sum) / size;
}

int main() {
    int n, sum;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    calculateSumAndAverage(arr, n, &sum, &average);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
*/




/* exercise3 
#include <stdio.h>

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int src[n], dest[n];

    printf("Enter %d integers for source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", src + i);
    }

    copyArray(src, dest, n);

    printf("Copied array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(dest + i));
    }

    printf("\n");

    return 0;
}
*/

