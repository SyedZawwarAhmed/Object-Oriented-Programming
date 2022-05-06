#include <iostream>
#include <vector>

using namespace std;

class Mobile
{
private:
    int RAM;
    string resolution;
    int battery;
    int brightness = 50;
    vector<string> appList;

public:
    Mobile(){};
    Mobile(int RAM, string resolution, int battery)
    {
        this->RAM = RAM;
        this->resolution = resolution;
        this->battery = battery;
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

    void installApp(string appName)
    {
        this->appList.push_back(appName);
        cout << appList[appList.size() - 1] << " installed" << endl;
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

class Samsung
{
private:
    Mobile mob = Mobile(4, "6inch", 5000);
    int RAM = mob.getRAM();
    string resolution = mob.getResolution();
    int battery = mob.getBattery();
    int brightness = mob.getBrightness();
    vector<string> appList = mob.getAppList();
    string OS;

public:
    Samsung(){};

    void osUpdate(string version)
    {
        this->OS = version;
        cout << "System now running :" << this->OS << endl;
    }

    void doublePress(string button)
    {
        if (button == "power")
        {
            cout << "Camera Opened" << endl;
        }

        else if (button == "volume")
        {
            cout << "Screenshot taken" << endl;
        }
    }

    int getRAM()
    {
        return mob.getRAM();
    }
};