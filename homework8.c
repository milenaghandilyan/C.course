/*ex7*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
*/





/*ex8*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(&str[left], &str[i]);
        permute(str, left + 1, right);
        swap(&str[left], &str[i]);
    }
}

int main() {
    int size;

    printf("Enter the length of the string: ");
    scanf("%d", &size);

    char *str = (char*) malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf("%s", str);

    printf("All permutations:\n");
    permute(str, 0, strlen(str) - 1);

    free(str);
    return 0;
}
*/





/*ex9*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);

    free(arr);
    return 0;
}
*/






/*ex14*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
*/





/*ex21*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 26;
    char *alphabet;

    alphabet = (char*) malloc(n * sizeof(char));
    if (alphabet == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        alphabet[i] = 'a' + i;
    }

    printf("Alphabets:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", alphabet[i]);
    }

    printf("\n");

    free(alphabet);
    return 0;
}
*/





/*ex22*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    char *str;

    printf("Enter the length of the string: ");
    scanf("%d", &size);

    str = (char*) malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    free(str);
    return 0;
}
*/
