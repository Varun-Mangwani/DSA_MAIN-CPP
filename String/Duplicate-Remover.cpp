#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char sen[] = "hi i am varun mangwani";
    int len = strlen(sen);
    for (int i = 0; sen[i] != 0; i++)
    {
        for (int j = i + 1; sen[j] != 0; j++)
        {
            if (sen[i] != 32)
            {
                if (sen[i] == sen[j])
                {
                    int k = j;
                    while (sen[k] != '\0')
                    {
                        sen[k] = sen[k + 1];
                        k++;
                    }
                    j--;
                }
                
            }
        }
    }
    cout << sen;
}