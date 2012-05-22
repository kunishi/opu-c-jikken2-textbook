#include <stdio.h>
#include <ctype.h>

void sub1(char *str, int i)
{
    str[i] = toupper(str[i]);
    printf("%s\n", str);
}

int main()
{
    char str[] = "hello";

    sub1(str, 2); /* This works well */

    sub1(0, 1); /* Oops */

    return 0;
}
