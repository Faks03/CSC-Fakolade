# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>


/* Checking the number of times a digit appears in a number. */
int check_digit(int num, int digit)
{
    int count = 0;
    while (num > 0)
    {
        if (num % 10 == digit)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}


int main()
{
    /* Opening a file called self.in.txt and reading it. */
    FILE * fpointer = fopen("self.in.txt", "r");
    /* Opening a file called standard_output.txt and writing to it. */
    FILE * buffer = fopen ("standard_output.txt", "w+");

    int num;
    int new_num;
    int counter, valid = 0;
    /* Reading the first line of the file and storing it in the variable num. */
    fscanf(fpointer, "%d", &num);

    while (counter != num)
    {
        fscanf(fpointer, "%d", &new_num);
        char str_num[100];
        
        /* Converting the integer to a string. */
        sprintf(str_num ,"%d" , new_num);

        /* Finding the length of the string. */
        int length = strlen(str_num);
        
        for (int i = 0; i < length; i++)
        {
            /* Checking if the number of times a digit appears in a number is equal to the digit
            itself. */
            if (check_digit(new_num, i) == str_num[i]- '0')
            {
                valid++;
                if (valid == length)
                {
                    /* Writing to the file called standard_output.txt. */
                    fprintf(buffer, "It is Self-describing\n");
                    printf("Self describing\n");
                    valid = 0;
                    break;
                }      
            }
            else
            {
                fprintf(buffer, "It is not Self-describing\n");
                printf("Not Self Describing\n");
                break;
            }              
       }
    /* Incrementing the counter by 1. */
    counter++;
    }
    /* Closing the file called self.in.txt. */
    fclose(fpointer);
    fclose(buffer);
    return 0;
}