#include<iostream>
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		int L = needle.length(), N = haystack.length();
		
		for (int start = 0; start < N - L + 1; start++) {
			cout << haystack.substr(start, L) << endl;
			if (haystack.substr(start, L) == needle) {
				return start;
			}
		}
		return -1;
	}
};

int main() {
	string haystack = "hello", needle = "ll";
	Solution s;

	int res = s.strStr(haystack, needle);
	cout << res << endl;

	system("pause");
	return 0;
}