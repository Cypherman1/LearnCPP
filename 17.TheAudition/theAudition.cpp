#include <iostream>
using namespace std;

int test_case, T;
int N, M, Answer;
int Input[3000];

int getScore(int cal)
{
    int Score[3000];
    int totalScore = 0;
    for (int i = 0; i < M; i++)
        Score[i] = 0;
    for (int i = 0; i < M; i++)
    {
        if (Input[i] == cal)
            Score[i]++;
        if (i > 0 && Input[i - 1] == cal && Input[i] == cal)
            Score[i] += Score[i - 1];
    }
    for (int i = 0; i < M; i++)
    {
        totalScore += Score[i];
        // cout << Score[i];
    }
    // cout << endl;
    return totalScore;
}

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d", &N, &M);
        for (int i = 0; i < M; i++)
            scanf("%d", &Input[i]);
        int hScore = 0;
        int iScore = 0;
        Answer = 0;
        // for (int i = 1; i <= N; i++)
        // {
        //     iScore = getScore(i);
        //     if (iScore > hScore)
        //     {
        //         hScore = iScore;
        //         Answer = i;
        //     }
        // }
        printf("# %d %d\n", test_case, Answer);
    }
    return 0;
}