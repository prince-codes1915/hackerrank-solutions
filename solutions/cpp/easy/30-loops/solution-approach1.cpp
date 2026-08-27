// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-loops/problem?isFullScreen=true
// Problem     Day 5: Loops
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-28, 03:20 a.m.
// Technique   for-loop-multiplication
// Time        O(1)
// Space       O(1)
// Insight     The implementation iterates through the integer range [1, 10] to compute and print the product of the input n and the current loop index i.
// Interview   Before: "I would use a while loop to print the multiples." After: "A for loop is more idiomatic here, providing O(1) time complexity since the loop runs exactly 10 times regardless of the input n."
// Pitfalls    (1) The loop condition i <= 10 is critical; using i < 10 would incorrectly omit the tenth multiple.  (2) The loop must start at i = 1 to satisfy the requirement that 1 <= i <= 10.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    for(int i = 1; i <= 10 ; i++)
    {
        cout << n << " x " << i <<" = " << n*i << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
