#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence = "I like an apple, an orange, and an kiwi";
    int first = sentence.find("an");
    cout << first << endl;
    cout << sentence.find("an", first+1) << endl;
    cout << sentence.find("l") << endl;
    cout << string::npos << endl;
    cout << sentence.substr(2, 3) << endl;
    cout << sentence.substr(2) << endl;
    sentence.replace(2, 4, "hate");
    cout << sentence << endl;
    sentence.insert(2, "don't ");
    cout << sentence << endl;
}