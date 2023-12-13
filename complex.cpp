#include<iostream>
using namespace std;

class complex{
    public:
    int real,imag;
    complex(){
        real=0;
        imag=0;
    }
    void display()
    {
        cout<<"Complex number created using constructor \n";
        cout<<real<<"+"<<imag;
    }

    complex operator+ (complex b2)
    {
        complex b3;
        b3.real=real+b2.real;
        b3.imag=imag+b2.imag;
        return b3;
    }

    complex operator* (complex b2)
    {
        complex b3;
        b3.real=(real*b2.real)-(imag*b2.imag);
        b3.imag=(imag*b2.imag)+(real*b2.real);
        return b3;
    }
    friend istream& operator>>(istream& input,complex& t);
    friend ostream& operator<<(ostream& output,complex& t);


};

istream &operator>>(istream &is,complex &b)
{
    cout<<"Enter real number";
    is>>b.real;
    cout<<"Enter imaginary number ";
    is>>b.imag;
    return is;
}

ostream &operator<<(ostream &os,complex &b)
{
    cout<<"Complex number iis :";
    os<<b.real<<"+"<<b.imag;
    return os;
}

int main()
{
    complex b,b1,b2,b3;
    int ch;
    b.display();
    do{
        cout<<"Select any action \n";
        cout<<"1.Enter the complex numbers\n2.Display addition \n3.Display multiplication\n0.Exit ";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Enter the first complex number\n";
                    cin>>b1;
                    cout<<"Enter the second complex number\n ";
                    cin>>b2;
                    cout<<b1;
                    cout<<b2;
                    break;
            case 2:b3=b1+b2;
                    cout<<"Addition is "<<b3;
                    break;
            case 3: b3=b1*b2;
                    cout<<"Multiplication is "<<b3;
                    break;
            
        }


    }while(ch!=0);

}










