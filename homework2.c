/*ex. 3-2 */
/*
#include <stdio.h>

void escape(char s[], const char t[]) {
    int i, j;
    for (i = j = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\\':
                s[j++] = '\\';
                s[j++] = '\\';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}

void unescape(char s[], const char t[]) {
    int i, j;
    for (i = j = 0; t[i] != '\0'; i++) {
        if (t[i] == '\\') {
            switch (t[++i]) {
                case 'n':
                    s[j++] = '\n';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                case '\\':
                    s[j++] = '\\';
                    break;
                default:
                    s[j++] = '\\';
                    s[j++] = t[i];
                    break;
            }
        } else {
            s[j++] = t[i];
        }
    }
    s[j] = '\0';
}

int main() {
    char input[] = "Hello\tWorld\nLine2";
    char escaped[200];
    char unescaped[200];

    escape(escaped, input);
    printf("Escaped: %s\n", escaped);

    unescape(unescaped, escaped);
    printf("Unescaped:\n%s\n", unescaped);

    return 0;
}
*/


/* ex.3-3 */
/*
#include <stdio.h>
#include  <ctype.h>

void expand(const char s1[], char s2[]) {
    int i, j;
    char c;

    i = j = 0;
    while ((c = s1[i++]) != '\0') {
        if (c == '-' && i > 1 && s1[i] != '\0' &&
            ((isalnum(s1[i-2]) && isalnum(s1[i])))) {
            char start = s1[i-2];
            char end   = s1[i];
            if (start < end) {
                for (char k = start + 1; k <= end; k++)
                    s2[j++] = k;
                i++;
            } else {
                s2[j++] = c;
            }
        } else {
            s2[j++] = c;
        }
    }
    s2[j] = '\0';
}

int main() {
    char input[][50] = {
        "a-z",
        "a-b-c",
        "a-z0-9",
        "-a-z",
        "A-CX-Z",
        "0-3-5",
        "abc-",
        "z-a"
    };
    char output[200];

    for (int k = 0; k < 8; k++) {
        expand(input[k], output);
        printf("%s  →  %s\n", input[k], output);
    }

    return 0;
}
*/




/* ex.3-5 */
/*
#include <stdio.h>
#include <string.h>
#include <limits.h>


void reverse(char s[]) {
    int i, j;
    char c;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}


void itob(int n, char s[], int b) {
    int i = 0;
    int sign = n;

    if (b < 2 || b > 36) {
        s[0] = '\0';
        return;
    }

    do {
        int digit = n % b;
        if (digit < 0) digit = -digit;
        if (digit < 10)
            s[i++] = '0' + digit;
        else
            s[i++] = 'A' + (digit - 10);
    } while ((n /= b) != 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

int main() {
    char buf[100];

    itob(255, buf, 16);
    printf("255 in base 16 = %s\n", buf);

    itob(42, buf, 2);
    printf("42 in base 2 = %s\n", buf);

    itob(-42, buf, 10);
    printf("-42 in base 10 = %s\n", buf);

    itob(INT_MIN, buf, 16);
    printf("INT_MIN in base 16 = %s\n", buf);

    return 0;
}
*/













