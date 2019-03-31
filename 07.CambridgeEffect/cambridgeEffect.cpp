#include <iostream>

using namespace std;

int test_case, T;
int N, Answer;
char Input1[30][30];
char Input2[30][30];

int score(char Word1[], char Word2[])
{
    int len = strlen(Word1);
    bool issame = true;
    for (int i = 0; i < len; i++)
    {
        if (Word1[i] != Word2[i])
        {
            issame = false;
            break;
        }
    }
    if (issame)
    {
        return 2;
    }
    else if (Word1[0] == Word2[0] && Word1[len - 1] == Word2[len - 1])
        return 1;
    else
        return 0;
}

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        Answer = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%s", Input1[i]);
        }

        for (int i = 0; i < N; i++)
        {
            scanf("%s", Input2[i]);
        }

        for (int i = 0; i < N; i++)
        {
            Answer = Answer + score(Input1[i], Input2[i]);
        }

        cout << "#" << test_case << " " << Answer << endl;
    }
    return 0;
}