#include <iostream>
#include <vector>

using namespace std;

class University
{
public:
    string Name;
    string Seat_no;
    vector<string> department;

    // University () {
        
    // }

    University(string name, string seat_no){
        this->Name = name;
        this->Seat_no = seat_no;
    }

    
    friend ostream& operator<<(ostream& os, vector<string> department) {
        string newString = "";
        for (int i=  0; i<department.size(); i++) {
            newString += department[i] + " ";
        }
        os << "courses: " << newString << endl ;
        return os;
    }
    void add_depart(string title)
    {
        this->department.push_back(title);
        // cout << department<< endl;
    }

};


class department
{
public:
    void displaydepartment()
    {
        uni.add_depart("BSCS");
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
    // std.display();
    department_name dp;
    dp.displaydepartment();
    return 0;
}