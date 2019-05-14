#include "Header.h"

void ReadFile(const char* filename, double* read_array, int& size)
{
	ifstream file_read;
	file_read.open(filename,ios::in); //��������� ���� ��� ������

	char temp[128];
	int i = 0;
	while (file_read >> temp) //������ ��������� � ������ read_array ������ �� �����
	{
		char* end;
		double double_val = strtod(temp, &end);
		if (temp!=end)
		{
			read_array[i] = double_val;
			i++;
		}
	}
	size = i;
	file_read.close(); //��������� ����

}