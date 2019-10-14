#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

using namespace std;

void insertion_sort(int num[],int size) {
	int i, j, key;
	bool insertionNeeded = false;
	int exchange = 0;

	for (j = 1; j < size; j++) {
		key = num[j];
		insertionNeeded = false;
		for (i = j - 1; i >= 0; i--){ // larger values move right

			if (key < num[i]) {
				num[i + 1] = num[i];
				insertionNeeded = true;
			}
			else
				break;
		}
		if (insertionNeeded)
			num[i + 1] = key; 
	}
}


vector<int> random_vector(size_t size){
	vector<int> v1;
	for (int i = 0; i < size; i++)
		v1.push_back(rand() % size); //put a random number between 0 and size
	return v1;
}

vector<int> sorted_vector(size_t size){
	vector<int> v1;
	for (int i = 0; i < size; i++)
		v1.push_back(i); 
	return v1;
}

vector<int> reversed_vector(size_t size){
	vector<int> v1;
	for (int i = size-1; i >= 0; i--)
		v1.push_back(i);
	return v1;
}

int main() {
	int n = 5;
	int test[] = { 5,3,5,1,2 };
	insertion_sort(test, n);

}