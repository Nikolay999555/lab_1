#include "Header.h"

void WriteFile(const char* filename, double* data, int& size)
{
	ofstream file_write;
	file_write.open(filename, ios::out); //��������� ���� ��� ������

	for (int i=0;i<size;i++) //����� ������ � ����
	{
		file_write << data[i]<<' ';
	}
	stop
}