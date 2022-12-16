# include <stdio.h>
# include <string.h>
# include <stdlib.h>
#include <time.h>

int min(int a, int b)
{
    if(a>b)
        return b;
    else
        return a;
}

void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    clock_t start = clock();

    /* Opening the file "files.in.txt" and assigning it to the pointer fpointer. */
    FILE * fpointer = fopen("files.in.txt", "r+");
    FILE * buffer = fopen ("standard_output.txt", "w+");

    /* Declaring the variables that will be used in the program. */
    int first, next = 0;
    char file[100], id[100];
    int counter = 0;
    int trials = 0;
    int small = 0;

    char total_files[3][50];
    int total_id[3][50];

    /* Reading the first integer from the file and assigning it to the variable first. */
    fscanf(fpointer, "%d", &first);
    while (trials != first)
    {   
        /* Reading the first integer from the file and assigning it to the variable next. */
        fscanf(fpointer, "%d", &next);
        while (counter != next)
        {    
            fscanf(fpointer, "%s", file);   
            strcpy(total_files[counter], file);
            fscanf(fpointer, "%s", id);
            total_id[0][counter] = atoi(id);
            counter++;
        }
        counter = 0;
        
        // delete the duplicate elements of file
        for (int i = 0; i < next; i++)
        {
            for (int j = i + 1; j < next; j++)
            {
                if (strcmp(total_files[i], total_files[j]) == 0)
                {
                    strcpy(total_files[j], "");
                    small = min(total_id[0][i], total_id[0][j]);
                    total_id[0][i] = small;
                    total_id[0][j] = 0;
                }
            }
        }

        for (int i = 0; i < next; i++)
        {
            sort(total_id[0], next);
            if (total_id[0][i] != 0)
            {
                printf("%d ", total_id[0][i]);
                fprintf(buffer, "%d ", total_id[0][i]);
            }
            
        }
        fprintf(buffer, "\n");
        printf("\n");
        trials++;
    }
    fclose(fpointer);
    fclose(buffer);
    clock_t end = clock();

    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Elapsed time: %f seconds\n", elapsed);

    
}

