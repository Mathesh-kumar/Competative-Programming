# Find whether the given number is prime or not.

## Explanation:
  1. Find perfect square less than or equal to the given number.
  2. Then find prime numbers less than that perfect square number.
  3. If any one of the prime number less than the perfect square number divides the given number, then the number is not a prime number.
  4. Else the given number is prime.

## Program Logic (in C):

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
