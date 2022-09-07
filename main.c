#include "gabi.h"

int	main(void)
{
	int array[] = {10, 2, 5, 100, 50};

	printf("\nArray before sorting: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", array[i]);

	printf("\n");

	printf("Array after sorting: \n");

	for (int i = 0; i < 5; i++)
	{
		printf("\033[38;5;1mft_simple_sort_array: %d \033[m\n",
				ft_simple_sort_array(array, 5)[i]);
		printf("\033[38;5;45mft_sort_array: %d \033[m\n",
				ft_recursive_sort_array(array, 5)[i]);
		printf("\033[32mft_effetive_sort_array: %d \033[m\n",
				ft_effetive_sort_array(array, 5)[i]);
	}
	return (0);
}