// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/30-abstract-classes/problem?isFullScreen=true
// Problem     Day 13: Abstract Classes
// Difficulty  Easy
// Subdomain   30 Days of Code
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-04, 11:25 p.m.
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

