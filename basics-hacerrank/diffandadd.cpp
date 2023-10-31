#include <iostream>
using namespace std;
void diffandadd(const int *a, const int *b);

void diffandadd(const int *a, const int *b){
    int sub = abs(*a - *b);
    int add = abs(*a)  + abs(*b);
    cout << add << endl;
    cout << sub << endl;
   
}

int main(){
    int a , b;
    cin >> a >> b;

    diffandadd(&a, &b);
}