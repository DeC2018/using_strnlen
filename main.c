#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "BeginnersBook";
    printf("Length of string str1 when maxlen is 30: %zu", strnlen(str1, 30));
    printf("Length of string str1 when maxlen is 10: %zu", strnlen(str1, 10));
    return 0;
}
