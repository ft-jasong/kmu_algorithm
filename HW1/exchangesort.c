#include <stdio.h>
#include <stdlib.h>

void	print_arr(int *arr, int size)
{
	int	i;

	if (!arr)
	{
		perror("NULL access error");
		exit(1);
	}
	i = -1;
	printf("[");
	while (++i < size)
	{
		printf("%d", arr[i]);
		if (i < size - 1)
			printf(" ");
	}
	printf("]\n");
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int arr[] = {8, 31, 20, 2, 19, 18, 52, 28, 4, 6};
	int	i;
	int j;

	i = -1;
	print_arr(arr, 10);
	while (++i < 10)
	{
		j = i;
		while (++j < 10)
		{
			if (arr[i] > arr[j])
			{	
				swap(arr + i, arr + j);
				print_arr(arr, 10);
			}
		}
	}
	return (0);
}
