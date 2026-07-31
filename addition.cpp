#include <iostream>
using namespace std;
class Complex {
    private:
    int real , imag;
    public:
    void input() {
        cin>>real>>imag;
    }
    void show() {
        cout<<real;
        if (imag>0) {
            cout<<"+"<<imag<<"i"<<" "<<endl;
        } else {
            cout<<imag<<"i"<<" "<<endl;
        }
    }
    void add(Complex p) {
        real = real + p.real;
        imag = imag + p.imag;
    }
    Complex additi(int a , int b) {
        Complex m;
        m.real = real + 5;
        m.imag = imag + 10;
        return m;
    }
    void addi(int a , int b) {
        real = real + a;
        imag = imag + b;
    }
    void addit(Complex p,Complex q) {
        real = p.real + q.real;
        imag = p.imag + q.imag;
    }
};
int main() {
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c1.add(c2);
    c1.show();
    c2.add(c1);
    c1.show();
    c2.addi(5 ,2);
    c1.addi(9 , 8);
    c3.addit(c1,c2);
    
    c3.show();
    c1.additi(5,10);
    return 0;
}