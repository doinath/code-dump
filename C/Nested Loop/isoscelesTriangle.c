int getInput();
void display();

#include "h.h"

int main()
{
    int n = getInput();
    display(n);
    return 0;
}

#include <stdio.h>
int getInput()
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
        for (int j = 1; j<= n - i; j++)
        {
            printf(" ");
        }
        for (int s = 1; s <= i * 2 - 1; s++)
        {
            printf("%%");
        }
        printf("\n");
    }
    return;
}
