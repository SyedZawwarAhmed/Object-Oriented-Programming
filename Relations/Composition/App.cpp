#include <iostream>
#include <vector>
#include "Mobile.cpp"

using namespace std;

class App {
    private:
    string appName;
    int requiredRAM = 4;
    Mobile mob;
    public:
    App(const Mobile &mob) {
        this->mob = mob;
    };
    bool checkSpec () {
        if (this->mob.RAM >= this->requiredRAM) {
            this->mob.appList.push_back(appName);
            return true;
        } else {
            return false;
        }
    }

};