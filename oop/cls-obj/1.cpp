#include <iostream>
using namespace std;

// Class definition
class Student
{

    // private and public

private:
    int rollNo;
    string Name;

public:
    // Function set

    void setData(int r, string n)
    {
        rollNo = r;
        Name = n;
    }

    // Function to Display()

    void Display(){
    
        cout << "Roll No :" << rollNo << endl;
        cout << "Name :" << Name << endl;
    }
};

int main()
{
    // Creact a object of class Student

    Student s1;
    
    // Calling the mambers to functions 

    s1.setData(101, "Ansh Choksi");
    // s1.setData(102, "Kavyan");
    s1.Display();

}