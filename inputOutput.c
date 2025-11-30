/*ex1*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1000

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    FILE *f1 = fopen(argv[1], "r");
    FILE *f2 = fopen(argv[2], "r");

    if (!f1 || !f2) {
        printf("Error: Could not open one of the files.\n");
        return 1;
    }

    char line1[MAX_LINE], line2[MAX_LINE];
    int lineNumber = 1;

    while (1) {
        char *r1 = fgets(line1, MAX_LINE, f1);
        char *r2 = fgets(line2, MAX_LINE, f2);

        if (!r1 && !r2) {
            printf("Files are identical.\n");
            break;
        }

        if (!r1 || !r2 || strcmp(line1, line2) != 0) {
            printf("Files differ at line %d:\n", lineNumber);

            if (r1) printf("File1: %s", line1);
            else    printf("File1: [No more lines]\n");

            if (r2) printf("File2: %s", line2);
            else    printf("File2: [No more lines]\n");

            break;
        }

        lineNumber++;
    }

    fclose(f1);
    fclose(f2);
    return 0;
}
*/





/*ex2*/
#include <stdio.h>
#include <string.h>

#define MAX_LINE 1000

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <pattern> <filename>\n", argv[0]);
        return 1;
    }

    char *pattern = argv[1];
    char *filename = argv[2];

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error: could not open file %s\n", filename);
        return 1;
    }

    char line[MAX_LINE];
    int lineNumber = 1;

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, pattern) != NULL) {
            printf("%d: %s", lineNumber, line);
        }
        lineNumber++;
    }

    fclose(fp);
    return 0;
}

