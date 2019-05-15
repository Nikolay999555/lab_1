#include "Header.h"

int& FileSize(const char* inputfile)
{
	ifstream file_read;
	file_read.open(inputfile, ios::in);

	char temp[128];
	int size = 0;
	while (file_read >> temp) //циклом получаем количество записанных в файл элементов
	{
		size++;
	}
	file_read.close();
	return size;
}