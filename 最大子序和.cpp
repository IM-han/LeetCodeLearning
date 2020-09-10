#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int pre = 0;
		int maxAns = nums[0];

		for (const auto& x : nums) {
			//cout << x << endl;
			pre = max(pre + x, x);
			maxAns = max(maxAns, pre);
		}
		return maxAns;
	}
};

int main(){

	vector<int> num = { 1,3,-2,3, -1 };
	Solution s;
	int res = s.maxSubArray(num);

	cout << res << endl;

	system("pause");
	return 0;
}