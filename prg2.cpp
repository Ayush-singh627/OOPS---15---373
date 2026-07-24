#include <iostream>
using namespace std;
void swapByvalue(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapByreference(int &x , int &y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
    
}
void swapByaddress(int *c , int *d) {
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
}

int main() {
    int e = 20;
    int f = 10;
    swapByvalue(e,f);
    cout<<e<<" "<<f<<endl;
    int x = 10;
    int y = 20;
    swapByreference(x, y);
    cout << x << " ";
    cout << y << endl;
    int c = 10;
    int d = 20;
    swapByaddress(&c, &d);
    cout << c << " ";
    cout << d << endl;
    return 0;
}