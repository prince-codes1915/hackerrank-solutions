// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-more-exceptions/problem?isFullScreen=true
// Problem     Day 17: More Exceptions
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-09, 09:11 p.m.
// ──────────────────────────────────────────────────



//Write your code here
class Calculator
{
public:
    int power(int n, int p)
    {
        if(n < 0 || p < 0)
        {
            throw runtime_error("n and p should be non-negative");
        }

        int result = 1;

        for(int i = 0; i < p; i++)
        {
            result *= n;
        }

        return result;
    }
};


