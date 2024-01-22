#include<stdio.h>

int main()
{
    int i,j,k,l,m;
    for(i=1;i<=7;i++)
    {
        if(i<=4)
        {
            for(j=1;j<i;j++)
                printf(" ");
            for(k=i;k<=8-i;k++)
            {
                if(k==i||k==8-i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        else
        {
            for(m=1;m<8-i;m++)
                printf(" ");
            for(l=i;l>=1;l--)
            {
                if(l==i||l==8-i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}