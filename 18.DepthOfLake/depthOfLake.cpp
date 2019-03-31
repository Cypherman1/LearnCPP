#include <iostream>
using namespace std;

int test_case, T;
int N, Answer;
char Grid[20][20];
int Depth[20][20];

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
                // scanf("%c", &Grid[i][j]);
                cin >> Grid[i][j];
        }
        Answer = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (Grid[i][j] == 'G')
                    Depth[i][j] = 0;
                else if (Grid[i][j] == 'W')
                {
                    //check edge
                    if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
                        Depth[i][j] = 1;
                    else if (Grid[i + 1][j] == 'G' || Grid[i - 1][j] == 'G' || Grid[i][j + 1] == 'G' || Grid[i][j - 1] == 'G')
                        Depth[i][j] = 1;
                    else
                    {
                        Depth[i][j] = 1;
                        if (Grid[i - 1][j - 1] == 'W')
                            Depth[i][j]++;

                        if (Grid[i + 1][j - 1] == 'W')
                            Depth[i][j]++;
                        if (Grid[i - 1][j + 1] == 'W')
                            Depth[i][j]++;
                        if (Grid[i + 1][j + 1] == 'W')
                            Depth[i][j]++;
                    }
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                // printf("%c ", Grid[i][j]);
                Answer += Depth[i][j];
        }
        cout << "#" << test_case << " " << Answer << endl;
    }
    return 0;
}