#include <stdio.h>
#include <math.h>

int main(void)
{
    
    long card = 123456;
    long rem;


    for (int i = 0; i < 6; i++)
    {
        rem = card % 10;
        printf("for i is %i, the remainder is %lu\n", i, rem);
        card = (card - rem) / 10;
    }

    
    
}