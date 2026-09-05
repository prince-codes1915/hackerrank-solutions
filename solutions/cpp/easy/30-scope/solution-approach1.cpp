// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-scope/problem?isFullScreen=true
// Problem     Day 14: Scope
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-05, 11:43 p.m.
// Technique   nested-loop-brute-force
// Time        O(N^2)
// Space       O(1)
// Insight     The algorithm iterates through all possible pairs in the array to identify the maximum absolute difference by comparing each pair against the current maximum.
// Interview   Before: "I could sort the array first to find the min and max in linear time." After: "This brute-force approach uses O(N^2) time to check every pair, which is acceptable given the constraints, though sorting would reduce the complexity to O(N log N)."
// Pitfalls    (1) The nested loop approach performs redundant calculations by checking both (a, b) and (b, a) pairs.  (2) The implementation fails to optimize for the mathematical property that the maximum difference is always the difference between the global maximum and global minimum.
// ──────────────────────────────────────────────────



	// Add your code here
    Difference(vector<int> arr){ elements = arr; }
    void computeDifference()
    {
        maximumDifference = 0;
        for(int i = 0 ; i < elements.size() ; i++)
        {
            for(int j = 0 ; j < elements.size() ; j++)
            {
                int temp = abs(elements[j] - elements[i]);
                if(temp > maximumDifference)
                {
                    maximumDifference = temp ;
                }
            }
        }
    }
