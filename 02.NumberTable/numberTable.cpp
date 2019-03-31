#include <iostream>
#include "../Util/utils.hpp"

using namespace std;

int N, M, K;
int Answer;
int Input[100][100];

void Check(int w, int h)
{
    int sum;
    for (int i = 0; i <= N - w; i++)
    {
        for (int j = 0; j <= N - h; j++)
        {
            sum = 0;
            for (int x = i; x < i + w; x++)
            {
                for (int y = j; y < j + h; y++)
                    sum += Input[x][y];
            }
            if (sum < K)
                Answer++;
        }
    }
}

int main()
{
    int test_case, T;
    setbuf(stdout, NULL);

    scanf("%d", &T);

    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d %d", &N, &M, &K);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                scanf("%d", &Input[i][j]);
        }
        Answer = 0;
        for (int i = 1; i <= M; i++)
        {
            if (M % i == 0)
                Check(i, M / i);
        }
        cout << "#" << test_case << " " << Answer << endl;
    }

    return 0;
}