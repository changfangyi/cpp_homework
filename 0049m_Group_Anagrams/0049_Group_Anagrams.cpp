#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
	public:
		vector<vector<string>> groupAnagrams(vector<string>& strs) {
			vector<vector<string>> result;
			unordered_map<string, vector<int>> hash_table;
			for (int i=0; i<strs.size(); i++){
				string c=strs[i];
				sort(begin(c), end(c));
				hash_table[c].push_back(i);
			}
			for (const auto& kv: hash_table){
				result.push_back({});
				for (int i: kv.second){
					result.back().push_back(strs[i]);
				}
			}
			return result;
		}
};

void DumpMatrix(vector<vector<string>> &m) {
    printf("%s():\n", __func__);
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            printf("%s ", m[i][j].c_str());
        }
        printf("\n");
    }
}

void DumpVector(vector<string> &m) {
    printf("%s():\n", __func__);
    for (int i = 0; i < m.size(); i++) {
            printf("%s ", m[i].c_str());
    }
        printf("\n");
}

int main() {
	vector<string> example1;
	vector<string> example2;
	vector<string> example3;
	vector<vector<string> > matrix1_result;
	vector<vector<string> > matrix2_result;
	vector<vector<string> > matrix3_result;
	Solution sol;

	example1.push_back("eat");
	example1.push_back("tea");
	example1.push_back("tan");
	example1.push_back("ate");
	example1.push_back("nat");
	example1.push_back("bat");

	example2.push_back("");

	example3.push_back("a");

	DumpVector(example1);
	matrix1_result =sol.groupAnagrams(example1);
	DumpMatrix(matrix1_result);

	DumpVector(example2);
	matrix2_result = sol.groupAnagrams(example2);
	DumpMatrix(matrix2_result);

	DumpVector(example3);
	matrix3_result = sol.groupAnagrams(example3);
	DumpMatrix(matrix3_result);
	return 0;
}
