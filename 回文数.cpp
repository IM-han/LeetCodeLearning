#include<iostream>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		/*
		1. 当x<0时，x不是回文数
		2. 如果数字最后一位是0，且x!=0，x不是回文数。
		*/

		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}

		int revertedNum = 0;
		while (x > revertedNum) {
			revertedNum = revertedNum * 10 + x % 10;
			x /= 10;
		}

		//cout << revertedNum << endl;
		//数字为基数时，可以通过revertedNum/10去除处于中位的数字

		return x == revertedNum || x == revertedNum / 10; //逻辑或，有一个为true，就返回true
	}
};

int main() {
	Solution s;
	int x = 123;
	bool ret;
	ret = s.isPalindrome(x);
	cout << "x是回文数" << ret << endl;
	
	ret = s.isPalindrome(1221);
	cout << "x是回文数" << ret << endl;


	system("pause");
	return 0;
}