#include <iostream>
#include <string>
#include "Stock.hpp"
using namespace std;

int main(){
    Stock Apple;
    Apple.acquire("Apple", 20, 12.50);
    Apple.show();
    Apple.buy(15,18.125);
    Apple.show();
    Apple.sell(400, 20.00);
    Apple.show();
    Apple.buy(300000, 40.125);
    Apple.show();
    Apple.show();
    Apple.sell(300000, 0.125);
    Apple.show();
    return 0;
}