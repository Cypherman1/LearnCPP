#include <iostream>

using namespace std;

int test_case, T;
int N, M;
char Input[500];
int Answer;

int countP(int x, int y)
{
    int count = 0;
    bool match;
    for (int i = 0; i < N; i++)
    {
        match = true;
        for (int j = x; j < y; j++)
        {
            if (Input[j] != Input[i + j])
                match = false;
        }
        if (match)
            count++;
    }
    return count;
}

int main()
{
    int icount;
    setbuf(stdout, NULL);
    scanf("%d", &T);

    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d", &N, &M);
        scanf("%s", Input);
        Answer = 0;
        for (int i = 0; i < N; i++)
        {
            icount = countP(i, i + M);
            if (icount > Answer)
                Answer = icount;
        }

        cout << "#" << test_case << ":" << Answer << endl;
    }

    return 0;
}