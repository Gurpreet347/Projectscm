#include<stdio.h>
void main()
{
    int s,n,i,j;
    printf("from where you want to search : ");
    scanf("%d",&s);
    printf("\nupto where do you want to search : ");
    scanf("%d",&n);
    for (i = s;i<=n;i++)
    {
        for(j = 2;j<i;j++)
        {
            if (i%j==0)
            {
                if(j<i)
                {
                 
                }
                else if(i==j)
                {
                    printf("%d\n",i);
                }
            }
        }
    }
}