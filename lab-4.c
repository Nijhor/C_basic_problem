#include<stdio.h>
 int main()
{
	int a[10],i,large,small;
	printf("Enter the Array: ");

	for(i=0; i<10; i++)
		scanf("%d",&a[i]);

	large=small=a[0];
	for(i=1;i<10;++i)
	{
		if(a[i]>large)
			large=a[i];
		if(a[i]<small)
			small=a[i];
	}

	printf("The largest element is %d",large);
	printf("\nThe smallest element is %d",small);

	return 0;
}
