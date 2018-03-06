#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "InsertionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
using namespace std;

int main(){
    int input,alg;
    int lengthOfVector=0;
    std::vector<int> unsorted;
    std::vector<int> sorted;
    do{
		cout << "Enter a number(-1 to pick algorithm)";
		cin >> input;
		lengthOfVector++;
		unsorted.push_back(input);
    }while (input != -1);
    unsorted.pop_back();

	cout << "Here is the list of numbers to sort."<<endl;
	for(std::vector<int>::const_iterator i = unsorted.begin(); i != unsorted.end(); ++i){
		std::cout << *i <<' ';
	}
	cout << " " <<endl;

	cout << "Which sorting algorithm would you like to use?"<<endl;
	cout << "(1) for Insertion Sort."<<endl;
	cout << "(2) for Quick Sort."<<endl;
	cout << "(3) for Merge Sort."<<endl;
	cout << "(4) for an Iterative Merge Sort."<<endl;
	cin >> alg;
	switch(alg){
		case 1: sorted = insertionSort(unsorted,lengthOfVector-2);
				break;
		case 2: sorted = quickSort(unsorted, 0, lengthOfVector-2);
				break;
		case 3: sorted = mergeSort(unsorted, 0, lengthOfVector);
				break;
	}



	cout << " " << endl;
	for(std::vector<int>::const_iterator i = sorted.begin(); i != sorted.end(); ++i){
		std::cout << *i << ' ';
	}
    return 0;
}
