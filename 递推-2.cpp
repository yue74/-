#include<iostream>
#include<vector>
using namespace std;

//爬楼梯，每次只能爬1|2阶求爬到第n阶的方案数

class Solution {
public:
	int climberStairs(int n) {
		int c[46];
		c[0] = 1;
		c[1] = 1;
		for (int i = 2; i <= n; ++i) {
			c[i] = c[i - 1] + c[i - 2];
		}
		return c[n];
	}
};

int main() {
	return 0;
}