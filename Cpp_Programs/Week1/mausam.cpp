#include <iostream>
#include "mausam.h"

using namespace std;

class Mausam
{

    // private:

public:
    int humidity;
    int temperature;
    bool isCloud;
    Mausam();
    void enjoyMausam()
    {
        cout << "I am enjoying the whether" << endl;
    }

    void showWhether()
    {
        cout << "The current temperature is " << endl;
    }
};
