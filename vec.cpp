#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class student
{
    public:
    char name[10],dob[10];
    int r;
    void getdata()
    {
        cout<<"Enter the name\n";
        cin>>name;
        cout<<"Enter the roll no\n";
        cin>>r;
        cout<<"Enter the dob\t";
        cin>>dob;

    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no. :"<<r<<endl;
        cout<<"DOB :"<<dob<<endl;
    }
    bool operator ==(const student &st)
     {
        return(r==st.r);
     }

};

bool check1(student&s1, student&s2)
{
    return(s1.r<s2.r);
}

void sorting(vector<student>&vec)
{
    sort(vec.begin(),vec.end(),check1);
}

int main()
{
    vector <student> v;
    student s;
    int n,ch;
    vector<student>::iterator itr;
    cout<<"Enter total no of student records to add\n";
    cin>>n;
    do{
        cout<<"1.Enter\t2.Search\t3.display\t4.sort\t5.delete\n";
        cin>>ch;
        switch (ch)
        {
            case 1:
            cout<<"enter student data\n";
            s.getdata();
            v.push_back(s);
            break;
            case 2:
            cout<<"Enter roll no to search\t";
            cin>>s.r;
            itr=find(v.begin(),v.end(),s);
            if(itr!=v.end())
            {
                itr->display();
            }
            break;
            case 3:
            cout<<"Displaying records";
            for(itr=v.begin();itr!=v.end();itr++)
            {
                itr->display();
            }
            break;
            case 4:
            cout<<"sorting the container";
            sorting(v);
            break;
            case 5:
            v.pop_back();
            cout<<"Last entry deleted";
            break;

        }

    }while(ch!=0);
}