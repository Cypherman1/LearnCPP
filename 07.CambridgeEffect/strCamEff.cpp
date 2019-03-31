#include <iostream>
#include <string>

using namespace std;

int test_case, T;
int N, Answer;
string Input1[30], Input2[30];
int count(string word1, string word2)
{
    int len = word1.length();
    if (word1 == word2)
        return 2;
    else if (word1[0] == word2[0] && word1[len - 1] == word2[len - 1])
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
            cin >> Input1[i];
            // scanf("%s", Input1[i]);
            // scanf("%s", Input2[i]);
        }

        for (int i = 0; i < N; i++)
        {
            cin >> Input2[i];
            // scanf("%s", Input1[i]);
            // scanf("%s", Input2[i]);
        }

        for (int i = 0; i < N; i++)
        {
            Answer = Answer + count(Input1[i], Input2[i]);
        }

        cout << "#" << test_case << " " << Answer << endl;
    }
    return 0;
}