// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=true
// Problem     Day 8: Dictionaries and Maps
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-30, 10:55 p.m.
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
