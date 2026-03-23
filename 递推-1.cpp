#include<iostream>
#include<vector>
using namespace std;

//1.斐波那契数列
//上台阶
//a，c，m的字母组合（m不能相邻）升维再降维！！！太妙了
//根据影响条件来判断维度


//斐波那契数列
class Solution {
public:
	int fib(int n) {
		int f[31];
		f[0] = 0;
		f[1] = 1;
		for (int i = 2; i <= n; ++i) {
			f[i] = f[i - 1] + f[i - 2];
		}
		return f[n];
	}
};
int main() {
	return 0;
}