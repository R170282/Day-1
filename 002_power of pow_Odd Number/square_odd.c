#include<stdio.h>
int sum_of_square_oddNumbers(int n)
{
     int x,sum;
     sum=0;
     x=1;
     for(int i=0;i<n;i++)
    {
	 sum=sum+x*x;
         x=x+2;
    }
    return sum;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=sum_of_square_oddNumbers(n);
    printf("%d\n",k);
    return 0;
}

