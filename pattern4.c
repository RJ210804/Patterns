#include<stdio.h>

int main()
{
    int i,j,k,l;
    for(i=1;i<=7;i++)
    {
        if(i==1||i==7)
            {
                for(j=1;j<=7;j++)
                    printf(" *");
            }
        else
        {
            for(k=1;k<=7;k++)
            {
                if(k==1||k==7)
                    printf(" *");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
	return 0;
}