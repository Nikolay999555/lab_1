#include "Header.h"

void RandFile(const char* filename,int size)
{
	srand(time(0)); //избавл€емс€ от псевдорандома прив€зкой ко времени
	int* rand_array = new int[size]; //выдел€ем пам€ть под массив

	for (int i=0;i<size;i++) //заполн€ем массив рандомными значени€ми
	{
		rand_array[i] = rand();
	}
	WriteFile(filename,rand_array,size); //пишем массив в файл

	delete[] rand_array; //чистим пам€ть
}