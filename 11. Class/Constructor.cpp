#include <iostream>
#include <string>
using namespace std;

class Stock {
public:
    string company;
    long shares;
    double share_val;
};

int main(){
    Stock stock;

    cout << stock.company << endl;
    cout << stock.shares <<endl;
    cout << stock.share_val <<endl;
    return 0;
}