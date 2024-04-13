// search for a suitable range where the value falls
// Once the range is determined, use binary search

int exponential_search(int *array, size_t size, int value)
{
	//finding the suitable range
	size_t i = 0;

	while (i < size && array[i] < value)
		bound *= 2;

	//conducting binary search
	
