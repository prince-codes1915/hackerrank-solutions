// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-review-loop/problem?isFullScreen=true
// Problem     Day 6: Let's Review
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-28, 10:46 p.m.
// Technique   string-index-parity-partitioning
// Time        O(T * N)
// Space       O(T * N)
// Insight     The algorithm iterates through each string once, partitioning characters into two separate buffers based on the parity of their index.
// Interview   Before: "How would you separate characters by index parity?" After: "I iterate through the string and use the modulo operator to check index parity, resulting in O(N) time complexity per string of length N, where N is the string length."
// Pitfalls    (1) Failing to handle the newline character after reading the integer T, which causes getline to read an empty string.  (2) Assuming the string contains no spaces, which would break the input reading logic if using cin instead of getline.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    cin.ignore();
    vector<string> strs;
    for(int i = 0 ; i < t ; i++)
    {
        string temp;
        getline(cin , temp);
        strs.push_back(temp);
        
    } 
    
    for(int i = 0 ; i < t ; i++)
    {
        string evenTemp;
        string oddTemp;
        for(int j = 0 ; j < strs[i].length() ; j++)
        {
            
            if(j == 0 || j % 2 == 0)
            {
                
                evenTemp.push_back(strs[i][j]);
            }
            else 
            {
                oddTemp.push_back(strs[i][j]); 
            }
        }
        
        cout << evenTemp << " " << oddTemp << endl;
        
    }
    return 0;
}
