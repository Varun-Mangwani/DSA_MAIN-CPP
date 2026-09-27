#include<iostream>
using namespace std;

void swapChar(char *a,char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

char * strsrt(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        for (int j = i+1; a[j] != '\0'; j++)
        {
            if(a[i] > a[j])
            {
                swapChar(&a[i],&a[j]);
            }
        }
        
    }
    return a;
    
}


int main()
{
    char sen[] = "varun is a good good boy";
    char *newStr = strsrt(sen);
    cout << newStr;
    char inst;int count=0;
    int max=0;
    for (int i = 0; newStr[i] != '\0'; i++)
    {
       
            if(sen[i-1] == sen[i])
            {
                count++;
            }else
            {
                max = count > max? count : max;
                count = 0;
            }
        
    }
    cout << " Max count is " << max+1; 
    
    
}