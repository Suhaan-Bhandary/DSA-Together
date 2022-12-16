#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << " : " << x << endl;
#define MOD 1000000007

#define toDigit(a) a - '0';
#define toChar(num) '0' + num;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define PIE 3.141592653

// https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1
// Link list Node:

struct Node
{
	int data;
	struct Node* next;

	Node(int x) {
		data = x;
		next = NULL;
	}
};



// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
	if (!head || !head->next) return NULL;

	Node *slow = head, *fast = head;
	Node *slowPre = NULL;

	while (fast && fast->next) {
		slowPre = slow;
		slow = slow->next;
		fast = fast->next->next;
	}

	slowPre->next = slow->next;
	delete slow;

	return head;
}

int main() {

	return 0;
};