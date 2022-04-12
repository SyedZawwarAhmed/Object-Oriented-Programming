#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    int price;
    int weight;
    int teeth;
    string name;
    bool isInjured;

public:
    Animal()
    {
        this->price = 100000;
        this->weight = 100;
        this->teeth = 4;
        this->name = "Cow";
        this->isInjured = false;
    };

    Animal(int price, int weight, int teeth, string name, bool isInjured)
    {
        this->price = price;
        this->weight = weight;
        this->teeth = teeth;
        this->name = name;
        this->isInjured = isInjured;
    }

    Animal(const Animal &otherObj)
    {
        this->price = otherObj.price;
        this->weight = otherObj.weight;
        this->teeth = otherObj.teeth;
        this->name = otherObj.name;
        this->isInjured = otherObj.isInjured;
    }

    int getPrice()
    {
        return this->price;
    }
    int getWeight()
    {
        return this->weight;
    }
    int getTeeth()
    {
        return this->teeth;
    }
    string getSpecie()
    {
        return this->name;
    }
    bool getIsInjured()
    {
        return this->isInjured;
    }
    void show()
    {
        cout << this->price << endl;
        cout << this->weight << endl;
        cout << this->name << endl;
        cout << this->teeth << endl;
        cout << this->isInjured << endl;
    }
};

class Goat : public Animal
{
private:
    bool isFromCattle;

public:
    Goat()
    {
        this->isFromCattle = true;
        this->name = "Goat";
    }

    Goat(bool isFromCattle)
    {
        this->name = "Goat";
        this->isFromCattle = isFromCattle;
    }

    Goat(const Goat &otherObj)
    {
        this->name = otherObj.name;
        this->isFromCattle = otherObj.isFromCattle;
    }

    void show()
    {
        Animal::show();
        if (this->isFromCattle)
        {
            cout << "Goat is from cattle." << endl;
        }
        else
        {
            cout << "Goat is not from cattle." << endl;
        }
    }
};

class Cow : public Animal
{
private:
    string feed;
    bool isHornBroken;

public:
    Cow()
    {
        this->teeth = 8;
    }

    Cow(string feed, bool isHornBroken)
    {
        this->teeth = 8;
        this->feed = feed;
        this->isHornBroken = isHornBroken;
    }

    Cow(const Cow &otherObj)
    {
        this->teeth = otherObj.teeth;
        this->feed = otherObj.feed;
        this->isHornBroken = otherObj.isHornBroken;
    }

    void show()
    {
        Animal::show();
        cout << this->feed << endl;
        cout << this->isHornBroken << endl;
    }

    string isSuitableForQurbani()
    {
        if (this->teeth >= 2 && !this->isInjured && this->price <= 100000 && !this->isHornBroken)
        {
            return "Is Suitable";
        }
        else
        {
            return "Is Not Suitable";
        }
    }
    // void operator=(Goat &goat)
    // {
    //     this = goat;
    // }
};


int main()
{
    Animal a1;
    Cow cow1("chara", false);
    // cout << c1.isSuitableForQurbani();
    Goat goat1;
    // goat.show();
    Goat *copiedGoat = new Goat(goat1);
    // copiedGoat->show();

    // cow1 = goat1;
    // cow1.show();

    // int a = 5;
    // int* p = &a;
    // int **pp = &p;
    // cout << "Value of a is " << a << endl;
    // cout << "Address of a is " << &a << endl;
    // cout << "Value of p is " << p << endl;
    // cout << "Address of p is " << &p << endl;
    // cout << "Value of pp is " << pp << endl;
    // cout << "Address of pp is " << &pp << endl;

    return 0;
}