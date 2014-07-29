#include <iostream>

using namespace std;

// struct

struct student
{
	int roll_no;
	char name[25];
    char branch[20];
	int marks;
};

int main()
{
	student s;
	s.roll_no = 9570;
	s.name = "Lokesh";
	s.branch = "CSE";
	s.marks = 100;

	cout << "Roll No: \t" << s.roll_no << endl;
	cout << "Name:\t\t" << s.name << endl;
	cout << "Branch:\t\t" << s.branch << endl;
	cout << "Marks:\t\t" << s.marks << endl;

	return 0;
}