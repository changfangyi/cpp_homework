#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
	public:
		vector<string> simplifiedFractions(int n) {
			// use hash table
			vector<string> result;
			for (int i=2; i<=n; i++){
				for(int j=2; j<i; j++){
					if (i%j!=0){
						string s1= to_string(i);
						string s2= to_string(j);
						string s3 = s2 + "/"+ s1;
						result.push_back(s3);
					}
				}
				string s4 = to_string(i);
                                string s5 = "1/"+ s4;
                                result.push_back(s5);
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
	int e1 = 2;
	int e2 = 3;
	int e3 = 4;
	vector<string> v1;
	vector<string> v2;
	vector<string> v3;
	Solution sol;

	v1 = sol.simplifiedFractions(e1);
	DumpVector(v1);

	v2 = sol.simplifiedFractions(e2);
	DumpVector(v2);

	v3 = sol.simplifiedFractions(e3);
	DumpVector(v3);
	return 0;
};
