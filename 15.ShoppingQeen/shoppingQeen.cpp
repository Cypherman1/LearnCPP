#include <iostream>

using namespace std;

int test_case, T;
int N, L, Answer;
int Input[100][20];

int getminprice(int col)
{
    int minidx = 0;
    for (int i = 0; i < N; i++)
    {
        if (Input[i][col] < Input[minidx][col])
            minidx = i;
    }
    return Input[minidx][col];
}

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d", &N, &L);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < L; j++)
            {
                scanf("%d", &Input[i][j]);
            }
        }
        Answer = 0;
        for (int j = 0; j < L; j++)
        {
            Answer += getminprice(j);
        }
        printf("#%d %d\n", test_case, Answer);
    }
    return 0;
}