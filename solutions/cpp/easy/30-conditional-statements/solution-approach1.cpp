// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-conditional-statements/problem?isFullScreen=true
// Problem     Day 3: Intro to Conditional Statements
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-26, 05:22 p.m.
// Technique   conditional-branching-logic
// Time        O(1)
// Space       O(1)
// Insight     The logic partitions integers into odd numbers, which are always weird, and even numbers, which are categorized based on their inclusion within specific numerical ranges.
// Interview   Before: "I would use a series of if-else statements to check the parity and range of N." After: "I implemented the logic using nested conditionals to achieve O(1) time complexity, ensuring that even numbers are correctly categorized into the specified ranges of 2-5, 6-20, and greater than 20."
// Pitfalls    (1) Failing to account for the inclusive range of 2 to 5 and 6 to 20 as defined in the problem statement.  (2) Incorrectly handling the parity check for even numbers, which leads to misclassifying odd numbers as not weird.  (3) Overlooking the requirement that even numbers greater than 20 must be printed as Not Weird.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    if(N % 2 == 0 )
    {
        if((N>=2 && N<=5) || N > 20) cout << "Not Weird" << endl;
        else if(N>= 6 && N <= 20) cout << "Weird" << endl ;
        //else if(N > 20) cout << "Not Weird" << endl ;
    }
    else cout<<"Weird" <<endl ;

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
