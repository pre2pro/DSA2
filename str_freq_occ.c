#include <stdio.h>

void main()
{
    int i, length, count = 0;
    char text[50], ch;

    printf("Enter a string: ");
    gets(text);

    printf("\nEnter the character to be searched: ");
    scanf("%c", &ch);
    length = strlen(text);
    for (i = 0; i < length; i++)
    {
        if (text[i] == ch)
            count++;
    }
    if (count)
        printf("%c repeated %d times in %s", ch, count, text);
    else
        printf("%c does not exist in %s", ch, text);
}