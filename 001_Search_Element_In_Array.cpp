// Problem Name: Search an Element in an array
// Problem Link: https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&curated[]=8&sortBy=submissions

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
    int search(int arr[], int N, int X)
    {
        // Looping through the array
        // if a match is found return the index
        for (int i = 0; i < N; i++) {
            if (arr[i] == X) return i;
        }

        return -1;
    }
};

int main() {

    return 0;
};