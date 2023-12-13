#include<iostream>
using namespace std;
class publication
{
    public:
    
    char name[20],material[10];
    float price;
    void getdata()
    {
        cout<<"Enter title name: \t";
        cin>>name;
        try{
        cout<<"Enter price: \t";
        cin>>price;
        if (price<=0)
            throw price;
        }catch(float i){
            cout<<"Price entry invalid \n";
            price=0;

        }

    }
    void display()
    {
        cout<<"Title\t"<<name<<endl;
        cout<<"Price\t"<<price<<endl;
    }
};

class book:public publication
{
    public:
    int pagecount;
    void getdata()
    {
        publication::getdata();
        try{
        cout<<"Enter pagecount: \t";
        cin>>pagecount;
        if(pagecount<=0) throw pagecount;
        }catch(int i){
            cout<<"Invalid pagecount entry";
            pagecount=0;
        }
    }
    void display()
    {
        publication::display();
        cout<<"Page count \t"<<pagecount<<endl;
    }
};

class tape:public publication
{
    public:
    float playtime;
    void getdata()
    {
        publication::getdata();
        try{
        cout<<"Enter playtime: \t";
        cin>>playtime;
        if (playtime<=0) throw playtime;
        }catch(float i){
            cout<<"Invalid playtime entry";
            playtime=0;
        }
    }
    void display()
    {
        publication::display();
        cout<<"Playtime in minutes \t"<<playtime<<endl;
    }
};

int main()
{
    int ch;
    book b;
    tape t;
    do{
    cout<<"Enter your choice\n";
    cout<<"1.Add book info\n2.Add tape info\n3.Display book info\n4.Display tape info\n0.Exit\n";
    cin>>ch;
    switch (ch)
    {
        case 1:b.getdata();
                break;
        case 3:b.display();
                break;
        case 2: t.getdata();
                break;
        case 4: t.display();
                break;
        case 0: break;
        default: cout<<"Enter valid input"<<endl;
    }

    }while(ch!=0);
}
