#include<stdio.h>

int main()
{
    int i,j,k,l,m;
    for(i=1;i<10;i++)
    {
        if(i<=5)
        {
			for(j=1;j<i;j++)
				printf(" ");
			for(k=1;k<=6-i;k++)
				printf("* ");
        }
        else
        {
			for(m=1;m<10-i;m++)
				printf(" ");
			for(l=0;l<=i-5;l++)
				printf("* ");
        }
      printf("\n");}
  return 0;
}