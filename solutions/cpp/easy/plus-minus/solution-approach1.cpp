// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true
// Problem     Plus Minus
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-05, 04:58 p.m.
// Technique   linear-scan-counter
// Time        O(n)
// Space       O(n)
// Insight     The algorithm maintains three separate counters to track the frequency of positive, negative, and zero integers, then calculates their respective ratios by dividing each count by the total array size.
// Interview   Before: "How would you calculate the proportions of different number types in an array?" After: "I would iterate through the array once to count occurrences, then divide by the total size. This approach runs in O(n) time and O(n) space, ensuring precision by casting to double before division."
// Pitfalls    (1) Failure to cast the integer count to double before division results in integer division, which truncates the ratio to zero.  (2) Omitting the fixed and setprecision(6) manipulators causes the output to fail the required six-decimal-place formatting constraint.  (3) Assuming the array size is always greater than zero without considering potential division by zero if the input array is empty.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    int size = arr.size();
    int p = 0 , z = 0 , n = 0;
    for(int nums : arr)
    {
        if(nums > 0) p++;
        else if(nums == 0) z++;
        else n++;
    }
    cout << fixed << setprecision(6);
    cout << static_cast<double>(p)/size << endl;
    cout << static_cast<double>(n)/size << endl;
    cout << static_cast<double>(z)/size << endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

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
