#include <stdio.h>

int main()
{
    char a = 'e';
    int max,i;
    int brr[10] = {8,980,2,2,4,7,23,98,56,78};



    max = brr[0];

    for(i = 1; i < 9; i++)
    {

        if(brr[i]>brr[i+1])
        {
            max = brr[i];
        }


    }
    printf("%d",max);

}
