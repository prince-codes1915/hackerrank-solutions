// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
// Problem     Variable Sized Arrays
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-26, 11:25 p.m.
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
