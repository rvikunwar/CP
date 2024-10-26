// Petya and Strings.cpp


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        long sum1=0,sum2=0;
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]>='A'&& s1[i]<='Z')
                s1[i]=s1[i] - 'A' + 97;

            if(s2[i]>='A'&& s2[i]<='Z')
                s2[i] = s2[i] - 'A' + 97;
        }
        for(i=0; i<s2.size(); i++)
        {
            if(s1[i]>s2[i])
                {
                    cout<<"1\n";
                    return 0;
                }

            if(s2[i] > s1[i]){
                cout<<"-1\n";
                return 0;
            }
        }
        cout<<"0\n";
    }

    return 0;
}