// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-inheritance/problem?isFullScreen=true
// Problem     Day 12: Inheritance
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 09:25 p.m.
// ──────────────────────────────────────────────────



class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName , string lastName , int id , vector<int>testScores)
        : Person(firstName , lastName , id)
        {
           this->testScores = testScores;
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int sum = 0 ;
            for(int number:testScores)
            {
                sum+=number;
            }
            int avg = sum/testScores.size();
            if(avg >= 90 && avg <= 100) return 'O';
            else if(avg >= 80 && avg <= 89) return 'E';
            else if(avg >= 70 && avg <= 79) return 'A';
            else if(avg >= 55 && avg <= 69) return 'P';
            else if(avg >= 40 && avg <= 54) return 'D';
            else return 'T';
        }
};

