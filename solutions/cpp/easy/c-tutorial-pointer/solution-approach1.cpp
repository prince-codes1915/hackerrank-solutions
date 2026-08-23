// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-23, 08:30 p.m.
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
