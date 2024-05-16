#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct  Dataset
{
    string name;
    int age;
    int height;
    char sex;
};


int main(){
    Dataset people[8];
    ifstream fin;
    fin.open("data.txt");

    for (int i=0 ;i<9;i++){
        fin>>people[i].name;
        fin >> people[i].age;
        fin >> people[i].height;
        fin >> people[i].sex;
    }
    fin.close();

    cout << endl << "Name" << "\t" << "Age" << "\t" << "Height" << "\t" << "sex" << endl;
    
    for (int i=0; i<8;i++){
        cout << people[i].name << "\t" << people[i].age << "\t" << people[i].height << "\t" << people[i].sex << "\t" << endl;
    }
    
    int hsum=0;
    int asum=0;

    for (int i=0;i<8;i++){
        hsum+= people[i].height;
        asum += people[i].age;
    }
    
    return 0;
}