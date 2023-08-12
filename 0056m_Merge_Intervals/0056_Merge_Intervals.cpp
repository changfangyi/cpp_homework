#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
	public:
		vector<vector<int>> merge_brute_force(vector<vector<int>>& intervals) {
			int num_interval = intervals.size();
			vector<vector<int> > result;
			for (int i=1; i < num_interval; i++){
				for (int j=i-1; j >= 0; j--){
					if (intervals[i][0] <= intervals[j][1]){
						intervals[i][0] = intervals[j][0];
						intervals[j][1] = intervals[i][1];
					};
				}
			}
			
			int start = intervals[0][0];
			result.push_back(intervals[0]);
			for (int i=1; i < num_interval; i++){
				if (intervals[i][0]>start){
					start = intervals[i][0];
					result.push_back(intervals[i]);
				}
			}
			return result;
		}
};

void DumpMatrix(vector<vector<int>> &m) {
    printf("%s():\n", __func__);
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
	vector<vector<int> > matrix1;
	vector<vector<int> > matrix2;
	vector<vector<int> > matrix1_result;
	vector<vector<int> > matrix2_result;
	vector<int> r11;
	vector<int> r12;
	vector<int> r13;
	vector<int> r14;
	vector<int> r21;
	vector<int> r22;
	Solution sol;

	r11.push_back(1);
	r11.push_back(3);
	r12.push_back(2);
	r12.push_back(6);
	r13.push_back(8);
	r13.push_back(10);
	r14.push_back(15);
	r14.push_back(18);
	matrix1.push_back(r11);
	matrix1.push_back(r12);
	matrix1.push_back(r13);
	matrix1.push_back(r14);
	DumpMatrix(matrix1);
	matrix1_result = sol.merge_brute_force(matrix1);
	DumpMatrix(matrix1_result);
	r21.push_back(1);
	r21.push_back(4);
	r22.push_back(4);
	r22.push_back(5);
	matrix2.push_back(r21);
	matrix2.push_back(r22);
	DumpMatrix(matrix2);
	matrix2_result = sol.merge_brute_force(matrix2);
	DumpMatrix(matrix2_result);
	return 0;
}
