#include "Header.h"

bool TestFile(const char* inputfile, const char* output_file)
{
	int size = FileSize(inputfile);
	bool result_test = false;
	double* read_array = new double[size]; //� ������� ����� ������ ��������
	ReadFile(inputfile,read_array,size);

	if (size != 0)
	{
		QuickSort(read_array, 0, size - 1); //��������� ������ data ������� �����������

		cout << "Sort data -> "; //������� � ������� ��������������� ������
		for (int i=0;i<size;i++)
		{
			cout << read_array[i] << " ";
		}
		cout << endl;

		WriteFile(output_file, read_array, size); //���������� �������������� ������ � �������� ����
		result_test = CheckSort(read_array,size);
	}
	delete[] read_array; //� ������� ����� ������ ���������
	read_array = nullptr; 

	return result_test;
}