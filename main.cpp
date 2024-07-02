// Chapter 4 Programming Project.cpp : This file contains the 'main' function for the Speed of Sound in Gases program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int CO2 = 1;
    const int AIR = 2;
    const int HELIUM = 3;
    const int HYDROGEN = 4;
    const int QUIT = 5;

    const double CO2_MPS = 258;
    const double AIR_MPS = 331.5;
    const double HELIUM_MPS = 972;
    const double HYDROGEN_MPS = 1270;

    const double MIN_SECONDS = 0;
    const double MAX_SECONDS = 30;

    int gasChoice;
    double travelSeconds, distance;


    cout << "How Far Away is a Sound in Gas?" << endl;
    cout << "How long (in seconds) did it take for the sound to reach you? ";
    cin >> travelSeconds;
    if (travelSeconds <= MIN_SECONDS || travelSeconds > MAX_SECONDS)
    {
        cout << "Seconds must be more than 0 and 30 or less" << endl;
        return(1);
    }

    cout << "Select the gas the sound is traveling through: " << endl;
    cout << "1. Carbon Dioxide" << endl;
    cout << "2. Air" << endl;
    cout << "3. Helium" << endl;
    cout << "4. Hydrogen" << endl;
    cout << "5. Quit" << endl;
    cin >> gasChoice;

    switch (gasChoice)
    {
    case CO2:
        distance = CO2_MPS / travelSeconds;
        break;
    case AIR:
        distance = AIR_MPS / travelSeconds;
        break;
    case HELIUM:
        distance = HELIUM_MPS / travelSeconds;
        break;
    case HYDROGEN:
        distance = HYDROGEN_MPS / travelSeconds;
        break;
    case QUIT:
        cout << "Goodbye!" << endl;
        return(0);
    default:
        cout << "Invalid input, enter a number between 1 and 4." << endl;
        return(1);
    }

    cout << fixed << setprecision(1) << "You are " << distance << " meters away from this sound" << endl;
    return 0;

}