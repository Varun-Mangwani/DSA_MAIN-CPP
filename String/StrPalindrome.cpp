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
int strpali(char *a)
{
    int len = strlen(a);

    for (int i = 0; i < len / 2; i++)
    {

        if (a[i] != a[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[200] = "abra";
    // cin.getline(a, 200);
    bool pali = strpali(a);

    if (pali)
    {
        cout << "Congo...String is Plindrome..";
    }
    else
    {
        cout << "Sorry..String is Not Plindrome..";
    }
    return 0;
}