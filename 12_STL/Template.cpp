#include <iostream>
using namespace std;

/*class CintPoint{
    private:
        int x, y;
    public:
    CintPoint(int a, int b) : x(a), y(b) {}
    void move(int a, int b) {x += a; y += b;}
    void print() {cout << x << " " << y << endl;}
};
class CdoublePoint{
    private:
        double x, y;
    public:
        CdoublePoint(double a, double b) {x=a; y=b;}
        void move(double a, double b) {x += a; y += b;}
        void print() {cout << x << " " << y << endl;}    
};
int main(){
    CintPoint P1 (1,2);
    CdoublePoint P2 (1.1, 2.1);
    P1.print();
    P2.print();
}*/

template <typename T>
class Point{
    private:
        T x, y;
    public:
        Point(T a, T b) : x(a), y(b) {}
        void move(T a, T b) {x += a; y += b;}
        void print() {cout << x << " " << y << endl;}          
};
int main(){
    Point<int> P1 (1,2);
    Point<double> P2 (1.1, 2.1);
    P1.print();
    P2.print();
}