//2 quick sort
#include <stdio.h>
void quickSort(int a[], int lower, int upper)
{
	int i,j,k,tmp,temp;
	i = lower;
	j = upper;
	tmp = a[lower];   
	
	if(i > j)  
	{
		return;
	}
	while(i != j)
	{
		while(i < j && a[j] >= tmp)   
		{
			j--;
		}
		if(i < j)
		{
			a[i++] = a[j];
		}
		while(i < j && a[i] <= tmp)
		{
			i++;
		}
		if(i < j)
		{
			a[j--] = a[i];
		}
		
		for(k = 0; k < 10; k++)
		{ 
			printf(" %d ", a[k]);
		}
		printf("\n");
	}
	
	a[lower] = a[i];
	a[i] = tmp;
	quickSort(a,lower,i-1);
	quickSort(a,i+1,upper);
}

int main()
{
	int i;
	int a[]={3,11,5,4,64,43,6,9,8,99};
	
	quickSort(a, 0, 9);
	for(i = 0; i < 10; i++)
	{ 
		printf(" %d ", a[i]);
	}
	
	return 0;
}
