#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    pritnf("The string %s has %d characters.\n", str, strlen(str));
    return 0;
}
