#include <cstddef>
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
	public:
		int divide(int dividend, int divisor) {
			int k = 0;
			while (abs(dividend)>=abs(divisor)){
				if (abs(dividend)>abs(dividend+divisor)){
					k = k-1;
					dividend = dividend + divisor;
				}
				if (abs(dividend)>abs(dividend-divisor)){
					k = k+1;
					dividend = dividend - divisor;
				}
			};
			return k;
	}
};

int main() {
	int dividend_1 = 10;
	int divisor_1 = 3; // 3
	int dividend_2 = 7;
	int divisor_2 = -3; // -2  
	int dividend_3 = 10;
	int divisor_3 = -3; // -3
	int dividend_4 = -7;
	int divisor_4= -3; // 2
	Solution sol;
	cout <<  sol.divide(dividend_1, divisor_1) << "\n";
	cout <<  sol.divide(dividend_2, divisor_2) << "\n";
	cout <<  sol.divide(dividend_3, divisor_3) << "\n";
	cout <<  sol.divide(dividend_4, divisor_4) << "\n";
	return 0;
}
