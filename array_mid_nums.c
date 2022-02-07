#include<stdio.h>
int main()
{
	int n,i,j,x,max=0;
	scanf("%d",&n);
	int arr[n][n];
	x=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			int sum=0;
			if(i!=0 && j!=0 && i!=x && j!=x)
			{
				sum=arr[i-1][j]+arr[i][j-1]+arr[i+1][j]+arr[i][j+1];
				printf("%d ",sum);
			}
			if(sum>=max)
			{
				max=sum;
			}
		}
		printf("\n");
	}
	printf("Result is %d",max);
}
