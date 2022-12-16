#include <stdio.h>
#include <string.h>
#include <math.h>

void reverse()
{
    char rev;
    scanf("%c", &rev);

    if (rev != '\n')
    {
        reverse();
        printf("%c", rev);
    }
    
}

int main(void)
{
    printf("Enter a Sentence: ");
    reverse();
    return 0;
}

