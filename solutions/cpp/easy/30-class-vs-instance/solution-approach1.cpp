// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-class-vs-instance/problem?isFullScreen=true
// Problem     Day 4: Class vs. Instance
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-28, 03:18 a.m.
// Technique   class-instance-state-management
// Time        O(1)
// Space       O(1)
// Insight     The class maintains an internal state variable that is validated upon initialization and updated through specific instance methods to determine the age category.
// Interview   Before: "How do I handle invalid input in a constructor?" After: "The constructor validates the input, setting the age to 0 if negative, ensuring O(1) time complexity for all operations including state updates and conditional checks."
// Pitfalls    (1) Failing to print the exact required string 'Age is not valid, setting age to 0.' when the initial age is negative.  (2) Incorrectly implementing the age boundaries, specifically using < 13 for young and 13 to 17 for teenager as defined in the problem.  (3) Forgetting to increment the age variable by exactly 1 in the yearPasses method.
// ──────────────────────────────────────────────────



class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if(initialAge < 0){
            age = 0 ;
            cout << "Age is not valid, setting age to 0." << endl;;
        }
        else if(age >= 0 ) age = initialAge;

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if(age < 13) cout << "You are young." << endl;
        else if(age >= 13 && age < 18) cout << "You are a teenager." << endl;
        else cout << "You are old." << endl;
    }

    void Person::yearPasses(){
       ++age;

    }

