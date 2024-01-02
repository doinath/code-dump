#include <stdio.h>
int main(int argc, char const *argv[])
{
    int subtrahend;

    printf("Enter subtrahend: ");
    scanf("%d", &subtrahend);

        int minuend[]= {5, 10, 15, 20, 25, 30, 35};
        int i;
        printf("Enter minuend element 0-6: ");
        scanf("%d", &i);
            int difference;
                difference = subtrahend - minuend[i];

                printf("%d is your difference.", difference);   
    return 0;
}