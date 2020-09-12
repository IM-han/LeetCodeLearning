#include<iostream>
using namespace std;

#include<vector>

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int i = nums1.size() - 1;
		m--;
		n--;

		while (n >= 0) {
			while (m >= 0 && nums1[m] > nums2[n]) {
				swap(nums1[i--], nums1[m--]);
			}
			swap(nums1[i--], nums2[n--]);
		}
		
	}
};

int main() {
	vector<int> nums1 = { 7,8,9,0,0,0 };
	vector<int> nums2 = { 4,5,6 };

	Solution s;
	s.merge(nums1, 3, nums2, 3);

	system("pause");
	return 0;
}