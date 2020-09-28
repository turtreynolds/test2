#include <stdio.h>

int main(void)
{

    int v[5] = {5, 10, 4, 15, 2};
    int menor, i_menor, i;


    for (int j = 0; j < 5; j++)
    {
        menor = v[j];
        i_menor = j;

        for (i = j; i < 5; i++) 
        {
            if (v[i] < menor)
            {
                menor = v[i];
                i_menor = i;
            }
        }
    
    
    int aux = menor;
    
    
    
    v[i_menor] = v[j];
    v[j] = aux;


    for(int k=0;k<5;k++)
            printf("%d ", v[k]);
        printf("\n");
    
    
    
    
    
    }








}
