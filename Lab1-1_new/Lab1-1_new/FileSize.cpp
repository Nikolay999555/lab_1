#include "Header.h"

int& FileSize(const char* inputfile)
{
	ifstream file_read;
	file_read.open(inputfile, ios::in);

	char temp[128];
	int size = 0;

	cout << "Input data-> ";
	while (file_read >> temp) //������ �������� ���������� ���������� � ���� ���������
	{
		cout << temp << " "; //������� � ������� ������� ������
		size++;
	}
	cout << endl;

	file_read.close();
	return size;
}