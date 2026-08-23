// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-23, 08:26 p.m.
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
