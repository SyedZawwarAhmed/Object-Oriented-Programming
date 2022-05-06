#include <iostream>
#include <vector>

using namespace std;

class App
{
private:
    string appName;
    int requiredRAM = 4;

public:
    App(){};
    App (string appName, int requiredRAM) {
        this->appName = appName;
        this->requiredRAM = requiredRAM;
    }
    bool checkSpec(int RAM)
    {
        if (RAM >= this->requiredRAM)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Mobile
{
private:
    int RAM;
    string resolution;
    int battery;
    int brightness;
    vector<string> appList = {"settings"};

public:
    Mobile(int RAM)
    {
        this->RAM = RAM;
    }

    int getRAM()
    {
        return this->RAM;
    }

    string getResolution()
    {
        return this->resolution;
    }

    int getBattery()
    {
        return this->battery;
    }

    int getBrightness()
    {
        return this->brightness;
    }

    vector<string> getAppList()
    {
        return this->appList;
    }

    void Power(string power)
    {
        if (power == "on")
        {
            cout << "Screen has turned on" << endl;
        }
        else if (power == "off")
        {
            cout << "Screen OFF" << endl;
        }
        else
        {
            cout << "Invalid Request" << endl;
        }
    }

    void openApp(string appName)
    {
        cout << appName << " opened" << endl;
    }

    void installApp(string appName, int requiredRAM)
    {
        // this->appList.push_back(appName);
        App newApp(appName, requiredRAM);
        if (newApp.checkSpec(this->RAM))
        {
            appList.push_back(appName);
            cout << appName << " installed" << endl;
        }
        else
            cout << appName << " not installed" << endl;
    }

    void increaseBrightness()
    {
        if (this->brightness < 100)
        {
            this->brightness++;
        }
    }

    void decreaseBrightness()
    {
        if (this->brightness > 0)
            this->brightness--;
    }

    void displayAppList()
    {
        for (string name : appList)
        {
            cout << name << endl;
        }
    }
};

// class Samsung
// {

//     Mobile mob = Mobile(4, "6inch", 5000);
//     int RAM = mob.getRAM();
//     string resolution = mob.getResolution();
//     int battery = mob.getBattery();
//     int brightness = mob.getBrightness();
//     vector<string> appList = mob.getAppList();
//     string OS;

// public:
//     Samsung(){};

//     void osUpdate(string version)
//     {
//         this->OS = version;
//         cout << "System now running :" << this->OS << endl;
//     }

//     void doublePress(string button)
//     {
//         if (button == "power")
//         {
//             cout << "Camera Opened" << endl;
//         }

//         else if (button == "volume")
//         {
//             cout << "Screenshot taken" << endl;
//         }
//     }

//     int getRAM()
//     {
//         return mob.getRAM();
//     }
// };

int main()
{
    // Mobile m;
    // m.increaseBrightness();
    // cout << m.getBrightness() << "\n";

    // Samsung sn;
    // cout << sn.getRAM();

    Mobile samsung(4);
    samsung.installApp("twitter", 5);
    return 0;
}
