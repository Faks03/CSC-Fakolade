#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[40];
    printf("Enter a Sentence: ");
    fgets(text, 40, stdin);

    int len = strlen(text);
    int counter = 1;
    printf("The reverse is ");

    while (counter != len + 1)
    {
        printf ("%c", text[len - counter]);
        counter = counter + 1;
    }
    
    printf("\n");
    return 0;
}
