#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:
	Person(){}
	virtual ~Person(){};
	string name;
	size_t age;
public:
	virtual void getdata() = 0;
	virtual void putdata() = 0;
};

class Student : public Person{
public:
	int cur_id;
	static int count;
	vector<int> marks = vector<int>(6);
public:
	Student()
	: Person()
	{
		cur_id = ++count;
	}
	virtual ~Student() {}
	void getdata(){
		cin >> this->name;
		cin >> age;
		for(int& mark: marks) cin >> mark;
	}
	void putdata(){
		cout << name << " " << age << " " << accumulate(marks.begin(), marks.end(), 0) << " " << cur_id << endl;
	}
};

class Professor : public Person{
public:
	int cur_id;
	static int count;
	int publications;
public:
	Professor()
	: Person()
	{
		cur_id=++count;
	}
	virtual ~Professor(){};
	void getdata(){
		cin >> name;
		cin >> age;
		cin >> publications;
	}
	void putdata(){
		cout << name << " " << age << " " << publications << " " << cur_id << endl;
	}
};

int Student::count = 0;
int Professor::count = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

