#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string str;
        cin>>str;
        int n=str.length();
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(str[i] == str[(i+1)%n])
            {
                if(str[i] == 'R')
                {

                    count1++;
                }
                else{
                    count2++;
                }
            }
        }
        if((count1==1 && count2==1) || (count1==0 && count2==0))
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
        t=t-1;
    }
}
