#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
	public:
		int findKthLargest_brute_force(vector<int>& nums, int k){ 
			// vector<int>& gets the reference which means that any changes in the function would modify the origal data.
			// vector<int> gets a copy of the vector. The origal one would not change.
			sort(nums.begin(), nums.end());
			// sort(first, last), [first, last] is the range of elements to sort
			// vector.begin() and vecotr.end are the first and the end iterator
			return nums[nums.size()-k];
			// O(nlogn)
		};
	

		int findKthLargest_min_head(vector<int>& nums, int k){
			priority_queue<int, vector<int>, greater<int>> minHeap;
			// https://en.cppreference.com/w/cpp/container/priority_queue
			for (auto& n: nums){
				minHeap.push(n);
				if (minHeap.size()>k){
					minHeap.pop();
				}
			}
			return minHeap.top();
		};

};
int main() {
	vector<int> v1 = {3, 2, 1, 5, 6, 4};
	vector<int> v2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
	int k1 = 2;
	int k2 = 4;
	Solution solution;
	cout << "The top " << k1 << " for v1 is " <<  solution.findKthLargest_brute_force(v1, k1) << "\n";
	cout << "The top " << k2 << " for v2 is " <<  solution.findKthLargest_min_head(v2, k2) << "\n";
	return 0;
}
