#include <iostream>
using namespace std;

int test_case, T;
int N, D, Answer;
int Cells[100];

int main()
{
    int pos, count, cpo;
    bool isdone;
    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d %d", &N, &D);
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Cells[i]);
        }
        Answer = 0;
        pos = 0;
        isdone = false;
        for (count = 1; count <= N; count++)
        {
            pos += D;
            cpo = 0;
            while (Cells[pos] == 1 && cpo < D)
            {
                pos--;
                cpo++;
            }
            if (pos >= N - 1)
            {
                isdone = true;
                break;
            }
        }
        if (isdone)
            Answer = count;
        else
            Answer = 0;
        cout << "#" << test_case << " " << Answer << endl;
    }
    return 0;
}