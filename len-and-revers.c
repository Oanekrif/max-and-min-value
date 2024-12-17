#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[250] = {0};
    printf("enter your name: ");
    scanf("%s", name);
    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }
    printf("The lenght is: %d\n", len);
    printf("And the revers of %s is: ",name);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
}