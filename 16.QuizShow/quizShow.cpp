#include <iostream>
using namespace std;

int test_case, T;
int N, P, Answer;
int Team[15][3], Questions[100][4];

int Score(int q)
{
    for (int i = 0; i < N; i++)
    {
        if (Team[i][0] >= Questions[q][0] && Team[i][1] >= Questions[q][1] && Team[i][2] >= Questions[q][2])
            return Questions[q][3];
    }
    return 0;
}

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d", &N, &P);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 3; j++)
                scanf("%d", &Team[i][j]);
        }
        for (int i = 0; i < P; i++)
        {
            for (int j = 0; j < 4; j++)
                scanf("%d", &Questions[i][j]);
        }
        Answer = 0;
        for (int i = 0; i < P; i++)
            Answer += Score(i);
        printf("# %d %d\n", test_case, Answer);
    }
    return 0;
}