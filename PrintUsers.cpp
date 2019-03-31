#include <iostream>
using namespace std;
int main()
{
    string Name1, Address1, Phone1, Name2, Adderss2, Phone2;
    cout << "First User" << endl;
    cout << "Enter Your Name:" << endl;
    getline(cin, Name1);
    cout << "Enter Your Address:" << endl;
    getline(cin, Address1);
    cout << "Enter Your Phone:" << endl;
    getline(cin, Phone1);

    cout << "Second User" << endl;
    cout << "Enter Your Name:" << endl;
    getline(cin, Name2);
    cout << "Enter Your Address:" << endl;
    getline(cin, Adderss2);
    cout << "Enter Your Phone:" << endl;
    getline(cin, Phone2);

    cout << "Name\t\t"
         << "Address\t\t"
         << "Phone\t\t" << endl;
    cout << Name1 << "\t\t" << Address1 << "\t\t" << Phone1 << "\t\t" << endl;
    cout << Name2 << "\t\t" << Adderss2 << "\t\t" << Phone2 << "\t\t" << endl;
    return 0;
}