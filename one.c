#include <stdio.h>
#include <string.h>
#define columns 30
int main()
{
    char Names[5][columns], temp[columns];
    int x, y, rows; 
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

    for(x=0; x<rows; x++)
    {
        printf("\n%s\n", Names[x]); 
    }

    return 0; 

    
}