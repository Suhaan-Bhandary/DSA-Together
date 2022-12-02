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
	//Function is to check whether two strings are anagram of each other or not.
	bool isAnagram(string a, string b) {
		if (a.size() != b.size()) return false;

		int n = a.size();
		vector<int> freq(26, 0);

		for (int i = 0; i < n; i++) {
			freq[a[i] - 'a']++;
			freq[b[i] - 'a']--;
		}

		for (int i = 0; i < 26; ++i)
		{
			if (freq[i] != 0) return false;
		}

		return true;
	}
};

int main() {

	return 0;
};