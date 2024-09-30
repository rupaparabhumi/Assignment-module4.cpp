#include <iostream>
using namespace std;

class Cricketer
{
public:
   string Name;
   void getName()
   {
      cout << "Enter your CricketerName:";
      cin >> Name;
   }
};

class Batsman : public Cricketer
{
   int TotalRuns;
   float Averageruns;
   int bestperformance;
   int Runs1, Runs2;

public:
   void getinput_data()
   {
      cout << "Enter your number Runs1(0-1000):";
      cin >> Runs1;
      cout << "Enter your number Runs2(0-1000):";
      cin >> Runs2;
      cout << "Enter your bestperformance(0-1000):";
      cin >> bestperformance;
   }

   // member function calculateAveragrun
   void getAverageruns()
   {
      int numberofMatchs = 5;
      cout << "\nAverageruns:" << (Runs1 + Runs2) / 5;
   }

   void getDisplay()
   {
      cout << "\n\n---------------";
      cout << "\ncricketerName:" << Name;
      cout << "\nRuns1:" << Runs1;
      cout << "\nRuns2:" << Runs2;
      cout << "\nTotalruns:" << Runs1 + Runs2;
      cout << "\nAverageruns:" << (Runs1 + Runs2) / 5;
      cout << "\nBest performance:" << bestperformance;
   }
};

int main()
{
   Batsman B1;
   B1.getName();
   B1.getinput_data();
   B1.getDisplay();

     return 0;
}
