// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-recursion/problem?isFullScreen=true
// Problem     Day 9: Recursion 3  
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-31, 10:50 p.m.
// Technique   recursive-factorial-base-case
// Time        O(n)
// Space       O(n)
// Insight     The function computes the factorial of n by recursively multiplying n with the result of factorial(n-1) until the base case n < 2 is reached.
// Interview   Before: "How would you implement a factorial function using recursion?" After: "I implemented it by defining a base case for n < 2 returning 1, and a recursive step returning n * factorial(n-1), resulting in O(n) time and O(n) stack space complexity."
// Pitfalls    (1) Failing to use recursion as required by the problem statement will result in a score of zero.  (2) Naming the function anything other than factorial or Factorial violates the problem constraints and results in a score of zero.  (3) The base case n < 2 correctly handles both 0 and 1, but the implementation assumes non-negative input as per the problem context.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'factorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int factorial(int n) {
    if(n<2) return 1;
    else return n * factorial(n-1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

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
