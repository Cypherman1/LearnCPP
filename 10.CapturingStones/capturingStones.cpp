#include <iostream>

using namespace std;

int test_case, T;
int N, Answer;
int Input[20][20];

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                scanf("%d", &Input[i][j]);
        }
        Answer = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (Input[i][j] == 1)
                {
                    if (i - 1 > 0 && Input[i - 1][j] == 0)
                    {
                        Input[i - 1][j] = 2;
                        Answer++;
                    }
                    if (i + 1 < N && Input[i + 1][j] == 0)
                    {
                        Input[i + 1][j] = 2;
                        Answer++;
                    }
                    if (j - 1 > 0 && Input[i][j - 1] == 0)
                    {
                        Input[i][j - 1] = 2;
                        Answer++;
                    }
                    if (j + 1 < N && Input[i][j + 1] == 0)
                    {
                        Input[i][j + 1] = 2;
                        Answer++;
                    }
                }
            }
        }
        cout << "#" << test_case << " " << Answer << endl;
        // for (int i = 0; i < N; i++)
        // {
        //     for (int j = 0; j < N; j++)
        //     {
        //         cout << Input[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }
    return 0;
}