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
        os << "courses: " << newString << "," << " count:- " << v.count ;
        return os;
    }

};

int main() {
    // Student Salman;
    Student Salman({"CS", "LA", "Urdu"}, 3);
    // Student Akbar(Salman);
    Student Akbar = Salman;

    Salman.addCourse("BSCS 413");
    Akbar.addCourse("BSCS 409");
    // cout << Akbar.getCourse(0);


    cout << Akbar;
    // cout << Salman;

    

    return 0;
}