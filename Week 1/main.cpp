#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int state=0,i=0,flag=0;
    char arr[20],current;
    cin>>arr;
    while(arr[i]!='\0')
    {
        current=arr[i++];
        switch(state)
        {
            case 0:
            {
                if(current=='a')
                {
                    state=1;
                }
                else if(current=='b')
                {
                    state=3;
                }
                else
                {
                    flag=1;
                    break;
                }
                break;
            }
            case 1:
            {
                if(current=='a')
                {
                    state=0;
                }
                else if(current=='b')
                {
                    state=2;
                }
                else
                {
                    flag=1;
                    break;
                }
                break;
            }
            case 2:
            {
                if(current=='a')
                {
                    state=3;
                }
                else if(current=='b')
                {
                    state=1;
                }
                else
                {
                    flag=1;
                    break;
                }
                break;
            }
            case 3:
            {
                if(current=='a')
                {
                    state=2;
                }
                else if(current=='b')
                {
                    state=0;
                }
                else
                {
                    flag=1;
                    break;
                }
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Invalid token");
    }
    if(flag==0 && state==0)
    {
        cout<<"String accepted";
    }
    else if(flag==0 && state!=0)
    {
        cout<<"String not accepted";
    }
    return 0;
}
