// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-abstract-classes/problem?isFullScreen=true
// Problem     Day 13: Abstract Classes
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 11:25 p.m.
// Technique   inheritance-abstract-class-implementation
// Time        O(1)
// Space       O(1)
// Insight     The MyBook class extends the abstract Book class by providing a concrete implementation of the display method and initializing the additional price member variable through a parameterized constructor.
// Interview   Before: "How do I implement an abstract class in C++?" After: "You inherit from the base class and provide a concrete implementation for all pure virtual functions. This implementation runs in O(1) time and space, ensuring the derived class satisfies the interface requirements defined by the base class."
// Pitfalls    (1) Failing to include the required access modifier for the display method, which must be public to be called by the base class pointer.  (2) Omitting the base class constructor call in the initializer list, which prevents the title and author members from being correctly initialized.  (3) Adding an access modifier to the MyBook class declaration itself, which violates the problem constraint requiring no access modifier for the class definition.
// ──────────────────────────────────────────────────



// Write your MyBook class here
    class MyBook : public Book{
        
    int price;
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    public:
    MyBook(string title , string author , int price) : Book(title , author)
    {
        this->price = price;
    }
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: "<< author<< endl;
        cout << "Price: "<< price<< endl; 
    }
    
// End class
    };

