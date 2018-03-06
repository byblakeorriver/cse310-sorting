#include "Merge.h"
#include "MergeSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

void mergeTogether(std::vector<int> &inVector, int left, int middle, int right){
	int n1 = middle - left + 1;
	int n2 = right - middle;

	std::vector<int> L(n1+1);
	std::vector<int> R(n2+1);
	for(int i = 0; i < n1; i++){
		L[i]=inVector[left + i];
	}
	for(int j = 0; j < n2; j++){
		R[j]=inVector[left + middle + j];
	}


	L[n1+1]=INT_MAX;
	R[n2+1]=INT_MAX;
	int i = 0;
	int j = 0;
	for(int k = left; left <= right; k++){
		if(L[i]<=R[j]){
			inVector[k]=L[i];
			i++;
		}else{
			inVector[k]=R[j];
			j++;
		}
	}
}
