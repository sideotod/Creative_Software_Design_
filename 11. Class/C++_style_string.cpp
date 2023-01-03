// str.length() - 문자열의 길이 반환
// str.resize(n) - 문자열의 크기를 n으로 바꿈
// str.c_str() - 해당 문자열을 const char* 형태로 반환

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello world";
    cout << str <<endl;

    string str1 = str + " - bye world";
    cout << str1 << endl;
    cout << str1.length() << endl;
    cout << str1[0] << endl;

    str[0] = 'J';
    str.resize(5);
    cout << str << endl;

    const char* ptr = str.c_str();
    printf("%s\n", ptr);

    return 0;
}