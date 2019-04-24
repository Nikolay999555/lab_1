#include "Header.h"

bool CheckSort(int* data, int& size) 
{
	for (int i = 1; i < size; i++) 
	{
		if (data[i-1] > data[i]) //проверяем соседние элементы массива, если предыдущий больше текущего, значит массив не отсортирован
		{
			return false;
		}
	}
	return true;
}