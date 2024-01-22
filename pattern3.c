#include<stdio.h>

int main()
{
    int i,j,k,l;
    for(i=1;i<=7;i++)
    {
        if(i==4)
            {
                for(k=1;k<=7;k++)
                    printf(" *");
            }
        else
        {
            for(j=1;j<=7;j++)
            {
                if(j==4)
                    printf(" * ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
	return 0;
}