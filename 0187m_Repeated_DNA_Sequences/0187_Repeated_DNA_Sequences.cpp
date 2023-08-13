#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
	public:
		vector<string> findRepeatedDnaSequences(string s) {
			unordered_map<string, int> hash_map;
			vector<string> result;
			string tmp;
			int m = s.size();
			int i=0;
			while (i+10<m){
				tmp = s.substr(i, 10);
				if (s.substr(i+1).find(tmp)!=string::npos){
					hash_map[tmp] += 1;
				}
				i++;
			}
			for (const auto& kv : hash_map){
				result.push_back(kv.first);
			}
			return result;
		}
};

void DumpVector(vector<string> &m) {
    printf("%s():\n", __func__);
    for (int i = 0; i < m.size(); i++) {
    	printf("%s  ",  m[i].c_str());
    }
    printf("\n");
};

int main() {
	string example1 = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
	string example2 = "AAAAAAAAAAAAA";
	vector<string> v1;
	vector<string> v2;
	Solution sol;

	v1 = sol.findRepeatedDnaSequences(example1);
	DumpVector(v1);

	v2 = sol.findRepeatedDnaSequences(example2);
	DumpVector(v2);
	return 0;
};
