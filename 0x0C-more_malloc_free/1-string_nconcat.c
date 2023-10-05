#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int i, j, len1, len2;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (len1 = 0; s1[len1]; len1++) /* Find length of s1 */
        ;
    for (len2 = 0; s2[len2]; len2++) /* Find length of s2 */
        ;

    /* If n is greater or equal to the length of s2 then use the entire string s2 */
    if (n >= len2)
        n = len2;

    new_str = malloc((len1 + n + 1) * sizeof(char)); /* +1 for the null-terminator */

    if (new_str == NULL) /* If malloc fails */
        return (NULL);

    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];
    for (j = 0; j < n; j++, i++)
        new_str[i] = s2[j];

    new_str[i] = '\0'; /* Null-terminate the new string */

    return (new_str);
}
