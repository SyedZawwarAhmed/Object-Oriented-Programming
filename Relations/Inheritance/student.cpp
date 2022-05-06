// #include<iostream>
// #include<string>
// using namespace std;

// Class Student{
//     private:
//     string seatno;
//     string name;
//     string department;


// };
// Inheritance
#include <iostream>

using namespace std;

class University
{
public:
    string Name;
    string Seat_no;

    University(string name, string seat_no){
        this->Name = name;
        this->Seat_no = seat_no;
    }

};

class Student : University
{
public:
    Student(string name, string Seat_no):University(name,Seat_no){}
    
    void display()
    {
        cout<< "Name : " << this->Name << endl;
        cout<< "Seat Number : " << this->Seat_no << endl;
    }
};

int main()
{
    Student std("Muhammad Ahsan","B20102075");
    std.display();
    
}
