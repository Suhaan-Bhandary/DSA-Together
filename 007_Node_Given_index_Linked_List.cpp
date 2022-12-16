#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PIE 3.141592653

// Print he nth node in the linked list Node is defined as
// Link list node
struct node
{
	int data;
	struct node* next;

	node(int x) {
		data = x;
		next = NULL;
	}
};


// Should return data of node at given index. The function may
// assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index) {
	int count = 1;

	while (head && count != index) {
		count++;
		head = head->next;
	}

	return (count == index) ? head->data : -1;
}


int main() {

	return 0;
};