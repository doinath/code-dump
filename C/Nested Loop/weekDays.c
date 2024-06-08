int getInput();
void display();

#include "h.h"
int main()
{
    int n= getInput();
    display(n);
}

#include <stdio.h>
int getInput(){
    int n;
    printf("Enter number of weeks: ");
    scanf("%d", &n);
    return n;
}
void display(int n)
{
    for(int i = 1; i <= n;i++)
    {
        printf("Week #%d\n", i);
        for(int j = 1; j<= 7; j++)
        {
            printf("  Day %d\n", j);
            
        }
        printf("\n");
    }
    return;
}
