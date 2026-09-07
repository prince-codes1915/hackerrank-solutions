// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem?isFullScreen=true
// Problem     Day 16: Exceptions - String to Integer
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-07, 11:28 p.m.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
   try {
        int num = stoi(S);
        cout << num << endl;
    } catch (invalid_argument& e) {
        cout << "Bad String" << endl;
    } catch (out_of_range& e) {
        cout << "Bad String" << endl;
    } ;

    return 0;
}
