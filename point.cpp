#include <iostream>
using namespace std;
class point {
    private:
    int x;
    int y;
    public:
    point() : x{0}, y{0} {
        cout<<"default constructor called"<<endl;
    }
    point(int a, int b) : x{a}, y{b} {
        cout<<"parameterized constructor called"<<endl;
    }
    void show() {
        cout<<x<<","<<y<<endl;
    }
    void add(point &p1, point &p2) {
        x = p1.x + p2.x;
        y = p1.y + p2.y;
    }
    point add1(point q) {
        point r;
        r.x = x + q.x;
        r.y = y + q.y;
        return r;
    }
    point addeasy(point q) {
        return point(x+q.x,y+q.y);//nameless object creation
    }
};
int main() {
point x(5,10) , y(20,50);
x.show();
y.show();
point r = x.add1(y);
point s = x.addeasy(y);
s.show();
r.show();
r.add(x,y);
r.show();
return 0;   
}