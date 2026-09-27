#include<iostream>
using namespace std;

int strlen(char st[]) 
{
    int i=0;
    while (st[i] != '\0')
    {
        i++;
    }
    return i;
    
}

void StrSwp(char *a , char *b) 
{
    int len = strlen(a); int len1 = strlen(b);
    char *tmp;
    if(len == len1)
    {
        tmp = new char[len1];
        int i=0;
        while (a[i] != '\0')
        {
            tmp[i] = a[i];
            i++;
        }
        tmp[i] = '\0';
        i=0;
        while (b[i] != '\0')
        {
            a[i] = b[i];
            i++;
        }
        i=0;
        while (b[i] != 0)
        {
            b[i] = tmp[i];
            i++;
        }

        
        
        
    }
    

}

int main()
{
    char nm[] = "varun";
    char nm1[] = "krish";
    StrSwp(nm,nm1);
    cout << nm;
    cout << '\n' << nm1;
}