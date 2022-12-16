#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PIE 3.141592653

// Find the duplicate number from a given array
int getDuplicateBruteForce(vector<int>& nums) {
	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (nums[i] == nums[j])
			{
				return nums[i];
			}
		}
	}

	return -1;
}

// We can also sort the elements, and find the side by side solution

// Improving the time complexity with space complexity
int getDuplicateSpace(vector<int>& nums) {
	unordered_set<int> st;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (st.count(nums[i]) == 1) return nums[i];
		st.insert(nums[i]);
	}

	return -1;
}

// Analyze the question more, and find key points in it
class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		// We have to do this with linked list
		int slow = 0, fast = 0;

		do {
			slow = nums[slow];
			fast = nums[nums[fast]];
		} while (nums[slow] != nums[fast]);

		// We find the intersection
		slow = 0;

		while (slow != fast) {
			slow = nums[slow];
			fast = nums[fast];
		}

		return slow;
	}
};

int main() {

	return 0;
};