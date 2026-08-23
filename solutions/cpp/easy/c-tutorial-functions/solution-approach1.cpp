// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-23, 08:26 p.m.
// Technique   array-linear-scan
// Time        O(1)
// Space       O(1)
// Insight     The function initializes a local array with the four input integers and performs a linear scan to identify the maximum value.
// Interview   Before: "I could use nested if-else statements to compare the four integers." After: "I used an array and a loop to find the maximum, which maintains O(1) time and space complexity regardless of the input values."
// Pitfalls    (1) Initializing the max variable to zero instead of the first array element, which fails if all input integers are negative.  (2) Using an incorrect loop bound that skips the final element of the array.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int arr[4] = {a , b , c , d} ;
    int max = arr[0];
    for(int i = 0 ; i < 4 ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
