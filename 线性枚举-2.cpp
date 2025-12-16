#include<iostream>
#include<vector>
using namespace std;

//给一个二进制数组，计算最大连续1的个数
class solution {
public:
	int findmaxconsecutiveones(vector<int>& nums) {
		int pre = 0;
		int max = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == 1) {
				pre = pre + 1;
				if (max < pre) {
					max = pre;
				}
			}
			else {
				pre = 0;
			}
			 
		}
		return max;
	}
	
};

int main() {


	return 0;
}