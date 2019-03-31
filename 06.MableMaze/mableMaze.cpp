#include <iostream>
using namespace std;

int test_case, T;
int N;
int Input[100][100];
int Answer[100];

int main()
{
    int col;
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                scanf("%d", &Input[i][j]);
            }
        }
        for (int i = 0; i < N; i++)
            Answer[i] = 0;

        for (int j = 0; j < N; j++)
        {
            col = j;
            for (int i = 0; i < N; i++)
            {
                if (Input[i][col] == 1)
                {
                    col++;
                }
                else if (Input[i][col] == 2)
                    col--;
                if (col >= N || col < 0)
                    break;
            }
            if (col >= 0 && col < N)
            {
                Answer[col]++;
            }
        }
        cout << "#" << test_case << " ";
        for (int i = 0; i < N; i++)
            cout << Answer[i] << " ";
        cout << endl;
    }
    return 0;
}