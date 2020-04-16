// author = Joshua Akangah

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
	for (int i=0;i<n;++i){
		bool swapped = false;

		for (int j=0;j<n;++j){
			if (arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				swapped = true;
			}
		}

		if (!swapped){
			break;
		}
	}
}


// print out the array
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << ("%d ", arr[i]) << endl; 
    cout << "n" << endl; 
} 


int main(){
	int arr[] = {1,3465,3445,23,34,56};

	bubble_sort(arr, sizeof(arr)/sizeof(arr[0]));

	printArray(arr, sizeof(arr)/sizeof(arr[0]));

	return 0;
}