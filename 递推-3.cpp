#include<iostream>
#include<vector>
using namespace std;

//

class Solution {
public:
	vector<int> getRow(int index) {
		int a[44][44];
		for (int i = 0; i <= index; ++i) {
			for (int j = 0; j <= i; ++j) {
				if (j == 0 || j == i) {
					a[i][j] = 1;
				}
				else {
					a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
				}
			}
		}
		vector<int>ret;
		for (int j = 0; j <= index; ++j) {
			ret.push_back(a[index][j]);
		}
		return ret;
	}
};

int main() {
	return 0;
}