#include "Header.h"

bool TestFile(const char* inputfile, const char* output_file)
{
	int size_array=0; //������ ���������� �������

	int* data = &ReadFile(inputfile,size_array); //������ ����, �������� ������ data
	QuickSort(data, 0, size_array-1); //��������� ������ data ������� �����������
	WriteFile(output_file, data,size_array); //���������� �������������� ������ � �������� ����
	return CheckSort(data,size_array);// ��������� �������������� �� ������ data
}