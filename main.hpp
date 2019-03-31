#include <iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;

  public:
    Dog();
    void setName(string nameIn);
    void setLicenceNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

Dog::Dog()
{
    name = "Unknow";
    licenseNumber = 0;
}

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenceNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    cout << "Dog name: " << name << " License#: " << licenseNumber << endl;
}