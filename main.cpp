// Chapter 4 Programming Project.cpp : This file contains the 'main' function for the Time Calculator program. 

#include <iostream>

using namespace std;

int main()
{
  const int SEC_PER_MIN = 60;
  const int SEC_PER_HOUR = 3600;
  const int SEC_PER_DAY = 86400;

  int days, hours, minutes, seconds;

  cout << "Enter the number of seconds: ";
  cin >> seconds;

  if (seconds < SEC_PER_MIN)
    cout << "Seconds: " << seconds << endl;
  else if (seconds < SEC_PER_HOUR)
  {
    minutes = seconds / SEC_PER_MIN;
    seconds %= SEC_PER_MIN;
    cout << "Minutes: " << minutes << " Seconds: " << seconds << endl;
  }
  else if (seconds < SEC_PER_DAY)
  {
    hours = seconds / SEC_PER_HOUR;
    seconds %= SEC_PER_HOUR;
    minutes = seconds / SEC_PER_MIN;
    seconds %= SEC_PER_MIN;
    cout << "Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds << endl;
  }
  else
  {
    days = seconds / SEC_PER_DAY;
    seconds %= SEC_PER_DAY;
    hours = seconds / SEC_PER_HOUR;
    seconds %= SEC_PER_HOUR;
    minutes = seconds / SEC_PER_MIN;
    seconds %= SEC_PER_MIN;
    cout << "Days: " << days << " Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds << endl;
  }


  return 0;
}