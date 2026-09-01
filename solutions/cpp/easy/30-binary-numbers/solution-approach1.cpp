// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=true
// Problem     Day 10: Binary Numbers
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-01, 11:18 p.m.
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
    int count = 0;
    int max_count = 0;
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            count++;
            max_count = max(max_count,count);
        }
        else
        {
            count = 0;
        }
        
        n/=2;
    }
    cout << max_count << endl;
    
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
