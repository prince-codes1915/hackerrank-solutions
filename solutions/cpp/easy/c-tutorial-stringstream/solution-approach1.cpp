// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
// Problem     StringStream
// Difficulty  Easy
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-29, 02:21 a.m.
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
