// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-2d-arrays/problem?isFullScreen=true
// Problem     Day 11: 2D Arrays
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-03, 12:08 a.m.
// Technique   nested-loop-hourglass-sum
// Time        O(1)
// Space       O(1)
// Insight     The algorithm iterates through all possible top-left corners of a 3x3 hourglass within a fixed 6x6 grid, calculating the sum for each of the 16 valid configurations.
// Interview   Before: "I would iterate through the 6x6 grid and check every possible 3x3 subgrid." After: "Since the grid size is fixed at 6x6, the solution runs in O(1) time and space by checking all 16 possible hourglass positions using nested loops."
// Pitfalls    (1) Incorrect loop bounds for i and j, which must stop at 4 to prevent accessing indices beyond the 6x6 array limits.  (2) Initializing the maximum sum variable to 0 instead of INT_MIN, which fails if all possible hourglass sums are negative.  (3) Miscalculating the hourglass pattern indices by failing to account for the specific row and column offsets required for the middle and bottom rows.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];

    // Input
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maximum = INT_MIN;

    // Check all 16 hourglasses
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            int sum = 0;

            // Top row
            sum += arr[i][j];
            sum += arr[i][j + 1];
            sum += arr[i][j + 2];

            // Middle
            sum += arr[i + 1][j + 1];

            // Bottom row
            sum += arr[i + 2][j];
            sum += arr[i + 2][j + 1];
            sum += arr[i + 2][j + 2];

            maximum = max(maximum, sum);
        }
    }

    cout << maximum << endl;

    return 0;
}
