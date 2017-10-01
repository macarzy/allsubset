#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    int arrayS[3]= {'a','b','c'};


    printf("S have %d subject!\n", 8);
    printf("S=");

    for(i=0; i<8; i++)
    {

        printf("{");
        if(i >= 4)
        {
            printf("A");
        }

        if((i/2)%2 == 1)
        {
            printf("B");
        }

        if(i%2 == 1)
        {
            printf("C");

        }
        printf("}");
    }




    system("pause");
    return 0;

}
