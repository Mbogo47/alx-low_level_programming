#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2) {
    char *result;
    int len1, len2;

    // Treat NULL as an empty string
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    // Allocate memory for concatenated string
    result = malloc((len1 + len2 + 1) * sizeof(char));

    if (result == NULL)
        return NULL;  // return NULL on failure

    strcpy(result, s1);
    strcpy(result + len1, s2);

    return result;
}
