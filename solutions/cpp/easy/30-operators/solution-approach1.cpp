// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-operators/problem?isFullScreen=true
// Problem     Day 2: Operators
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-25, 12:51 a.m.
// Technique   floating-point-arithmetic-rounding
// Time        O(1)
// Space       O(1)
// Insight     The implementation calculates the total cost by applying percentage multipliers to the meal cost and uses the standard round function to determine the nearest integer.
// Interview   Before: "How do I handle the rounding requirement for the total cost?" After: "Use the round function on the sum of the meal cost, tip, and tax, which results in O(1) time and space complexity."
// Pitfalls    (1) Using integer division instead of floating-point division for percentages leads to precision loss.  (2) Failing to use 100.0 as a divisor causes the compiler to perform integer division, truncating the tip and tax values prematurely.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {
        double total = meal_cost + (meal_cost * tip_percent / 100.0) + (meal_cost * tax_percent / 100.0) ;
        cout << round(total)<< endl ; 
}

int main()
{
    string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

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
