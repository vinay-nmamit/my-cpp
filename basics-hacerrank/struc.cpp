//simple struct program to undertsand

#include <iostream>
using namespace std;

/*struct{
    int num;
    string name;
} st;

int main() {
    st.num = 1;
    st.name = "HELLO WORLD!!";

    cout << st.num << endl;
    cout << st.name << endl;
}*/

//can add multiple values and names to struct
struct{
    int year;
    string brand;
    string model;
} mystruct1, mystruct2;

int main(){
    mystruct1.brand = "benz";
    mystruct1.model = "G-wagon";
    mystruct1.year = 2020;

    mystruct2.brand = "Honda";
    mystruct2.model = "City";
    mystruct2.year = 2021;

    cout << " " << mystruct1.brand << " " << mystruct1.model << " " << mystruct1.year << endl; 
    cout << " " << mystruct2.brand << " " << mystruct2.model << " " << mystruct2.year << endl; 
}