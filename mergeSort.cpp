#include "Merge.h"
#include "MergeSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;


std::vector<int> mergeSort(std::vector<int> &inVector, int Left, int Right){
	if(Right > Left){
		int Middle = (Right + Left)/2;
		cout << " " << endl;
	for(std::vector<int>::const_iterator e = inVector.begin(); e != inVector.end(); ++e){
		std::cout << *e << ' ';}
		mergeSort(inVector, Left, Middle);

		mergeSort(inVector, Middle + 1, Right);

		mergeTogether(inVector, Left, Middle, Right);
	}
	return inVector;
}
