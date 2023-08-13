#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			// use hash table
			unordered_map<int, int> hash_table;
			for(int i=0; i < nums.size(); i++){
				int target_number = target - nums[i];
				if (hash_table.find(target_number) == hash_table.end()){
					hash_table[nums[i]] = i;
				} else {
					return vector<int>{hash_table[target_number], i};
				}
			}

			return vector<int>{};
		}
};

void DumpVector(vector<int> &m) {
    printf("%s():\n", __func__);
    for (int i = 0; i < m.size(); i++) {
    	printf("%4d ",  m[i]);
    }
    printf("\n");
};

int main() {
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> r1;
	vector<int> r2;
	vector<int> r3;
	int t1 = 9;
	int t2 = 6;
	int t3 = 6;
	Solution sol;

	v1.push_back(2);
	v1.push_back(7);
	v1.push_back(11);
	v1.push_back(15);
	v2.push_back(3);
	v2.push_back(2);
	v2.push_back(4);
	v3.push_back(3);
	v3.push_back(3);

	DumpVector(v1);
	r1 = sol.twoSum(v1, t1);
	DumpVector(r1);

	DumpVector(v2);
	r2 = sol.twoSum(v2, t2);
	DumpVector(r2);

	DumpVector(v3);
	r3 = sol.twoSum(v3, t3);
	DumpVector(r3);
	return 0;
};
