// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true
// Problem     Staircase
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-06, 02:54 a.m.
// Technique   nested-loop-printing
// Time        O(n^2)
// Space       O(1)
// Insight     The algorithm prints n lines where each line i contains n-i spaces followed by i hash symbols to achieve right-alignment.
// Interview   Before: "How do I print a right-aligned staircase?" After: "I use two nested loops per row: one for spaces (n-i) and one for hashes (i). This results in O(n^2) time complexity, which is optimal for printing n lines of length n."
// Pitfalls    (1) Incorrectly calculating the number of spaces as i instead of n-i, which would result in left-alignment.  (2) Using an incorrect loop boundary for the hash symbols, such as starting at 0 or ending at i-1, which would print the wrong number of characters per line.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1; j <= n-i ; j++)
            {
               cout << " ";
            }
            for(int k = 1; k <= i ; k++)
            {
                cout << "#";
            }
            cout << endl;
        }        
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

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
