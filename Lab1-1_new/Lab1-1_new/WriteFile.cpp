#include "Header.h"

void WriteFile(const char* filename, double* data, int& size)
{
	ofstream file_write;
	file_write.open(filename, ios::out); //открываем файл для записи

	for (int i=0;i<size;i++) //пишем массив в файл
	{
		file_write << data[i]<<' ';
	}
	stop
}