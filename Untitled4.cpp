#include <iostream>
using namespace std;
struct stu_details{
	int roll_no,age,marks;
	string name;
	
};
int main(){
	stu_details students[5];
	students[0].roll_no=5;
	students[0].name="students[0]";
	students[0].age=15;
	students[0].marks=29;
	students[1].roll_no=5;
	students[1].name="students[2]";
	students[1].age=15;
	students[1].marks=29;
	students[2].roll_no=5;
	students[2].name="students[1]";
	students[2].age=15;
	students[2].marks=29;
	students[3].roll_no=5;
	students[3].name="students[4]";
	students[3].age=15;
	students[3].marks=29;
	students[4].roll_no=5;
	students[4].name="students[0]";
	students[4].age=15;
	students[4].marks=29;
	cout<<students[0].roll_no<<endl;
	cout<<students[0].age<<endl;
	cout<<students[0].name<<endl;
	cout<<students[0].marks<<endl;
}

