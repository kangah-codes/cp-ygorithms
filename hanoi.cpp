// author = Joshua Akangah
// program to solve towers of hanoi in cpp

#include <iostream>

using namespace std;

void hanoi(int tiles, int start=1, int end=3){
	if (tiles){
		hanoi(tiles-1, start, 6-start-end);
		cout << "Move disk " << tiles << " from " << start << " to " << end << endl;
		hanoi(tiles-1, 6-start-end, end);
	}
}

int main(){
	hanoi(10);
	return 0;
}
