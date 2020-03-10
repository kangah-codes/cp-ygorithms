#include <iostream>

using namespace std;

void selection_sort(int arr[], int n){
	for (int i=0;i<n-1;++i){
		int min_index = i;

		for (int j=i+1;j<n;++j){
			if (arr[j] < arr[min_index]){
				min_index = j;
			}
		}

		int temp = arr[min_index];
		int temp2 = arr[i];
		arr[min_index] = temp2;
		arr[i] = temp;
	}
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << ("%d ", arr[i]) << endl; 
} 

int main(){
	int arr[] = {23,32,234,64};

	selection_sort(arr, sizeof(arr)/sizeof(arr[0]));

	printArray(arr, sizeof(arr)/sizeof(arr[0]));

	return 0;
}