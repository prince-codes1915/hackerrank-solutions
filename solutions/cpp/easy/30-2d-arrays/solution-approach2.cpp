// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-2d-arrays/problem?isFullScreen=true
// Problem     Day 11: 2D Arrays
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 09:10 p.m.
// Technique   nested-loop-hourglass-sum
// Time        O(1)
// Space       O(1)
// Insight     The algorithm iterates through all possible top-left corners of a 3x3 hourglass within a fixed 6x6 grid, calculating the sum for each valid configuration to determine the global maximum.
// Interview   Before: "I would iterate through the 6x6 grid and check every possible shape." After: "Since the grid size is fixed at 6x6, the solution runs in O(1) time and space by checking all 16 possible hourglass positions using nested loops constrained to indices 0 through 3."
// Pitfalls    (1) Incorrect loop bounds for the hourglass center, which must stop at index 3 to prevent accessing indices beyond the 6x6 array boundary.  (2) Initializing the maximum sum variable to zero instead of a sufficiently small value like INT_MIN, which fails if all hourglass sums are negative.  (3) Miscalculating the hourglass pattern indices by failing to account for the specific row and column offsets required for the seven elements.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }
        int sum = INT_MIN;
        for(int i = 0 ; i < 4 ; i++)
        {
            for(int j = 0; j < 4 ; j++)
            {
                int temp_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                                       + arr[i+1][j+1] +
                           arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                if(temp_sum > sum) sum = temp_sum;
            }
        }
        cout << sum;
    

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
