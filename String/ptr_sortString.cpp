#include <iostream>
using namespace std;

int strlen(char *a)
{
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

void swpChar(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    char a[26] = "zxwqwertyuiopal";

    for (int i = 0; a[i] != 0; i++)
    {
        for (int j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] > a[j])
            {
                swpChar(&a[i],&a[j]);
            }
        }
    }

    cout << a;
}