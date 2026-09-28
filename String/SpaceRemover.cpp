#include <iostream>
using namespace std;

int main()
{
    char a[] = "abba nhi manenge";

    for (int i = 0; a[i] != 0; i++)
    {
        if (a[i] == ' ')
        {
            int j = i;
            while (a[j] != '\0')
            {
                a[j] = a[j + 1];
                j++;
            }
        }
    }
    cout << a;
}