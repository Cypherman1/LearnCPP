#include <iostream>

using namespace std;

int n;

void chuyen(int n, char a, char b)
{
    cout << "Chuyen dia thu " << n << " tu " << a << " sang " << b << endl;
}

void thapHaNoi(int n, char a, char b, char c)
{
    if (n == 1)
        chuyen(n, a, c);
    else
    {
        thapHaNoi(n - 1, a, c, b);
        chuyen(n, a, c);
        thapHaNoi(n - 1, b, a, c);
    }
}

int main()
{
    char a = 'A', b = 'B', c = 'C';
    cout << "n = ";
    scanf("%d", &n);
    thapHaNoi(n, a, b, c);
    return 0;
}