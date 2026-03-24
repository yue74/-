#include<iostream>
#include<vector>
using namespace std;

//

class Solution {
public:
	vector<int> getRow(int index) {
		int a[2][44];
		int now = 1;
		int pre = 0;
		a[pre][0] = 1;
		for (int i = 1; i <= index; ++i) {
			for (int j = 0; j <= i; ++j) {
				if (j == 0 || j == i) {
					a[now][j] = 1;
				}
				else {
					a[now][j] = a[pre][j] + a[pre][j - 1];
				}
			}
			pre ^= 1;
			now ^= 1;//交换这两行
		}
		vector<int>ret;
		for (int j = 0; j <= index; ++j) {
			ret.push_back(a[pre][j]);//因为到这时pre与now已经交换了
		}
		return ret;
	}
};

int main() {
	return 0;
}