#include <iostream>
using namespace std;

int test_case, T;
int N, S;
int Input[50][50];
int Answer;

int main()
{
    int x, y;

    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        Answer = 0;
        scanf("%d %d", &N, &S);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                Input[i][j] = 0;
        }
        for (int i = 0; i < S; i++)
        {
            scanf("%d %d", &x, &y);
            for (int a = -1; a <= 1; a++)
            {
                for (int b = -1; b <= 1; b++)
                {
                    if (x + a >= 0 && x + a < N && y + b >= 0 && y + b < N)
                        Input[x + a][y + b]++;
                }
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (Input[i][j] >= Answer)
                    Answer = Input[i][j];
                // cout << Input[i][j] << "";
            }
            // cout << endl;
        }
        cout << "#" << test_case << " " << Answer << endl;
    }
    return 0;
}