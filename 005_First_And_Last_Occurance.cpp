#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PIE 3.141592653

vector<int> find(int arr[], int n , int x )
{
	int first = -1, last = -1;

	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			if (first == -1) first = i;
			last = i;
		}
	}

	return {first, last};
}

int main() {

	return 0;
};