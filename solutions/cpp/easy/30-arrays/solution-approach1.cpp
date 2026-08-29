// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-arrays/problem?isFullScreen=true
// Problem     Day 7: Arrays
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-29, 10:57 p.m.
// Technique   reverse-index-iteration
// Time        O(N)
// Space       O(N)
// Insight     The implementation stores input integers in a vector and iterates from the last index down to zero to print elements in reverse order.
// Interview   Before: "I would use a stack to reverse the array." After: "Since we know the size N, we can store elements in a vector and iterate backwards in O(N) time and O(N) space, which is efficient for the given constraints."
// Pitfalls    (1) The loop condition i >= 0 is critical; using i > 0 would incorrectly omit the first element of the array.  (2) The code performs redundant input reading by first parsing a string vector and then overwriting it with cin, which may cause issues if the input stream is exhausted.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



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
    
    for(int i = 0 ; i < n ; i++)
    {
       cin>>arr[i];
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        cout << arr[i] << " " ;
    }


    
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
