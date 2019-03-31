#include <iostream>

using namespace std;

int test_case, T;
int Answer, N, nxta, current_att;
int Input[10000];

int main()
{

    setbuf(stdout, NULL);
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
            scanf("%d", &Input[i]);
        Answer = 0;
        int i = 0;
        current_att = Input[0];
        while (i < N - 1)
        {
            if (Input[i + 1] > current_att - 1)
            {
                current_att = Input[i + 1];
                Answer++;
            }
            else if (Input[i + 1] == current_att - 1)
            {
                current_att = Input[i + 1];
            }
            else if (Input[i + 1] < current_att - 1)
            {
                current_att = current_att - 1;
            }
            i++;
        }
        cout << "#" << test_case << " " << Answer << endl;
    }
    return 0;
}