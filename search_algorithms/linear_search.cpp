#include <iostream>

int linear_search(int arr[], int search){
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);++i){
		if (arr[i] == search){
			return search;
		}
	}
	return -1;
}

int main(){
	int arr[] = {34,436,34,54};
	std::cout << linear_search(arr, 8) << std::endl;
}