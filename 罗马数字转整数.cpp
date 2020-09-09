#include<iostream>
using namespace std;

#include<map>

class Solution {
public:
	int roman2Int(string s) {
		int result = 0;
		map<char, int> romanTable = {
			{'I', 1},
			{'V', 5},
			{'X', 10},
			{'L', 50},
			{'C', 100},
			{'D', 500},
			{'M', 1000}
		};

		for (int i = 0; i < s.length(); i++) {
			if (romanTable[s[i]] < romanTable[s[i + 1]]) {
				result -= romanTable[s[i]];
			}
			else {
				result += romanTable[s[i]];
			}
		}

		return result;
	}
};

int main() {

	Solution s;
	string c = "LVII";
	int res = s.roman2Int(c);
	cout << res << endl;

	system("pause");
	return 0;
}