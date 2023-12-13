#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,p;
    string name,key;
    cout<<"Enter total number of states you want to enter";
    cin>>n;
    map<string,int> state;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name of state : ";
        cin>>name;
        cout<<"Enter population : ";
        cin>>p;
        state.insert(make_pair(name,p));

    }

    cout<<"Enter name of state you want to search :";
    cin>>key;
    for(auto itr=state.begin();itr!=state.end();itr++)
    {
        if(itr->first==key)
        {
            cout<<itr->second;
        }
    }
    return 0;
}