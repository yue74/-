#include<iostream>
#include<vector>
using namespace std;

//给一个数组，找到一个下标使得，左边的值==右边的值

class Solution {
public:
	int findMidleIndex(vector<int>& nums) {
		for (int i = 0; i < nums.size(); ++i) {
			int l = 0;
			int r = 0;
			for (int j = 0; j < i; ++j) {
				l += nums[j];
			}
			for (int j = i + 1; j < nums.size(); ++j) {
				r += nums[j];
			}
			if (l == r) {
				return i;
			}
		}
		return -1;
	}
};
int main() {
	return 0;
}