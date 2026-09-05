// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true
// Problem     Mini-Max Sum
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-06, 03:24 a.m.
// Technique   nested-loop-summation
// Time        O(n^2)
// Space       O(1)
// Insight     The algorithm calculates the sum of all elements excluding one index at a time, tracking the global minimum and maximum of these partial sums.
// Interview   Before: "I could sort the array and sum the first four and last four elements." After: "This O(n^2) approach iterates through each element to exclude it, ensuring we handle the 64-bit integer requirement to avoid overflow when summing four elements."
// Pitfalls    (1) Failing to use a 64-bit integer type for the sum variable, which causes overflow given the problem constraints.  (2) Initializing the minimum sum variable to zero instead of a sufficiently large value like LLONG_MAX, leading to incorrect minimum results.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    long max = 0;
    long min = LLONG_MAX;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        long temp = 0;
        for(int j = 0; j < arr.size() ; j++)
        {
            if(j==i) continue;
            else{
                temp += arr[j];
            }
        }
        if(temp > max)
        {
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
        }
        
    }
    cout << min << " " << max << endl;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

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
