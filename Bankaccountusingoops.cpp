#include <iostream>
using namespace std;
class Bankacc {
    private:
    int amt=550;
    string name,pin;
    public:
    void withdraw(int a) {
        amt-=a;
    }
    void deposit(int a) {
        amt+=a;
    }
    void changepin(string a) {
        pin=a;
    }
    int getbalance() {
        return amt;
    }
};
int main() {
    Bankacc a;
    a.deposit(10);
    a.withdraw(5);
    cout<<a.getbalance();
    
}