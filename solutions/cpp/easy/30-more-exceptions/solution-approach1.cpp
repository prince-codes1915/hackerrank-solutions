// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-more-exceptions/problem?isFullScreen=true
// Problem     Day 17: More Exceptions
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-09, 09:11 p.m.
// Technique   exception-throwing-power-calculation
// Time        O(p)
// Space       O(1)
// Insight     The calculator validates input constraints by throwing a runtime_error if either parameter is negative, otherwise it computes the power iteratively.
// Interview   Before: "How would you handle invalid inputs in a class method?" After: "I use a guard clause to throw a runtime_error for negative inputs, ensuring O(p) time complexity for valid cases while maintaining robust error propagation."
// Pitfalls    (1) Failing to throw the exact string message 'n and p should be non-negative' as required by the problem statement.  (2) Incorrectly handling the power of zero, which should return 1 based on the iterative loop logic.  (3) Using an incorrect exception type instead of runtime_error, which may not be caught by the provided test harness.
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


