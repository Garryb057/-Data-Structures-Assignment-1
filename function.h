//Name: Gurekpal Bhullar
//Email: gsbzm8@umsystem.edu

#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readFile(string fileName, int arr[]);
int findNum(int numToFind, int arr[]);
void changeNum(int userIndex, int numToChange, int arr[]);
void addNum(int numToAdd, int arr[]);
void removeNum(int userIndex, int arr[]);
void printArr(int arr[]);
int menu();