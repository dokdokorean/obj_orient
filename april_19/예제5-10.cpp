#define _CRT_SECURE_NO_WARINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
 char* name;
 int id;
public:
Person(int id,const char*name);
~Person();
void changeName(const char*name);
void show() {cout << id << ',' << name << endl;}
};
 Person:: Person(const Person& person)
{
    this -> id  = person.id;
    int len = strlen(person.name);
    this -> name = new char [len+1];
    strcpy(this -> name, person.name);
    cout << "복사생성자 샐행, 원본 객체 이름"<< this -> name << endl;
}
Person :: ~Person(){
    if (name)
    delete []name;
}
 void Person::changeName(const char*name){
    if (strlen(name) > strlen(this -> name))
    return;
    strcpy(this -> name,name);
 }
int main(){
    Person father(1,"kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후"<< endl;
    father.show();
    daughter.show();
    
    daughter.changeName("Grace");
    cout << "daughter 이름 변경이후 ----" << endl;
    father.show();
    daughter.show();

    return 0;
}
