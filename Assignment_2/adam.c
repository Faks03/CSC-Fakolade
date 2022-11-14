# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main()
{
    int num;
    char line[255];
    int counter, total = 0;
    int count = 0;
    FILE * fpointer = fopen("adam.in.txt", "r");
    FILE * buffer = fopen ("standard_output.txt", "w+");
    if ((fpointer = fopen("adam.in.txt", "r")) == NULL){
        printf("Error! Opening File");
        exit(1);
    }
    fscanf(fpointer, "%d", &num);

    while (count != num)
    {
        fscanf(fpointer, "%s", line);
        
        int length = strlen(line) ;
        
        while (counter != length)
	    {
            if (line[counter] == 'U')
            {
                total = total + 1;
            }
            else if (line[counter] == 'D')
            {
                break;
            }
            else 
            {
                printf("Error");
                exit(1);
            }
            counter = counter + 1;
        }
        
        printf("%d step(s) \n", total);
        fprintf(buffer, "%d\n", total);

        counter = 0;
        total = 0; 
        count = count + 1;
        
    } 
    fclose(fpointer); 
    fclose(buffer);
}
    
    
