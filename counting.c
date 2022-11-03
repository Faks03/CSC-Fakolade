#include <stdio.h>

int main(void)
{
    int count = 1;
    int N;
    printf("What do you want to count to ? ");
    scanf("%d", &N);
    while (count <= N)
    {
        printf("The count is %d\n", count);
        count = count + 1;
    }
    
}
