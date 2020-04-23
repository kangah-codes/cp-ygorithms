#include <iostream>
#include <math.h>
#include <iostream>

int jump_search(int arr[], int search){
	int n = sizeof(arr)/sizeof(arr[0]);
	int jump = sqrt(n);

	while (arr[std::min(jump, n)-1] < search){
		prev = jump;
		jump += sqrt(n);
		if (prev >= n){
			return -1;
		}
	}

	while (arr[prev] < search){
		prev += 1;
		if (prev == std::min(jump, n)){
			return -1;
		}
	}

	if (arr[prev] == search){
		return arr[prev];
	}
}

int main(){
	int arr[] = {2,3,5,6,7};

	std::cout << jump_search(arr, 5) << std::endl;
}