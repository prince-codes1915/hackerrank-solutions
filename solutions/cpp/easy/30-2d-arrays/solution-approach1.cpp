// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-2d-arrays/problem?isFullScreen=true
// Problem     Day 11: 2D Arrays
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-03, 12:08 a.m.
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
