
#include <stdio.h>

int main()
{
    int X,P,price=0;
    scanf("%d %d",&X,&P);
    price=X;
    while(X>1)
    {
        X=X-P*X/100;
        price+=X;
        
    }
     printf("%d\n",price);

    return 0;
}
