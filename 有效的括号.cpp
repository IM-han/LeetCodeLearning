#include<iostream>
using namespace std;
#include<unordered_map>
#include<stack>


class Solution {
public:
	bool isValid(string s) {
		int n = s.size();
		if (n % 2 == 1) {
			return false;
		}

		unordered_map<char, char> pairs = {
			{')', '('},
			{']', '['},
			{'}', '{'}
		};

		stack<char> stk;
		for (char ch : s) {
			if (pairs.count(ch)) {
				if (stk.empty() || stk.top() != pairs[ch]) {
					return false;
				}
				stk.pop();
			}
			else {
				stk.push(ch);
			}
		}
		return stk.empty();
	}
};

int main() {

	string c = "[]{}";
	Solution s;
	bool res = s.isValid(c);

	cout << res << endl;

	system("pause");
	return 0;
}