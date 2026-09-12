// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-queues-stacks/problem?isFullScreen=true
// Problem     Day 18: Queues and Stacks
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-13, 12:00 a.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    // 1. Two instance variables
    stack<char> s;  // Stack stores characters
    queue<char> q;  // Queue stores characters

public:
    // 2. Push a character onto the stack
    void pushCharacter(char ch) {
        s.push(ch);
    }

    // 3. Enqueue a character into the queue
    void enqueueCharacter(char ch) {
        q.push(ch);
    }

    // 4. Pop and return the top character from the stack
    char popCharacter() {
        char ch = s.top();
        s.pop();
        return ch;
    }

    // 5. Dequeue and return the first character from the queue
    char dequeueCharacter() {
        char ch = q.front();
        q.pop();
        return ch;
    }
};



