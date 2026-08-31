// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
// Problem     Strings
// Difficulty  Easy
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-01, 12:38 a.m.
// Technique   string-manipulation-and-swap
// Time        O(N + M)
// Space       O(N + M)
// Insight     The program utilizes standard string concatenation and the swap function to modify the first characters of two strings in-place.
// Interview   Before: "How do you swap characters in C++ strings?" After: "You can use the std::swap function on specific indices. This approach runs in O(N + M) time, where N and M are the lengths of the strings, as it involves reading input and performing a constant-time character swap."
// Pitfalls    (1) Accessing index 0 of an empty string causes undefined behavior.  (2) Using cin >> string stops reading at whitespace, which may fail if the input contains spaces.
// ──────────────────────────────────────────────────

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a , b;
    cin >> a >> b ;
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    swap(a[0] , b[0]);
    cout << a << " " << b << endl;
    return 0;
}
