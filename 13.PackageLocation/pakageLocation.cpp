#include <iostream>
using namespace std;

int test_case, T;
int M, N;
int Input[50][50];
int x, y, S;

int main()
{
    int Rx, Ry;
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d", &M, &N);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
                scanf("%d", &Input[i][j]);
        }
        scanf("%d %d %d", &x, &y, &S);
        Rx = x - 1;
        Ry = y - 1;
        for (int i = 0; i < S; i++)
        {
            switch (Input[Ry][Rx])
            {
            case 1:
                if (Ry - 1 >= 0)
                    Ry--;
                break;
            case 2:
                if (Rx + 1 < M)
                    Rx++;
                break;
            case 3:
                if (Ry + 1 < N)
                    Ry++;
                break;
            case 4:
                if (Rx - 1 >= 0)
                    Rx--;
            default:
                break;
            }
        }
        cout << "#" << test_case << " " << Rx + 1 << " " << Ry + 1 << endl;
        // for (int i = 0; i < N; i++)
        // {
        //     for (int j = 0; j < M; j++)
        //         cout << Input[i][j] << " ";
        //     cout << endl;
        // }
    }
    return 0;
}