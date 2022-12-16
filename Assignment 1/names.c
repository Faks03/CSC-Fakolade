#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    int counter = 1;
    char start[10000] = "The names are ";
    char comma[50] = ", ";
    while (counter <= 10)
    {
        printf("Enter your name: ");
        gets(name);
        if (counter != 10)
        {
            strcat(name , comma);
        }
        else
        {
            strcat(start, name);
            break;
        }
                
        strcat(start, name);
        counter = counter + 1;
    } 

    printf("%s", start);
}