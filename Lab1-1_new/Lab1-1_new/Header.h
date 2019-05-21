#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include  <fstream>
#include <ctime>
using namespace std;

bool TestFile(const char* inputfile, const char* output_file);
int& FileSize(const char* inputfile);
void ReadFile(const char* fileName,double* read_array,int& size);
void QuickSort(double* arr, int left, int right);
void WriteFile(const char* fileName, double* data,int& size);
bool CheckSort(double* data,int& size);
void RandFile(const char* filename,int size);

