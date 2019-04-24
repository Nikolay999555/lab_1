#include "Header.h"

int& ReadFile(const char* filename,int& size)
{
	ifstream file_read;
	file_read.open(filename,ios::in); //открываем файл для чтения

	int temp, i = 0;
	while (file_read>>temp) //циклом получаем количество записанных в файл элементов
	{
		size++;
	}

	file_read.clear();
	file_read.seekg(0); //возвращаемся на начало файла 

	int* read_array= new int[size]; //выделяем память под считанные данные
	while (file_read >> read_array[i]) //циклом считываем в массив read_array данные из файла
	{
		i++;
	}
	file_read.close(); //закрываем файл
	return *read_array; //возвращаем массив
}