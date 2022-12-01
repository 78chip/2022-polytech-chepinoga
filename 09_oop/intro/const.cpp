#include <iostream>
#include <string>
using namespace std;

struct Person
{
    Person()
    {
        cout << "Person::ctor" << endl;
        name = "DefaultName";
    }

    string name{};

    ~Person()
    {
        cout << "Person::dtor" << endl;
    }
};

struct Student : virtual public Person
{
    Student()
    {
        cout << "Student::ctor" << endl;
        score = 2.0;
    }

    ~Student()
    {
        cout << "Student::dtor" << endl;
    }

    int score{};
};

struct Teacher : virtual public Person
{
    Teacher()
    {
        cout << "Teacher::ctor" << endl;
    }

    ~Teacher()
    {
        cout << "Teacher::dtor" << endl;
    }
};

struct TA : Teacher, Student
{
    TA()
    {
        cout << "TA::ctor" << endl;
    }
    ~TA()
    {
        cout << "TA::dtor" << endl;
    }
};


int main()
{
    TA ta;
    int res{};
    res = ta.score;
    cout << res << endl;
    ta.score = 5.0;
    res = ta.score;
    cout << res << endl;
    string name{};
    name = ta.name;
    cout << name << endl;
    ta.name = "Andrew Panchenko and Artyom Gromkonravov";
    name = ta.name;
    cout << name << endl;

    return 0;
}
