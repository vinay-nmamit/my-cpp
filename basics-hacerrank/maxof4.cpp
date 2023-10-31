#include <iostream>
using namespace std;
int maxof4(int a, int b, int c, int d);

int maxof4(int a, int b, int c, int d){
    if(a > b && a > c && a > d)
        return a;
    else if(b > a && b > c && b > d)
        return b;
    else if(c > a && c > b && c > d)
        return c;
    else 
        return d;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = maxof4(a,b,c,d);
    cout << res << endl;
}