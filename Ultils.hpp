#include <iostream>

using namespace std;

// void showMessage(string msg);

int search(int arr[], int size, int val);

void showMessage(string msg)
{
    cout << msg << endl;
}

void increment(int &input)
{
    input++;
    cout << "In the function call a = " << input << "\n";
}

int search(int *array, int size, int searchKey)
{
    int found = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == searchKey)
        {
            found = i;
        }
    }
    return found;
}