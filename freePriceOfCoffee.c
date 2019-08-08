
#include <stdio.h>

int main()
{
    int X,P,price=0;
    scanf("%d %d",&X,&P);
    price=X;
    while(X>0)
    {
        X=(int)((float)X-(float)P*X/100);
        price+=X;
        
    }
     printf("%d\n",price);

    return 0;
}
