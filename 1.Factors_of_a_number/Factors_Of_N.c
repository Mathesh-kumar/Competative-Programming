#include <stdio.h>

// main function
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Factors of %d are : ", n);

    // To find factors of a given number
    for(int i=1; (i*i)<=n; i++)
    {
        if(n%i == 0)
        {
            printf("%d ", i);
            int nbyi = n/i;
            if(nbyi != i)
                printf("%d ", nbyi);
        }
    }

    printf("\n");
}