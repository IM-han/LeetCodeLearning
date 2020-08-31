#include<iostream>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		/*
		1. ��x<0ʱ��x���ǻ�����
		2. ����������һλ��0����x!=0��x���ǻ�������
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
		//����Ϊ����ʱ������ͨ��revertedNum/10ȥ��������λ������

		return x == revertedNum || x == revertedNum / 10; //�߼�����һ��Ϊtrue���ͷ���true
	}
};

int main() {
	Solution s;
	int x = 123;
	bool ret;
	ret = s.isPalindrome(x);
	cout << "x�ǻ�����" << ret << endl;
	
	ret = s.isPalindrome(1221);
	cout << "x�ǻ�����" << ret << endl;


	system("pause");
	return 0;
}