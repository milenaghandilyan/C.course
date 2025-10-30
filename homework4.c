/*ex  7*/
/*
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
*/




/*ex 8*/
/*
#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}
*/




/*ex 14*/
/*
#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("Sorted array in order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
*/




/*ex 21*/
/*
#include <stdio.h>

int main() {
    char upper[26], lower[26];
    char *ptr_upper, *ptr_lower;
    int i;

    for (i = 0; i < 26; i++) {
        upper[i] = 'A' + i;
    }

    for (i = 0; i < 26; i++) {
        lower[i] = 'a' + i;
    }

    ptr_upper = upper;
    ptr_lower = lower;

    printf("Uppercase alphabets:\n");
    for (i = 0; i < 26; i++) {
        printf("%c ", *(ptr_upper + i));
    }

    printf("\n\nLowercase alphabets:\n");
    for (i = 0; i < 26; i++) {
        printf("%c ", *(ptr_lower + i));
    }

    printf("\n");
    return 0;
}
*/




/*ex 22*/
/*
#include <stdio.h>

int main() {
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i = -1;

    printf("\n\n Pointer : Print a string in reverse order :\n");
    printf("------------------------------------------------\n");

    printf(" Input a string : ");
    scanf("%s", str1);

    while (*stptr) {
        stptr++;
        i++;
    }

    while (i >= 0) {
        stptr--;
        *rvptr = *stptr;
        rvptr++;
        --i;
    }

    *rvptr = '\0';

    printf(" Reverse of the string is : %s\n\n", revstr);

    return 0;
}
*/
