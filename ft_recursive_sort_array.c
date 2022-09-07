#include "gabi.h"

int	*ft_recursive_sort_array(int array[], int len)
{
	int	aux;

	aux = 0;
	if (len == 0 || len == 1 || array == NULL)
		return (NULL);
	for (int i = 0; i < len - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			aux = array[i];
			array[i] = array[i + 1];
			array[i + 1] = aux;
		}
	}
	ft_recursive_sort_array(array, len - 1);
	return (array);
}
