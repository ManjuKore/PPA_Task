#include<stdio.h>
#include<malloc.h>
int main()
{
        int *a,i,n,second_max,max;
	printf("no of elements:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
   	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	second_max=max=a[0];
	if(n>2)
	{
        	for(i=0;i<n;i++)
        	{
			if(max<a[i])
			{
				max=a[i];
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=max && second_max<a[i])
			{
				second_max=a[i];
			
			}		
        	}
		printf("All elements\n");
		for(i=0;i<n;i++)
		{
			if(a[i]!=max && a[i]!=second_max)
				printf("%d\t",a[i]);
		}
	}
	else{
		printf("no such elements\n");
	}
return 0;
}

