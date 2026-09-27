#include <iostream>
#include <string.h>
using namespace std;

void swapString(char s1[], char s2[])
{
    int sl1 = strlen(s1);
    int sl2 = strlen(s2);
    int i = 0;
    char tmp[sl1];
    // length aagyi
    if (sl1 == sl2)
    {
        while (s1[i] != '\0')
        {
            tmp[i] = s1[i];
            i++;
        }
        tmp[i] = '\0';
        i = 0;

        while (s2[i] != 0)
        {
            s1[i] = s2[i];
            i++;
        }
        i = 0;
        while (s2[i] != '\0')
        {
            s2[i] = tmp[i];
            i++;
        }
    }
    cout << s1;
    cout << '\n'
         << s2;
}

int main()
{
    char s1[20] = "varun";
    char s2[20] = "tarun";
    swapString(s1, s2);
}