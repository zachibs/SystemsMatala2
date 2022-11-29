#include <stdio.h>
#include "my_mat.h"

int main()
{
    char choose;
    int a,b;



    while (1)
    {
    scanf("%c", &choose);    
    
    if (choose == 'A')
    {
        A();
    }

    if (choose == 'B')
    {
        scanf("%d", &a);
        scanf("%d", &b);
        B(a,b);
    }

    if (choose == 'C')
    {
        scanf("%d", &a);
        scanf("%d", &b);
        C(a,b);
    }

    if (choose == 'D')
    {
        D();
    }
    
    }
    

    return 1;
}

