#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Ievadiet simbolu: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);     // Passing string to a function.
    return 0;
}
void displayString(char str[])
{
    printf("Izejas simbols: ");
    puts(str);
}

