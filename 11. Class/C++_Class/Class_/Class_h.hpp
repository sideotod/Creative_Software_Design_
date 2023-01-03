#include <iostream>
#include <string>
using namespace std;

class student{
private:
    string name_, id_, grade_;
    int midterm_, final_, hw1_, hw2_;

/*public:
    void SetInfo(string name, string id){name_=name, id_=id;}
    void SetScores(int midterm, int final, int hw1, int hw2){midterm_=midterm, final_=final, hw1_=hw1, hw2_=hw2;}
    string GetGrade(){return grade_;}*/
public:
    void SetInfo(string name, string id);
    void SetScores(int midterm, int final, int hw1, int hw2);
    string GetGrade(); 
};