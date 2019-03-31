#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Number:" << endl;
    string i;
    // scanf("%s", &i);
    getline(std::cin, i);
    cout << i.substr(1, 3) << endl;
    return 0;
}
