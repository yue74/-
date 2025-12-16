#include<iostream>
#include<vector>
using namespace std;

//求有序数组中的单一元素（唯一）O（log n） O（1）
class solution {
public:
	int singlenonduplicate(vector<int>& nums) {
		for (int i = 1; i < nums.size()-1; ++i) {
			if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
				return nums[i];
			}
		}
		if (nums.size() == 1) {
			return nums[0];
		}
		if (nums[0] != nums[1]) {
			return nums[0];
		}
		return nums.back();
	}
};

int main() {


	return 0;
}