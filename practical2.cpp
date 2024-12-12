#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    string studentClass;
    string dateOfBirth;

public:
    // Default constructor
    Student() : name(""), rollNumber(0), studentClass(""), dateOfBirth("") {}

    // Parameterized constructor
    Student(string n, int r, string sClass, string dob) 
        : name(n), rollNumber(r), studentClass(sClass), dateOfBirth(dob) {}

    // Destructor
    ~Student() {}

    // Function to display student information
    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
    }

    // Function to update student information
    void updateStudentInfo(string n, int r, string sClass, string dob) {
        name = n;
        rollNumber = r;
        studentClass = sClass;
        dateOfBirth = dob;
    }
};

int main() {
    // Create a student object using the parameterized constructor
    Student* student1 = new Student("John Doe", 101, "12th Grade", "01-01-2005");

    // Display student information
    student1->displayStudentInfo();

    // Update student information
    student1->updateStudentInfo("Jane Doe", 102, "10th Grade", "02-02-2006");

    // Display updated student information
    cout << "\nUpdated Student Info:\n";
    student1->displayStudentInfo();

    // Free the dynamically allocated memory
    delete student1;

    return 0;
}
