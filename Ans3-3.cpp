#include <iostream>
using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;

public:
    Car(string company_, string model_, int year_)
    {
        company = company_;
        model = model_;
        year = year_;
    }

    // get function using
    string getcompany()
    {
        return company;
    }
    string getmodel()
    {
        return model;
    }
    int getyear()
    {
        return year;
    }

    // set function using private
    int setcompany(string(company_))
    {
        company = company_;
    }
    int setmodel(string(model_))
    {
        model = model_;
    }
    int setyear(int(year_))
    {
        year = year_;
    }
};

int main()
{
    Car car("Thar", "A8", 2023);

    // get functions
    cout << "Company:" << car.getcompany() << endl;
    cout << "model:" << car.getmodel() << endl;
    cout << "year:" << car.getyear() << endl;

    // set function
    car.setcompany("scorpio");
    car.setmodel("s24");
    car.setyear(2022);

    // update
    cout << "\nupdate company:" << car.getcompany() << endl;
    cout << "update model:" << car.getmodel() << endl;
    cout << "update year:" << car.getyear() << endl;
    return 0;
}
