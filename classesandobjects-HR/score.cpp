#include <iostream>
using namespace std;

class Student{
    private:
        int scores[5]; //array to hold 5 exam scores

    public:
    //function to read 5 integers and store then to score array
        void input(){
            for(int i = 0; i < 5; i++){
                cin >> scores[i];
            }
        } 
        //function to calculate and return the sum of student score
        int calculatetotalscore(){
            int totalscore = 0;
            for(int i = 0; i < 5; i++){   
                totalscore += scores[i];
            }
            return totalscore;
        }
};

int main() {
    int n; // Number of students
    cin >> n;

    Student students[n]; // Create an array of Student objects
    

    for (int i = 0; i < n; i++) {
        students[i].input(); // Input exam scores for each student
    }

    // Compare the marks of the first student with the rest of the students
    int firstStudentTotalScore = students[0].calculatetotalscore();
    int count = 0;

    for (int i = 1; i < n; i++) {
        int totalScore = students[i].calculatetotalscore();
        if (totalScore > firstStudentTotalScore) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}