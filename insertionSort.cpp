#include "InsertionSort.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
std::vector<int> insertionSort(std::vector<int> inVector, int length){
	for(int j = 1; j<=length; j++){
		int key = inVector[j];
		int i = j - 1;
		while(i>=0 && inVector[i]>key){
			inVector[i+1]=inVector[i];
			i = i - 1;
		}
		inVector[i+1]=key;
	}
	return inVector;
}//insertionSort
