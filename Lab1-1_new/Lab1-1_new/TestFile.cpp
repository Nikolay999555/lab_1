#include "Header.h"

bool TestFile(const char* inputfile, const char* output_file)
{
	int size_array=0; //размер считанного массива

	int* data = &ReadFile(inputfile,size_array); //читаем файл, получаем массив data
	QuickSort(data, 0, size_array-1); //сортируем массив data быстрой сортировкой
	WriteFile(output_file, data,size_array); //записываем осортированный массив в выходной файл
	return CheckSort(data,size_array);// проверяем отсортировался ли массив data
}