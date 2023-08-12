#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

void DumpVector(vector<int> &m) {
    printf("%s():\n", __func__);
    for (int i = 0; i < m.size(); i++) {
            printf("%4d ", m[i]);
    }
    printf("\n");
}

class Solution {
	public:
		void sortColors(vector<int>& nums) {
			int n = nums.size();
			int i = 0;
			int j = 0;
			while( i < n & i+j<n){
				if (nums[i]==2){
					nums.push_back(2);
					nums.erase(nums.begin() + i);
					j ++;
				} else if (nums[i]==0){
					nums.erase(nums.begin() +i);
					nums.insert(nums.begin(), 0);
					i++;
				} else {
					i++;
				}
			};
	}
};

int main() {
	vector<int> case_1;
	vector<int> case_2;
	Solution solution;

	case_1.push_back(2);
	case_1.push_back(0);
	case_1.push_back(2);
	case_1.push_back(1);
	case_1.push_back(1);
	case_1.push_back(0);
	DumpVector(case_1);
	solution.sortColors(case_1);
	DumpVector(case_1);

	case_2.push_back(2);
	case_2.push_back(0);
	case_2.push_back(1);
	DumpVector(case_2);
	solution.sortColors(case_2);
	DumpVector(case_2);
	return 0;
}
