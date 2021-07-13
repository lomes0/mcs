// C++ program without declaring the
// move constructor
#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;
 
// Move Class
class Move {
 
public:
    int* data;
    // Constructor
    Move(int d)
    {
        // Declare object in the heap
        data = new int;
        *data = d;
 
        cout << "Constructor is called for "
             << d << endl;
    };

    Move(std::initializer_list<Move>& a) {

            cout << "here 2" << endl;
    }
 
    // Copy Constructor to delegated
    // Copy constructor
    Move(const Move& source)
        : Move{ *source.data }
    {
 
        // Copying constructor copying
        // the data by making deep copy
        cout << "Copy Constructor is called - "
             << "Deep copy for "
             << *source.data
             << endl;
    }

    Move() {
            cout << "here empty constructor " << endl;
            data = new int;
    }

    void operator()() {
    }

    Move(Move&& m){
            cout << "here 2" << endl;
    }
 
    // Destructor
    ~Move()
    {
        cout << "Desturctor is called: " << *data << endl;
        delete data;
    }
};
 
// Driver Code
int main()
{
    // Create vector of Move Class
    //Move a{ move(Move{ 10 }) };
    
        Move{ 20 };     //tmp variable constructor then destructor
        Move a();         //call Move()
        printf("%d\n", &a);
 

        // delete null pointer
        return 0;
}
