// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-class-vs-instance/problem?isFullScreen=true
// Problem     Day 4: Class vs. Instance
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-28, 03:18 a.m.
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

