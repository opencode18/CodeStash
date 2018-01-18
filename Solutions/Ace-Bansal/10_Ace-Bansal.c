#include <stdio.h>

int main()
{
    int n,n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int cups[n1];
    int saucers[n2];
    int sumCups=0;
    int sumSaucers=0;
    int shelfCups,shelfSaucers;
    int i;

    for(i=0;i<n1;i++)
    {
        scanf("%d",&cups[i]);
        sumCups=sumCups+cups[i];
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&saucers[i]);
        sumSaucers=sumSaucers+saucers[i];
    }

    scanf("%d",&n);

    if(sumCups%5==0)
    {
        shelfCups=sumCups/5;
    }
    else
    {
        shelfCups=(sumCups/5)+1;
    }

    if(sumSaucers%10==0)
    {
        shelfSaucers=sumSaucers/10;
    }
    else
    {
        shelfSaucers=(sumSaucers/10)+1;
    }

    int totShelf=shelfCups+shelfSaucers;
    if(totShelf>n)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
