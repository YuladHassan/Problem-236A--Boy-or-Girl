#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=1000;//changed here for testing purpose
    string name;
    cin>>name;
    sort(name.begin(),name.end());

        for (int i=0;i<name.length();i++)
        {
            if(name[i]!=name[i+1]){
                count++;
            }
        }
//cout<<count<<endl;
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
