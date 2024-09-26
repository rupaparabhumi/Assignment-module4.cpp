#include <iostream>
using namespace std;

class Date
{
private:
       int day;
       int month;
       int year;

public:
       Date(int Day, int Month, int Year)
       {
              day = Day;
              month = Month;
              year = Year;
       }

       // member function set
       int getday()
       {
              return day;
       }

       int getmonth()
       {
              return month;
       }

       int getyear()
       {
              return year;
       }

       // memeber function set
       int setDay(int Day)
       {
              return Day;
       }
       int setmonth(int Month)
       {
              return Month;
       }
       int setyear(int Year)
       {
              return Year;
       }

       int isvalidDate(int month, int day, int year)
       {
              if (month < 1 || month > 12)
                     return false;

              // Check if the day is valid
              if (day < 1 || day > 31)
                     return false;

              // Check for specific month-day combinations that are invalid
              if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
                     return false;

              if (month == 2)
              {
                     // Check for leap year
                     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                     {
                            if (day > 29)
                                   return false;
                     }
                     else
                     {
                            if (day > 28)
                                   return false;
                     }
              }

              // Date is valid
              return true;
       }
};

int main()
{

       int month, day, year;
       cout << "Enter your Day:";
       cin >> day;
       cout << "Enter your month:";
       cin >> month;
       cout << "Enter your year:";
       cin >> year;

       Date D1(month, day, year);
       if (D1.isvalidDate(month, day, year))
              cout << "The date is valid." << endl;
       else
              cout << "The date is invalid." << endl;

       return 0;
}
