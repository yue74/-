#include<iostream>
#include<vector>
using namespace std;

//编写一个函数，不用临时变量，直接交换number = [a,b]中a与b的值 
//number.length ==2

class Solution {
public:
	vector<int> swapNumber(vector<int>& a) {
		a[0] = a[0] ^ a[1];
		a[1] = a[0] ^ a[1];
		a[0] = a[0] ^ a[1];
		return a;
	}
};
int main() {
	return 0;
}