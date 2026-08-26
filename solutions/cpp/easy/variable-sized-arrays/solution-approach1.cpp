// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
// Problem     Variable Sized Arrays
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-26, 11:25 p.m.
// Technique   vector-of-vectors
// Time        O(N + Q + total_elements)
// Space       O(total_elements)
// Insight     The implementation uses a vector of vectors to store variable-length integer sequences, allowing direct O(1) access to any element via nested indexing.
// Interview   Before: "I would use a 2D array with fixed dimensions." After: "Using a vector of vectors is more efficient here because it handles variable-length rows dynamically, resulting in O(N + Q + total_elements) time complexity and O(total_elements) space complexity to store the input data."
// Pitfalls    (1) Accessing indices i or j that exceed the bounds of the outer or inner vectors, violating the problem's implicit constraint that queries are valid.  (2) Confusing the number of arrays n with the number of queries q during the input reading phase.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<vector<int>>vec(n);
    int q;
    cin >> q;  
    for(int i = 0 ; i < n ; i++)
    {
        int a;
        cin >> a;
        for(int j = 0 ; j < a ; j++)
        {
            int temp;
            cin >> temp;
            vec[i].push_back(temp);
        }
        
    }
    
    for(int i = 0 ; i < q ; i++)
    {
        int a , b;
        cin >> a >> b ;
        cout << vec[a][b] << endl;
    }
    
    return 0;
}
