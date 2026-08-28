// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
// Problem     StringStream
// Difficulty  Easy
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-29, 02:21 a.m.
// Technique   stringstream-extraction-loop
// Time        O(N)
// Space       O(N)
// Insight     The implementation uses a stringstream to extract integers sequentially while consuming the intervening comma characters via a temporary char variable until the stream is exhausted.
// Interview   Before: "I would split the string by commas manually." After: "Using stringstream is more idiomatic in C++ for parsing formatted data. It runs in O(N) time where N is the string length, effectively handling the comma delimiters by extracting them into a dummy character variable during each iteration."
// Pitfalls    (1) Failing to account for the final integer which is not followed by a comma, potentially causing the stream state to fail prematurely.  (2) Assuming the input string contains only valid integers and commas, as the stream extraction operator will fail on unexpected characters.
// ──────────────────────────────────────────────────

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char ch;
    int num;
    vector<int> result;
    while(ss >> num)
    {
        result.push_back(num);
        ss>>ch;
    }
    
    /*
    while(getline(ss , temp , ','))
    {
    result.push_back(stoi(temp)); //temp--> temporary string
    }
    */
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
