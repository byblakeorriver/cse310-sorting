#include "Partition.h"
#include "QuickSort.h"
#include <stdlib.h>
#include <stdio.h>
#include <vector>

int quickSortPartition(std::vector<int> &inVector, int initial, int length){
	int x = inVector[length];
	int i = initial - 1;
	for(int j = initial; j<length; j++){
		if(inVector[j]<=x){
			i = i + 1;
			int temp1 = inVector[i];
			inVector[i]=inVector[j];
			inVector[j]=temp1;
		}//if
	}//for
	int temp2 = inVector[i+1];
	inVector[i+1] = inVector[length];
	inVector[length] = temp2;
	return i+1;
}//quickSortPartition
