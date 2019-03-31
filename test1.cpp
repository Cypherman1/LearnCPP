#include <iostream>
using namespace std;

int test_case, T;
int N, S, Answer;
int Result[50][50];
int side, spot, power;

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d", &N, &S);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                Result[i][j] = 0;
        }
        Answer = 0;
        for (int j = 1; j <= S; j++)
        {
            scanf("%d %d %d", &side, &spot, &power);
            // if (side == 1)
            // {
            //     if (power <= N)
            //     {
            //         if (Result[power - 1][spot] == 0)
            //             Result[power - 1][spot] = 1;
            //         else if (Result[power - 1][spot] == 1)
            //         {
            //             Answer = j;
            //             // break;
            //             goto END;
            //         }
            //     }
            //     if (power <= N - 1)
            //     {
            //         if (Result[power][spot] == 0)
            //             Result[power][spot] = 1;
            //         else if (Result[power][spot] == 1)
            //         {
            //             Answer = j;
            //             // break;
            //             goto END;
            //         }
            //     }
            //     if (power <= N - 2)
            //     {
            //         if (Result[power + 1][spot] == 0)
            //             Result[power + 1][spot] = 1;
            //         else if (Result[power + 1][spot] == 1)
            //         {
            //             Answer = j;
            //             // break;
            //             goto END;
            //         }
            //     }
            // }
            // else if (side == 2)
            // {
            //     if (power <= N)
            //     {
            //         if (Result[spot][power - 1] == 0)
            //             Result[spot][power - 1] = 1;
            //         else if (Result[spot][power - 1] == 1)
            //         {
            //             Answer = j;
            //             // break;
            //             goto END;
            //         }
            //     }
            //     if (power <= N - 1)
            //     {
            //         if (Result[spot][power] == 0)
            //             Result[spot][power] = 1;
            //         else if (Result[spot][power] == 1)
            //         {
            //             Answer = j;
            //             // break;
            //             goto END;
            //         }
            //     }
            //     if (power <= N - 2)
            //     {
            //         if (Result[spot][power + 1] == 0)
            //             Result[spot][power + 1] = 1;
            //         else if (Result[spot][power + 1] == 1)
            //         {
            //             Answer = j;
            //             // break;
            //             goto END;
            //         }
            //     }
            // }
            printf("%d %d %d\n", side, spot, power);
        }

        // END:
        //     printf("#%d %d\n", test_case, Answer);
    }
    return 0;
}
