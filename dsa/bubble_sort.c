#include <stdio.h>
#include <conio.h>
int main()
{
	int i, n, temp, j, arr[10];
	clrscr();
	printf("\n Enter the number of elements in the array : ");
	scanf("%d", &n);
	printf("\n Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr [i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n�i�1;j++)
		{
			if(arr[j] > arr[j+1])
 			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
		}
	}
	printf("\n The array sorted in ascending order is :\n");
	for(i=0;i<n;i++)
		printf("%d\t", arr[i]);
	getch();
	return 0;
}
