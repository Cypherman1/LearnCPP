#include <iostream>

using namespace std;

// void printS2DArr(int arr[][], int w, int h);

void printS2DArr(int arr[100][100], int w, int h)
{
    cout << "Array: " << endl;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}