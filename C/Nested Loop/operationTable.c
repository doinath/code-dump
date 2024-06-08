//h.h
int getN();
void display();

//main.c
#include "h.h"
int main()
{
    int n = getN();
    display(n);
    return 0;
}

//c.c
#include <stdio.h>
int getN(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    return n;
}
void display(int n)
{
    printf("  ");
    for (int s = 0; s <= n; s++)
        {
            printf("%d ", s);
        }
  
    printf("\n");
  
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", i);
        for (int j = 0; j<= n; j++)
        {
            
            printf("%d ", i * j); // could be +, -, /;
        }
        printf("\n");
    }
  
    return;
}
