#include<iostream>
using namespace std;

//输入是一个无符号整数（以二进制串的形式）返回1的个数

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int sum = 0;
		while (n) {
			sum += n & 1;//& 1 == %2
			n >>= 1;//>> 1 == /2
		}
		return sum;
	}
};

int main() {
	return 0;
}