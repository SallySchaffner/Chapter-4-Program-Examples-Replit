// Chapter 4 Example Project.cpp : This file contains the 'main' function for the Software Sales program. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double DISCOUNT_RATE1 = .2;
    const double DISCOUNT_RATE2 = .3;
    const double DISCOUNT_RATE3 = .4;
    const double DISCOUNT_RATE4 = .5;

    const int NO_DISCOUNT = 9;
    const int DISCOUNT1 = 19;
    const int DISCOUNT2 = 49;
    const int DISCOUNT3 = 99;

    const double packagePrice = 99;

    int unitsSold;
    double discount = 0, purchaseCost;

    cout << "Enter the number of packages purchased: ";
    cin >> unitsSold;
    if (unitsSold <= 0)
    {
        cout << " You must purchase at least one package." << endl;
        return(1);
    }



    if (unitsSold <= NO_DISCOUNT)
        discount = 0;
    else if (unitsSold <= DISCOUNT1)
        discount = DISCOUNT_RATE1;
    else if (unitsSold <= DISCOUNT2)
        discount = DISCOUNT_RATE2;
    else if (unitsSold <= DISCOUNT3)
        discount = DISCOUNT_RATE3;
    else
        discount = DISCOUNT_RATE4;

    purchaseCost = (packagePrice - packagePrice * discount) * unitsSold;

    cout << fixed << setprecision(2) << showpoint;
    cout << "You bought " << unitsSold << " for a total of $" << purchaseCost << endl;

    return 0;

}