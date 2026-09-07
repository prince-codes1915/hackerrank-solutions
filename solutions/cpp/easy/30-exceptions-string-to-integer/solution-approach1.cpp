// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem?isFullScreen=true
// Problem     Day 16: Exceptions - String to Integer
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-07, 11:28 p.m.
// Technique   try-catch-stoi-exception-handling
// Time        O(N)
// Space       O(N)
// Insight     The implementation leverages the standard library's stoi function to attempt integer conversion, catching specific exceptions to handle non-numeric input strings gracefully.
// Interview   Before: "I would manually iterate through the string to check if every character is a digit." After: "Using stoi with exception handling is more idiomatic in C++ for O(N) parsing, as it automatically manages both invalid_argument and out_of_range cases for any string length N."
// Pitfalls    (1) Failing to catch both invalid_argument and out_of_range exceptions can lead to runtime crashes on extremely large numeric strings.  (2) Attempting to implement manual character validation instead of using built-in exception handling violates the problem's specific constraint to use language-native constructs.
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
