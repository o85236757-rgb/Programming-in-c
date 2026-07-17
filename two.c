#include <stdio.h>
#define Hours 24
#define MinSeg 60
void input(int *);
int toHours(int, int *);
int toMinutes(int);
int toSeconds(int); 
void output(int, int,int, int); 

int main()
{
    int days, hours, minutes, seconds; 
    input(&days);
    toHours(days, &hours);
    minutes=toMinutes(hours);
    seconds=toSeconds(minutes);
    output(days,hours,minutes,seconds);
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
int toHours(int days , int *pHours)
{
    
}
int toMinutes(int hours)
{
    return hours*MinSeg;
}
int toSeconds(int minutes)
{
    return minutes*MinSeg;
}
void output(int days,int hours,int minutes,int seconds)
{
    printf(" The days are: %d\n The hours are: %d\n The minutes are: %d\n The seconds are: %d\n", days,hours,minutes,seconds);
}
