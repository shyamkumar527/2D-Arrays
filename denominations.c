#include<stdio.h>
int main()
{
	int n,amt,i;
	printf("Enter the number of Denominations: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Denominations: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Amount: ");
	scanf("%d",&amt);
	
	for(i=0;i<n;i++)
	{
		int x=0;
		if(arr[i]>5)
		{
			if(amt/arr[i]>0)
			{
				x=amt/arr[i];
				amt=amt%arr[i];
				printf("%d notes ---> %d",arr[i],x);
			}
			else
			{
				printf("%d notes ---> 0",arr[i]);
			}	
		}
		else
		{
			if(amt/arr[i]>0)
			{
				x=amt/arr[i];
				amt=amt%arr[i];
				printf("%d coins ---> %d",arr[i],x);
			}
			else
			{
				printf("%d coins ---> 0",arr[i]);
			}	
		}
		printf("\n");	
	}
		
}
