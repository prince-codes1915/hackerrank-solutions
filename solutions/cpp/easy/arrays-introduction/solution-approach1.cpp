// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Problem     Arrays Introduction
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-23, 08:58 p.m.
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
