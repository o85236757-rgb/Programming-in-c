#include <stdio.h>
#include <string.h>
#define columns 30
#define T 3
int main()
{
    char Names[3][columns], temp[columns];
    int x, y, rows, ages[T]; 
    rows = sizeof(Names)/sizeof(Names[0]);

    for(x=0; x<rows; x++)
    {
        fgets(Names[x],columns,stdin);
    }

    for(x=0; x<rows-1; x++)
    {
        for(y=0; y<rows-1-x; y++)
        {
            if(strcmp(Names[y],Names[y+1])>0)
            {
                strcpy(temp,Names[y]);
                strcpy(Names[y],Names[y+1]);
                strcpy(Names[y+1],temp);
            }
        }
    }
    printf("\nPritn of the names: \n");
    for(x=0; x<rows; x++)
    {
        puts(Names[x]);
    }
     printf("End of the print of the names"); 

    printf("\nEnter an age: \n"); 
    for(x=0; x<T; x++)
    {
        scanf("%d", &ages[x]);
    }
    
    for(x=0; x<T; x++)
    {
       printf("%d\n", ages[x]);
    }




    return 0; 

    
}