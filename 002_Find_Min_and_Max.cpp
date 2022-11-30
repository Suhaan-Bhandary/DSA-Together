#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PIE 3.141592653

pair<long long, long long> getMinMax(long long a[], int n) {
	long long minElement = a[0], maxElement = a[0];

	for (int i = 0; i < n; i++) {
		minElement = min(a[i], minElement);
		maxElement = max(a[i], maxElement);
	}

	return {minElement, maxElement};
}

int main() {

	return 0;
};