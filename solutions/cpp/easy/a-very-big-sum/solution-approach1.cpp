// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true
// Problem     A Very Big Sum
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-05, 04:03 p.m.
// Technique   linear-accumulation-with-long-integers
// Time        O(n)
// Space       O(n)
// Insight     The implementation iterates through the input vector once, accumulating values into a 64-bit long integer to prevent overflow during summation.
// Interview   Before: "I would use a standard integer to sum the array." After: "That would overflow given the 10^10 constraint. I used a long integer to ensure the O(n) summation correctly handles values exceeding the 32-bit range."
// Pitfalls    (1) Using a 32-bit int for the accumulator instead of a long, which causes integer overflow when elements exceed 2^31-1.  (2) Failing to account for the input constraints where individual elements can reach 10^10, requiring 64-bit storage.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(long nums : ar)
    {
        sum += nums;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ar_count_temp;
    getline(cin, ar_count_temp);

    int ar_count = stoi(ltrim(rtrim(ar_count_temp)));

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));

    vector<long> ar(ar_count);

    for (int i = 0; i < ar_count; i++) {
        long ar_item = stol(ar_temp[i]);

        ar[i] = ar_item;
    }

    long result = aVeryBigSum(ar);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
