#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (!strs.size()) {
			return "";
		}

		string prefix = strs[0];
		int count = strs.size();
		for (int i = 0; i < count; i++) {
			prefix = longest2str(prefix, strs[i]);
			if (!prefix.size()) {
				break;
			}
		}

		return prefix;
	}

	string longest2str(const string& str1, const string& str2) {
		int length = min(str1.size(), str2.size());
		int index = 0;
		while (index < length && str1[index] == str2[index]) {
			++index;
		}
		return str1.substr(0, index);
	}
};

int main() {
	Solution s;
	vector<string> strArray;
	strArray.push_back("leets");
	strArray.push_back("leetcode");
	strArray.push_back("lees");
	strArray.push_back("l");

	string prefix = s.longestCommonPrefix(strArray);

	cout << "最大公共前缀为：" << prefix << endl;
}