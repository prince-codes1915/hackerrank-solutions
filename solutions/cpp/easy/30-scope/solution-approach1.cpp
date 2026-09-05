// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-scope/problem?isFullScreen=true
// Problem     Day 14: Scope
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-05, 11:43 p.m.
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
