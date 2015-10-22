#include <iostream>
#include <string.h>
using namespace std; 

class Person {
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];

public:
	Person() {
		lname = ""; fname[0] = '\0';
	}

	Person(const string &  ln, const char * fn = "Heyyou") {};

	void show() const;
	void formalshow() const;
};
void Person:: show()const
{
	cout << fname << &  lname <<endl ;
}
void Person::formalshow()const
{
	
	cout<< &lname<<","<<fname<<endl;
	
}
int main()
{
	Person person1;
	Person person2("Smythecraft");

	Person person3("Dimwiddy", "Sam");
	person1.show();
	person2.formalshow();
	return 0;

}