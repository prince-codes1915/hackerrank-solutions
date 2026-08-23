// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Problem     Arrays Introduction
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-23, 08:58 p.m.
// Technique   stack-allocated-array-reverse-iteration
// Time        O(N)
// Space       O(N)
// Insight     The implementation utilizes a variable-length array to store input integers and iterates backward from the last index to the first to print them in reverse order.
// Interview   Before: "I would use a vector to store the input." After: "Since the size N is known at runtime, I used a stack-allocated array to store the elements, achieving O(N) time and O(N) space complexity by iterating from N-1 down to 0."
// Pitfalls    (1) Accessing arr[n] results in undefined behavior because valid indices are 0 to n-1.  (2) Using a variable-length array is a non-standard C++ extension that may not be supported by all compilers.  (3) The loop condition j >= 0 is critical to ensure the first element at index 0 is included in the output.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int j = n - 1 ; j >= 0 ; j--) 
    {
        cout << arr[j] << " " ;
    }
    return 0;
}
