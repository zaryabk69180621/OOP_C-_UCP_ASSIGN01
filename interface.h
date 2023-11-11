#include<iostream>
using namespace std;
class Teacher {
	double* salary=nullptr;
	char* id=nullptr;

public:
	Teacher();
	Teacher(const char* ID, double salary);
	Teacher(const Teacher& x);
	void setsalary(double sal);
	void setid(const char* id);
	char* getid();
	double getsalary();
	void disp();
	~Teacher();
};
class Person {
	  char* name;// to dunamically assign both the datamember
	int* age;
public:
	Person();

	
	Person(const char* name, int age); // because expecting "string" as args
	 Person (const Person &t);
	void disp();
	void setname(const char* name);
	
	void setage(int age);
	char* getname();
	int* getage();

	~Person();
};
