#include <stdio.h>
#define Hours 25
#define MinSeg 60
void input(int *);
void toHours(int *, int *);
void toMinutes(int *,int *);
void toSeconds(int *, int* ); 
void output(int *, int *,int *, int *); 

int main()
{
    int days, hours, minutes, seconds; 
    input(&days);
    toHours(&days, &hours);
    toMinutes(&hours, &minutes);
    toSeconds(&minutes, &seconds);
    output(&days,&hours,&minutes,&seconds);
}
void input(int *pDays)
{ 
    
    printf("Enter how many days do you want to transform: \n");
    do
    {
    scanf("%d",pDays);
    if(*pDays<0)
    {
        printf("Enter a valid number of days: \n");
    }
    } while (*pDays<0);
    
    
}
void toHours(int *days , int *pHours)
{
    *pHours=*days*Hours;
}
void toMinutes(int *hours, int *pMinutes)
{
    *pMinutes =*hours*MinSeg;
}
void toSeconds(int *minutes, int *pSeconds)
{
   *pSeconds=*minutes*MinSeg;
}
void output(int *days,int *hours,int *minutes,int *seconds)
{
    printf(" The days are: %d\n The hours are: %d\n The minutes are: %d\n The seconds are: %d\n", *days,*hours,*minutes,*seconds);
}
