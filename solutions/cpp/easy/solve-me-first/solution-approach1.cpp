// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/solve-me-first/problem?isFullScreen=true
// Problem     Solve Me First
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-05, 02:56 p.m.
// Technique   arithmetic-addition
// Time        O(1)
// Space       O(1)
// Insight     The function computes the sum of two integers by applying the addition operator to the provided input parameters.
// Interview   Before: "How would you implement a function to add two integers?" After: "I would return the sum of the two parameters directly, which operates in O(1) time and O(1) space, ensuring the result is returned as an integer."
// Pitfalls    (1) Integer overflow may occur if the sum of a and b exceeds the maximum value representable by the int data type.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below:
    return a + b ;
  
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
