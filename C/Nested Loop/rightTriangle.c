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

//imple.c
#include <stdio.h>
int getN()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    return n;
}
void display(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("@");
        }
        printf("\n");
    }
    return;
}
