// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-inheritance/problem?isFullScreen=true
// Problem     Day 12: Inheritance
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 02:48 a.m.
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

