#include <iostream>
using namespace std;

class Rectangle {
    int wigth;
    int height;
public:
    void set_values(int, int);
    int area(){
        return wigth*height;
    };
};

void Rectangle::set_values(int a, int b){
    wigth = a;
    height = b;
}
int main (){
    Rectangle rectangle;
    rectangle.set_values(9, 12);
    cout << "Area: " << rectangle.area();

    return 0;
}
