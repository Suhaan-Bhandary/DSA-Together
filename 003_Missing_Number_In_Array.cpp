#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PIE 3.141592653

class Solution {
public:
	int MissingNumber(vector<int>& array, int n) {
		long long sum = (long long)n * (n + 1) / 2;

		int total = 0;
		for (auto num : array) total += num;

		return sum - total;
	}
};


int main() {

	return 0;
};