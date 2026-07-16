#include <stdio.h>
#define Hours 24
#define MinSeg 60
int input(void);
int toHours(int);
int toMinutes(int);
int toSeconds(int); 
void output(int, int,int, int); 

int main()
{
    int days, hours, minutes, seconds; 
    days=input();
    hours=toHours(days);
    minutes=toMinutes(hours);
    seconds=toSeconds(minutes);
    output(days,hours,minutes,seconds);
}
int input()
{ 
    int days;
    printf("Enter how many days do you want to transform: \n");
    scanf("%d", &days);
    return days; 
}
int toHours(int days)
{
    return days*Hours;
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
    printf("The days are: %d\n The hours are: %d\n The minutes are: %d\n The seconds are: %d\n", days,hours,minutes,seconds);
}
