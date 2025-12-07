#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

typedef struct {
    char *buffer;
    int bufsize;
    int pos;
    FILE *fp;
} MyFile;

int _flushbuf(MyFile *f) {
    if (f->pos > 0) {
        int written = fwrite(f->buffer, 1, f->pos, f->fp);
        if (written < f->pos) {
            return EOF;
        }
        f->pos = 0;
    }
    return 0;
}

int my_fflush(MyFile *f) {
    return _flushbuf(f);
}

int my_fclose(MyFile *f) {
    if (my_fflush(f) == EOF) {
        return EOF;
    }
    fclose(f->fp);
    free(f->buffer);
    free(f);
    return 0;
}

int main() {
    MyFile *f = malloc(sizeof(MyFile));
    f->buffer = malloc(BUFSIZE);
    f->bufsize = BUFSIZE;
    f->pos = 0;
    f->fp = fopen("output.txt", "w");

    if (!f->fp) {
        perror("fopen failed");
        return 1;
    }

    const char *text = "Hello, world!";
    int i = 0;
    while (text[i] != '\0') {
        if (f->pos >= f->bufsize) {
            _flushbuf(f);
        }
        f->buffer[f->pos++] = text[i++];
    }

    my_fclose(f);

    return 0;
}
