#include<iostream>
#include<vector>
using namespace std;

//是否存在连续3个奇数的数组
class solution {
public:
	bool threeconsecutiveodds(vector<int> arr) {
		for (int i = 0; i < arr.size() - 2; ++i) {
			int a = arr[i];
			int b = arr[i + 1];
			int c = arr[i + 2];
			if (a % 2 && b & 2 && c % 2) {
				return true;
			 }
		}
		return false;
	}
};

int main() {


	return 0;
}