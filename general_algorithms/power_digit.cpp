#include <iostream>
#include <cmath>

int powerDigit(int exp){
	int ans = pow(2, exp);
	int sum = 0;

	while (ans > 0){
		sum += ans % 10;
		ans /= 10;
	}

	return sum;
}

int main(){
	std::cout << powerDigit(15) << std::endl;
	return 0;
}
