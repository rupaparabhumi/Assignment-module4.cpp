#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int Age;
    string country;

public:
    Person(string name_, int Age_, string country_)
    {
        name = name_;
        Age = Age_;
        country = country_;
    }
    // set function
    string setname(string name_)
    {
        name = name_;
    }
    int setAge(int Age_)
    {
        Age = Age_;
    }
    string setcountry(string country_)
    {
        country = country_;
    }
    // get function
    string getname()
    {
        return name;
    }

    int getAge()
    {
        return Age;
    }

    string getcountry()
    {
        return country;
    }
};

int main()
{
    Person person("bhumi", 20, "Junagadh");

    cout << "name:" << person.getname() << endl;
    cout << "Age:" << person.getAge() << endl;
    cout << "country:" << person.getcountry() << endl;

    return 0;
}