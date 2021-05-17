# Find factors of a given number.

## Programming logic

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
