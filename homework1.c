/*ex.1-17*/
/*
#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int getline_custom(char line[], int maxline);

int main(void) {
    char line[MAXLINE];
    int len;

    while ((len = getline_custom(line, MAXLINE)) > 0) {
        if (len > LIMIT) {
           printf("%s", line);
        }
    }
    return 0;
}

int getline_custom(char s[], int lim){
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
        ++i;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
*/




/*ex.1-18*/
/*
#include <stdio.h>

#define MAXLINE 1000

int getline_custom(char line[], int maxline);
void rtrim(char line[]);

int main(void) {
    char line[MAXLINE];
    int len;

    while ((len = getline_custom(line, MAXLINE)) > 0){
        rtrim(line);
        if (line[0] != '\0')
            printf("%s\n", line);
    }
    return 0;
}


int getline_custom(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void rtrim(char s[]){
     int i;

     for (i = 0; s[i] != '\0'; ++i);
     --i;
     while(i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
     --i;
     s[i + 1] = '\0';
}
*/




/*ex.1-19*/
/*
#include <stdio.h>

#define MAXLINE 1000

int getline_custom(char line[], int maxline);
void reverse(char s[]);

int main(void) {
    char line[MAXLINE];

    while (getline_custom(line, MAXLINE) > 0){
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

int getline_custom(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
       s[i] = c;
       ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[]){
     int i, j;
     char temp;

     for(i = 0; s[i] != '\0'; ++i);
     j = (i > 0 && s[i - 1] == '\n') ? i - 2 : i - 1;

     for (i = 0; i < j; ++i, --j){
         temp = s[i];
         s[i] = s[j];
         s[j] = temp;
     }
}
*/












