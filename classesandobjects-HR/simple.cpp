#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Constructor to initialize the object
    Student() {
        age = 0;
        first_name = "";
        last_name = "";
        standard = 0;
    }

    // Setter and getter functions for age
    void set_age(int a) {
        age = a;
    }

    int get_age() {
        return age;
    }

    // Setter and getter functions for first name
    void set_first_name(const string& name) {
        first_name = name;
    }

    string get_first_name() {
        return first_name;
    }

    // Setter and getter functions for last name
    void set_last_name(const string& name) {
        last_name = name;
    }

    string get_last_name() {
        return last_name;
    }

    // Setter and getter functions for standard
    void set_standard(int s) {
        standard = s;
    }

    int get_standard() {
        return standard;
    }

    // Method to get the student details as a string
    string to_string() {
        stringstream ss;
        ss << age << endl;
        ss << last_name << "," << first_name << endl;
        ss << standard << "\n\n";
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    Student student;
    int age, standard;
    string first_name, last_name;

    // Input
    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;

    // Set student attributes
    student.set_age(age);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    student.set_standard(standard);

    // Output student details
    cout << student.to_string() << endl;

    return 0;
}
