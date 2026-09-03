// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-inheritance/problem?isFullScreen=true
// Problem     Day 12: Inheritance
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 02:48 a.m.
// Technique   class-inheritance-member-initialization
// Time        O(N)
// Space       O(N)
// Insight     The derived class constructor invokes the base class constructor via an initializer list while storing the test scores vector to compute the average grade based on predefined thresholds.
// Interview   Before: "How do I pass parameters to a base class constructor in C++?" After: "You use an initializer list in the derived class constructor. This implementation runs in O(N) time, where N is the number of test scores, to calculate the average and return the corresponding grade character."
// Pitfalls    (1) Failing to use the member initializer list to call the base class constructor results in a compilation error.  (2) Integer division in the average calculation truncates the result, which is acceptable here as the thresholds are integers.  (3) Assuming the test scores vector is empty without checking could lead to division by zero if the input constraints allowed zero scores.
// ──────────────────────────────────────────────────



class Student : public Person {
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int id, vector<int> scores)
        : Person(firstName, lastName, id)
    {
        testScores = scores;
    }

    char calculate()
    {
        int sum = 0;

        for (int score : testScores)
        {
            sum += score;
        }

        int average = sum / testScores.size();

        if (average >= 90)
            return 'O';
        else if (average >= 80)
            return 'E';
        else if (average >= 70)
            return 'A';
        else if (average >= 55)
            return 'P';
        else if (average >= 40)
            return 'D';
        else
            return 'T';
    }
};

