// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=true
// Problem     Day 8: Dictionaries and Maps
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-30, 10:55 p.m.
// Technique   std-map-lookup
// Time        O(N log N + Q log N)
// Space       O(N)
// Insight     The implementation utilizes a balanced binary search tree to store name-number pairs, enabling logarithmic time complexity for both insertion and retrieval operations.
// Interview   Before: "How would you store and query phone book entries efficiently?" After: "I used a std::map to achieve O(N log N) insertion and O(Q log N) lookup time, ensuring that each query is handled in logarithmic time relative to the number of entries N."
// Pitfalls    (1) Failing to handle the unknown number of queries correctly by relying on cin >> name to terminate the loop.  (2) Assuming O(1) average time complexity for map operations, which is incorrect for std::map as it is implemented as a balanced BST.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    //cin.ignore();
    map<string, string> phoneBook;
    for(int i = 0; i < n ; i++)
    {
        string temp, number;
        cin >> temp >> number;
        phoneBook[temp] = number;
    }
    string name;
    while( cin >> name)
    {
        if(phoneBook.find(name) != phoneBook.end()){
            cout << name << "=" << phoneBook[name] << endl;
        }
        else cout << "Not found" << endl;

    }
       
    return 0;
}
