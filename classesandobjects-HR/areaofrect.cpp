#include <iostream>
using namespace std;

class Rectangle{
protected:
        int height;
        int width;
public:
        Rectangle(int w, int h) : width(w), height(h) {}

         void display(){
         cout << width << height << endl;
         }
};

class Rectanglearea : public Rectangle{
    public:
        Rectanglearea(int w, int h) : Rectangle(w,h) {}

    void read_input(){
        cin >> width;
        cin >> height;
    }

    void display(){
        int area = width * height;
        cout << width << " " << height << endl;
        cout << area << endl;
    }
};  

int main(){
    Rectanglearea rect(0,0);
    rect.read_input();
    rect.display();

    return 0;
}