// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-inheritance/problem?isFullScreen=true
// Problem     Day 12: Inheritance
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 09:25 p.m.
// Technique   inheritance-constructor-initialization-list
// Time        O(N)
// Space       O(N)
// Insight     The Student class utilizes an initialization list to invoke the base Person constructor while storing the test scores vector to compute the average grade via conditional logic.
// Interview   Before: "How do you pass parameters to a base class constructor in C++?" After: "You use an initialization list in the derived constructor, as shown here. The calculate method then iterates through the scores in O(N) time to determine the grade based on the specified ranges."
// Pitfalls    (1) Failing to use the member initialization list to call the base class constructor results in a compilation error.  (2) Incorrectly calculating the average by using integer division before checking the grade ranges can lead to precision issues if not handled carefully.  (3) Assuming the test scores vector is empty without checking could lead to a division by zero error in the calculate method.
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

