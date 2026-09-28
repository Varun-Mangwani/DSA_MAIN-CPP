#include <iostream>
using namespace std;

void Swapc(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    char rev[] = "hello i am varun";
    int cnt = 0;
    for (int i = 0; rev[i] != 0; i++)
    {
        cnt++;
        if (cnt > 1)
        {
            if (rev[i] == ' ')
            {
                int k = 0;
                while (k < cnt/2)
                {
                    Swapc(&rev[i-cnt], &rev[i-k]);
                    cout << cnt/2;
                    k++;
                }
                cnt = 0;
            }
        }
    }
    cout << rev;
}