#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
    private:
    int count;
    vector<string> courses;
    public:
    Student() {
        this->courses = {"BSCS 301"};
        this->count = 1;
    }

    Student(vector<string> courses, int count) {
        this->courses = courses;
        this->count = count;
    }

    Student (const Student &other_obj) {
        this->courses = other_obj.courses;
        this->count = other_obj.count;
    }

    void addCourse(string course) {
        this->courses.push_back(course);
    }

    string getCourse(int index) {
        return this->courses[index];
    }

    friend ostream& operator<<(ostream& os, const Student& v) {
        string newString = "";
        for (int i=  0; i<v.courses.size(); i++) {
            newString += v.courses[i] + " ";
        }
        os << "courses: " << newString << "\n" << " count:- " << v.count << endl ;
        return os;
    }

};

int main() {
    Student Salman;
    Student Akbar(Salman);

    Salman.addCourse("BSCS 413");
    cout << Akbar.getCourse(0);

    Akbar = Salman;

    cout << Akbar;
    cout << Salman;
    
    return 0;
}