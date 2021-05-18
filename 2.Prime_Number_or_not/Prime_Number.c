#include<stdio.h>

// method to find whether a number is prime or not.
int isPrime(int n)
{
    if(n%2==0 && n!=2 || n==1)
        return 0;

    int i,j;
    for(i=0; i*i<=n; i++);

    for(j=2; j<i; j++)
    {
        if(isPrime(j))
            if(n%j==0)
                return 0;
    }
    return 1;
}

// main method 
void main()
{
    //prime number 82589933;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("Prime number");
    else
        printf("Not a prime number");
}
