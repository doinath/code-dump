int getN();
void display();

#include "h.h"
int main()
{
    int n = getN("Enter n");
    int y = getN("Enter y");
    display(n, y);
    return 0;
}

#include <stdio.h>
int getN(char *string)
{
    int n;
    printf("%s: ", string);
    scanf("%d", &n);
    return n;
}
void display(int n, int y)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<= n; j++)
        {
            if (i == y)
            {
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }
    return;
}
