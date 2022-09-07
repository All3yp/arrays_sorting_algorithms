#include "gabi.h"

int	*ft_simple_sort_array(int array[], int len)
{
	int	temp;

	temp = 0;
	if (array == NULL)
		return (NULL);
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return (array);
}
