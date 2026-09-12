// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-queues-stacks/problem?isFullScreen=true
// Problem     Day 18: Queues and Stacks
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-13, 12:00 a.m.
// Technique   stack-and-queue-wrapper
// Time        O(n)
// Space       O(n)
// Insight     The implementation uses a stack to reverse the character order and a queue to preserve the original order, allowing for a direct comparison of the sequence against its reverse.
// Interview   Before: "How would you verify if a string is a palindrome using data structures?" After: "By pushing characters into a stack and enqueuing them into a queue, we can compare the LIFO and FIFO outputs in O(n) time and O(n) space to determine if the string reads the same forwards and backwards."
// Pitfalls    (1) Confusing the LIFO behavior of the stack with the FIFO behavior of the queue during the comparison phase.  (2) Failing to account for the O(n) space complexity required to store all characters in both containers simultaneously.
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



