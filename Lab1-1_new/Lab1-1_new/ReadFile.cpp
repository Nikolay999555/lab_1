#include "Header.h"

int& ReadFile(const char* filename,int& size)
{
	ifstream file_read;
	file_read.open(filename,ios::in); //��������� ���� ��� ������

	int temp, i = 0;
	while (file_read>>temp) //������ �������� ���������� ���������� � ���� ���������
	{
		size++;
	}

	file_read.clear();
	file_read.seekg(0); //������������ �� ������ ����� 

	int* read_array= new int[size]; //�������� ������ ��� ��������� ������
	while (file_read >> read_array[i]) //������ ��������� � ������ read_array ������ �� �����
	{
		i++;
	}
	file_read.close(); //��������� ����
	return *read_array; //���������� ������
}