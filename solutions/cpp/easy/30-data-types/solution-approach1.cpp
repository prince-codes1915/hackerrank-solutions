// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-data-types/problem?isFullScreen=true
// Problem     Day 1: Data Types
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-24, 01:40 a.m.
// Technique   standard-io-manipulation
// Time        O(1)
// Space       O(1)
// Insight     The implementation reads three distinct data types from standard input and performs arithmetic or concatenation operations using pre-declared variables.
// Interview   Before: "How do you handle mixed input types in C++?" After: "I use cin for primitive types and getline for strings, ensuring cin.ignore() clears the buffer after the double input. This approach runs in O(1) time and correctly handles the required precision formatting."
// Pitfalls    (1) Failing to use cin.ignore() after reading the double causes getline to consume the trailing newline character instead of the intended string input.  (2) Omitting fixed and setprecision(1) results in incorrect output formatting for the double sum, violating the problem's decimal scale requirement.
// ──────────────────────────────────────────────────



    int a ; double b ;  string c ;
    cin >> a ;
    cin >> b ;
    cin.ignore();
    getline(cin , c);
    cout << i + a << endl;
    cout <<fixed << setprecision(1) << d + b << endl;
    cout << s+c << endl;

