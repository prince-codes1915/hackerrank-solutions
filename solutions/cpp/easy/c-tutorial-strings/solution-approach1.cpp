// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
// Problem     Strings
// Difficulty  Easy
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-01, 12:38 a.m.
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
