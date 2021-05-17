# Find factors of a given number.

## Psedo code (Logic):    
    for i=1 to i*i<=n
        if n%i==0
            print i
            if n/i != i
                print n/i
                
## Program (in C):
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
