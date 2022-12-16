#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PIE 3.141592653

class Solution
{
public:
	void sort012(int a[], int n)
	{
		// How to do it in one pass
		int low = 0, high = n - 1;
		int i = 0;

		while (i < n && i <= high) {
			if (a[i] == 0) {
				swap(a[i], a[low]);
				low++;
				i++;
			} else if (a[i] == 2) {
				swap(a[i], a[high]);
				high--;
			} else {
				i++;
			}
		}
	}
};


int main() {

	return 0;
};