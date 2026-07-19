#include <stdio.h>
#define T 30
void input(char *);
void print(char *);
int main()
{
    char name[T]; 
    input(name); 
    print(name);

}
void input(char *pName)
{
    fgets(pName,T,stdin);
}
void print(char *pName)
{
    printf("%s",pName);
}

