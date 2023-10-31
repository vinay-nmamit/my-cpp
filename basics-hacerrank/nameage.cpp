#include <iostream>
#include <string>
using namespace std;

// Define a struct for student information
struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student student;

    // Read and store student information
    cin >> student.age;
    cin >> student.first_name;
    cin >> student.last_name;
    cin >> student.standard;

    // Output the information
    cout <<  student.age << " " << student.first_name << " " << student.last_name << " " << student.standard << endl;
    return 0;
}
