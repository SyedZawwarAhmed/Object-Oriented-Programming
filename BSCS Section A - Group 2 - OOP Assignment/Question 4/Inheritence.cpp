#include <iostream>
#include <vector>

using namespace std;

class Mobile
{
protected:
    int RAM;
    string resolution;
    int battery;
    int brightness = 50 ;
    vector<string> appList;

public:
    Mobile(){};

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
        this->brightness++;
    }

    void decreaseBrightness()
    {
        this->brightness--;
    }

    void displayAppList() {
        for(string name: appList)
        {
            cout << name << endl;
        }
    }
    
};

class Samsung : public Mobile
{
private:
    string OS;
    int bluetooth;

public:
    Samsung() {};

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
};

int main()
{

    Mobile mob;
    mob.installApp("Twitter");
    mob.installApp("Facebook");
    mob.openApp("Facebook");
    mob.increaseBrightness();
    mob.decreaseBrightness();

    Samsung sn;
    sn.doublePress("volume");
    sn.installApp("Whatsapp");
    sn.installApp("Facebook");
    sn.installApp("Twitter");
    sn.openApp("Whatsapp");
    sn.displayAppList();
    return 0;
}
