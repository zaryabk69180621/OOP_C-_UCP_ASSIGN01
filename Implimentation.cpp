#include "interface.h"
int findlength(const char *p) {

	int i = 0;
	while (*(p + i) != '\0'){
		i++;


	}
	return i;

}
Person::Person() {
	(this->age) = new int;
	*(this->age)=20; //  twenty is the average age of paksitan and ali is the most common name
	this->setname("Ali");



}
Person::Person(const char *p, int age) {

	this->setname(p);
	this->setage(age);


}
void Person::setname(const char *p) {
	int k = findlength(p);
	this-> name = new char[k+1];
	int i = 0;
	while (*(p + i) != '\0') {
		*(name + i) = *(p + i);
		i++;
	
	}
	name[k] = '\0';
	


}

char* Person::getname(){
	return (this->name);


}

int* Person:: getage() {
	return (this->age);

}
void Person::setage(int age){
	this->age = new int;
	*(this->age) = age;

}
void Person::disp() {
	cout << endl << "name of the perosn" << this->name<<endl<<"age of the peroson"<<*(this->age);

}
Person::  Person(const Person& T) {
	setname(T.name);
	setage(*T.age);

}
 Person::~Person() {
	
	 delete[] this->name;
	 delete this->age;
}
 Teacher::Teacher() {
	 this->setsalary(0);
	 this->setid("unknown");
 
 
 }
 Teacher::Teacher(const Teacher &x) {
	 this->setid(x.id);
	 cout << "your";
	 this->setsalary(*(x.salary));
 
 }
 Teacher::Teacher(const char*id, double sary) {
	 setid(id);
	 setsalary(sary);
 
 }

 void Teacher::setid(const char* p) {
	 int k = findlength(p);
	 if (this->id != nullptr)
		 delete[] id;
	 this->id = new char[k + 1];
	 int i = 0;
	 while (*(p + i) != '\0') {
		 *(id + i) = *(p + i);
		 i++;

	 }
	 id[k] = '\0';// k is the lastindex

 }
 void Teacher::setsalary(double salary){
	 if (this->salary != nullptr)
		 delete this->salary;
	
	 this->salary = new double;
	 *(this->salary) = salary;
 
 
 }

 char* Teacher:: getid(){
	 return this->id;
 
 
 }
 double Teacher::getsalary() {
 
	 return *(this->salary);
 
 }
 void Teacher::disp() {
 
	 cout << endl << "id of the teacher" << this->getid() << endl << "salary of the teacher"
		 << this->getsalary();
 
 }
 Teacher::~Teacher(){
	
	 delete[]( this->id);
	 delete (this->salary);
 
 
 }