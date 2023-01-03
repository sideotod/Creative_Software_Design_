#include <iostream>
#include <string>
#include "Class_h.hpp"
using namespace std;

void student::SetInfo(string name, string id){name_=name, id_=id;}
void student::SetScores(int midterm, int final, int hw1, int hw2){midterm_=midterm, final_=final, hw1_=hw1, hw2_=hw2;}
string student::GetGrade(){return grade_;}

