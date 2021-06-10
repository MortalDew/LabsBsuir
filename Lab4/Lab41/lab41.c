
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//проверка букв-слова на упорядоченость
static int is_sorted(const char* s) {
    for (; *s && *(s + 1); ++s) {
        if (*s > * (s + 1))
            return 0;
    }
    return 1;
}

//получить последнее слово
static char* word_end(char* s) {
    char* i, * p = s + (strlen(s) - 1);
    while ((p >= s) && !isalpha(*p))
        --p;
    if (isalpha(*p)) {
        for (i = p; (i >= s) && isalpha(*i); --i)
            ;
        *i++ = '\0';
        (*++p) = '\0';
        p = i;
    }
    return p;
}


int main(void) {
    char* p, * w;
    char s[256] = "app, abc, app, xyz, wolf, app.";

    w = word_end(s);
    p = strtok(s, "., ");
    do {
        if (strcmp(p, w) != 0 && is_sorted(p))
            puts(p);
    } while ((p = strtok_s(NULL, "., ", &u)) != NULL);
    return 0;
}
