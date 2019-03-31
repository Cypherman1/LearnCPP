#include <iostream>

using namespace std;

int test_case, T;
string S;
int N, Answer;
char Input[500];
int num;
char str[8];

bool checkstr(string S, int idx)
{
    if (Input[idx] == S[0] && Input[idx + 1] == S[1] && Input[idx + 2] == S[2])
        return true;
    return false;
}

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        cin >> S;
        scanf("%d", &N);
        Answer = 0;
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &num);
            for (int j = 0; j < 8; j++)
            {
                num % 2 == 0 ? Input[i * 8 + 7 - j] = '0' : Input[i * 8 + 7 - j] = '1';
                num = num / 2;
            }
        }
        for (int i = 0; i < N * 8 - 2; i++)
        {
            if (checkstr(S, i))
                Answer++;
        }

        printf("# %d %d \n", test_case, Answer);
    }

    return 0;
}