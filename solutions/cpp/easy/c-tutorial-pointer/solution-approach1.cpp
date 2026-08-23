// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-23, 08:30 p.m.
// Technique   pointer-dereference-arithmetic
// Time        O(1)
// Space       O(1)
// Insight     The function calculates the sum and absolute difference of two integers by dereferencing their pointers and updating the original memory locations directly.
// Interview   Before: "How do I modify variables in a function without returning values?" After: "By passing pointers, we can modify the original memory addresses directly in O(1) time, ensuring the sum and absolute difference are stored correctly even when the inputs are equal."
// Pitfalls    (1) Failing to store the sum in a temporary variable before updating *a, which would cause the subsequent absolute difference calculation to use the incorrect sum value.  (2) Neglecting to use the absolute difference logic, which requires checking which value is larger to avoid negative results.
// ──────────────────────────────────────────────────

#include <stdio.h>

void update(int *a,int *b) {
    int add =  *a + *b ;
    if(*a > *b) *b = *a - *b;
    else  *b = *b - *a;
    *a = add ;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
