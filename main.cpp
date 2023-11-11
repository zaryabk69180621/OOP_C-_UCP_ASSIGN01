#include "interface.h"
int main() {
	cout << "creating objects" << endl;
	Person newperson("jason brune",27);
	Teacher newteacher;
	newteacher.setsalary(20000);
	newteacher.setid("44715");
	cout << "objects created"<<endl;
	cout << "displaying the objects" << endl;
	newperson.disp();
	cout << endl <<"salary"<< newteacher.getsalary() << endl;
	cout <<"id:"<< newteacher.getid();
	

	return 0;
}