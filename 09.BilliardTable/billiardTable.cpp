#include <iostream>

using namespace std;

int test_case, T;
int R, C, A, B, N;
int AR, AC;

int main()
{
    setbuf(stdout, NULL);
    scanf("%d", &T);
    int Rd, Cd, i;
    for (test_case = 1; test_case <= T; test_case++)
    {
        AR = AC = 0;
        Rd = Cd = 1;
        scanf("%d %d %d %d %d", &R, &C, &A, &B, &N);
        AR = A;
        AC = B;
        i = 0;
        while (i < N)
        {
            if (AR + Rd > R - 1 || AR + Rd < 0)
                Rd *= -1;
            if (AC + Cd > C - 1 || AC + Cd < 0)
                Cd *= -1;
            AR = AR + Rd;
            AC = AC + Cd;
            i++;
        }
        cout << "#" << test_case << " " << AR << " " << AC << endl;
    }
    return 0;
}