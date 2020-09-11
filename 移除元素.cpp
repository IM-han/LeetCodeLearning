#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int size = nums.size();
		for (int i = 0; i < size; i++) {
			if (nums[i] == val) {
				for (int j = i + 1; j < size; j++) {
					nums[j - 1] = nums[j];
				}
				i--;
				size--;
			}
		}
		return size;
	}

	int remove2(vector<int>& nums, int val) {
		int size = nums.size();
		int i = 0;
		for (int j = 0; j < size; j++) {
			if (nums[j] != val) {
				nums[i] = nums[j];
				i++;
			}
		}

		return i;
	}

	int remove3(vector<int>& nums, int val) {
		int size = nums.size();

		int i = 0;
		while (i < size)
		{
			if (nums[i] == val) {
				nums[i] = nums[size - 1];
				size--;
			}
			else {
				i++;
			}
		}

		return i;
	}
};

int main() {
	vector<int> nums = { 1,2,2,4 };
	Solution s;
	int res;
	/*res	= s.removeElement(nums, 2);
	cout << res << endl;
	
	cout << nums.size() << endl;*/

	res = s.remove3(nums, 2);
	cout << res << endl;

	system("pause");
	return 0;
}