#include<iostream>
#include<fstream>
using namespace std;

class student
{
    public:
    int roll;
    char name[20],div[5];
    void getdata()
    {
        cout<<"Enter the name of student";
        cin>>name;
        cout<<"Enter roll no of student";
        cin>>roll;
        cout<<"Enter division of student";
        cin>>div;
    }
    void display()
    {
        
        cout<<name<<"\t"<<roll<<"\t"<<div<<endl;
    }

};

int main()
{
    int n,pos,num;
    student s1;
    cout<<"Enter total number of student entries \t";
    cin>>n;
    ofstream out("a");
    for (int i=0;i<n;i++)
    {
        s1.getdata();
        out.write((char*)&s1,sizeof(s1));
    }
    out.close();

    ifstream in("a");
    cout<<"Name\troll \t division\n";
    for(int i=0;i<n;i++)
    {
        in.read((char*)&s1,sizeof(s1));
        s1.display();
    }


    ifstream fin("a");
    cout<<"Enter the position of student you want to search ";
    cin>>num;
    pos=(num-1)*sizeof(s1);
    fin.seekg(pos);
    fin.read((char*)&s1,sizeof(s1));
    cout<<"Name\troll \t division\n";
    s1.display();






}