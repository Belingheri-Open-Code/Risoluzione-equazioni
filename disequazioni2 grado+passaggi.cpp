#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <math.h>
using namespace std;
void gotoxy( int column, int line )
{
COORD coord;
coord.X = column;
coord.Y = line;
SetConsoleCursorPosition(
GetStdHandle( STD_OUTPUT_HANDLE ),
coord
);
}
int main ()
{
    //
    float a,b,c,delta,x1,x2,x;
    int f,g;
    //
    cout<<" contare anche virgole e segno "<<endl;
    cout<<endl<<" da quanti caratteri e' formata a?: ";
    cin>>f;
    cout<<endl<<" da quanti caratteri e' formata b?: ";
    cin>>g;
    system("cls");
    
    
    gotoxy(f+1,0);
    cout<<"x^2+ ";
    gotoxy(f+6+g,0);
    cout<<"x+ ";
    gotoxy(1,0);
    cin>>a;
    gotoxy(9,0);
    cin>>b;
    gotoxy(f+9+g,0);
    cin>>c;
    
    if (((int)b%2)==0)
    {
               delta=pow((b/2),2)-(a*c);
               cout<<endl<<endl<<" delta quarti( "<<delta<<" ) = "<<"("<<b<<"/2)^2-( "<<a<<"*"<<c<<" )"<<endl<<endl;
               if (delta<0)
               {
                           cout<<" il Delta e' negativo quindi: NESSUNA SOLUZIONE "<<endl<<endl; 
               }
               else if (delta==0)
               {
                    cout<<" il Delta e' uguale a zero quindi le due soluzioni coincidono "<<endl;
                    x=(-b/2)/a;
                    if (b>0)
                    {
                            cout<<" x ( "<<x<<" )=("<<b<<"/2) / "<<a<<endl;
                            cout<<endl<<"     il risultato e': "<<x<<endl<<endl;
                    }
               }
               else
               {
                   cout<<" il Delta e' maggiore di 0 quindi ci sono 2 soluzioni distinte"<<endl;
                   x1=((-b/2)+(sqrt(delta)))/a;
                   cout<<endl<<" x1 ("<<x1<<") = (-( "<<b<<"/2) + radq("<<delta<<"))/"<<a<<endl<<endl;
                   
                   x2=((-b/2)-(sqrt(delta)))/a; 
                   cout<<endl<<" x2 ("<<x2<<") = (-( "<<b<<"/2) - radq("<<delta<<"))/"<<a<<endl<<endl;
                   cout<<endl<<"     il risultato sono: "<<x1<<" e "<<x2<<endl<<endl;
               }
               
               
    }
    else
    {
        delta=(pow(b,2))-(4*a*c);
        cout<<endl<<endl<<" delta("<<delta<<") = ("<<b<<"^2)-( 4* "<<a<<"* "<<c<<" )"<<endl<<endl;
        if (delta<0)
        {
                    cout<<" il Delta e' negativo quindi: NESSUNA SOLUZIONE "<<endl<<endl; 
        }
        else if (delta==0)
        {
                cout<<" il Delta e' uguale a zero quindi le due soluzioni coincidono "<<endl;
                x=(-(b))/(2*a);
                if (b>0)
                {
                            cout<<" x ( "<<x<<" )="<<b<<" /(2* "<<a<<" )"<<endl;
                            cout<<endl<<"     il risultato e': "<<x<<endl<<endl;
                }
        }
        else
        {
                    cout<<" il Delta e' maggiore di 0 quindi ci sono 2 soluzioni distinte"<<endl<<endl;
                    x1=((-b)+(sqrt(delta)))/(2*a);
                    cout<<endl<<" x1 ("<<x1<<") = (-( "<<b<<") + radq("<<delta<<"))/(2*"<<a<<")"<<endl<<endl;
                   
                    x2=((-b)-(sqrt(delta)))/(2*a); 
                    cout<<endl<<" x2 ("<<x2<<") = (-( "<<b<<") - radq("<<delta<<"))/(2*"<<a<<")"<<endl<<endl;
                    cout<<endl<<"     il risultato sono: "<<x1<<" e "<<x2<<endl<<endl;   
        }
    }
    
  
    
    
    
    system("pause"); 
}


