#include "Header.h"

void RandFile(const char* filename,int size)
{
	srand(time(0)); //����������� �� ������������� ��������� �� �������
	double* rand_array = new double[size]; //�������� ������ ��� ������

	for (int i=0;i<size;i++) //��������� ������ ���������� ����������
	{
		rand_array[i] = rand();
	}
	WriteFile(filename,rand_array,size); //����� ������ � ����

	delete[] rand_array; //������ ������
}