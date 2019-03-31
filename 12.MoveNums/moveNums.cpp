#include <iostream>

using namespace std;

int test_case, T;
int Answer, N;
int Grid[10][10];
int row, col;

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
                scanf("%d", &Grid[i][j]);
        }

        row = col = 0;
        Answer = 0;
        while (true)
        {
            switch (Grid[row][col])
            {
            case 1:
                col += 1;
                break;
            case 2:
                row += 1;
                break;
            case 3:
                col -= 1;
                break;
            case 4:
                row -= 1;
                break;
            default:
                break;
            }
            if (row < 0 || row >= N || col < 0 || col >= N)
            {
                Answer = -1;
                goto END;
            }
            else
            {
                Answer += 1;
                if (Grid[row][col] == 0)
                    goto END;
            }
            if (Answer > N * N)
            {
                Answer = -1;
                goto END;
            }
        }
    END:
        cout << "#" << test_case << " " << Answer << endl;
    }
    return 0;
}