#include "QuickSort.h"
#include "Partition.h"
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>


std::vector<int> quickSort(std::vector<int> &inVector, int initial, int length){
	int k;
	if(initial < length){
		k = quickSortPartition(inVector,initial,length);
		quickSort(inVector, initial, k-1);
		quickSort(inVector, k+1, length);
	}
	return inVector;
}//quickSort
