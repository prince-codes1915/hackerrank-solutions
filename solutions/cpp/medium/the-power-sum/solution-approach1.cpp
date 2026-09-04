// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/the-power-sum/problem?isFullScreen=true
// Problem     The Power Sum
// Difficulty  Medium
// Subdomain   Recursion
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 11:48 p.m.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

int powerSum(int X, int N, int i = 1)
{
    if (X == 0)
        return 1;

    if (X < 0 || pow(i, N) > X)
        return 0;

    return powerSum(X - pow(i, N), N, i + 1)
         + powerSum(X, N, i + 1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

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
