#include<bits/stdc++.h>
using namespace std;
class cric_note
{
    int run=0,run2=0,wicket1=0,wicket2=0,gc,gc1;
    string jj,jk;
public:
    void get_run(string s1,int n)
    {
        jj=s1;
        int face,data[100],i,j,c=0,need[100],g,number,pk=0,e,d;
        int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
        srand(time(0));
        for( gc=1; gc<=n; gc++)
        {
            e=0;
            c=1;
            for(i=0; i<6000000; i++)
            {
                face=1+rand()%12;
                if(e==12)
                {
                    break;
                }
                if(c==1)
                {
                    data[face]=0;
                    a1=face;
                    c++;
                    e++;
                }
                else if(c==2&&face!=a1)
                {
                    data[face]=3;
                    a2=face;
                    c++;
                    e++;
                }
                else if(c==3&&face!=a1&&face!=a2)
                {
                    data[face]=0;
                    a3=face;
                    c++;
                    e++;
                }
                else if(c==4&&face!=a1&&face!=a2&&face!=a3)
                {
                    data[face]=2;
                    a4=face;
                    c++;
                    e++;
                }
                else if(c==5&&face!=a1&&face!=a2&&face!=a3&&face!=a4)
                {
                    data[face]=0;
                    a5=face;
                    c++;
                    e++;
                }
                else if(c==6&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5)
                {
                    data[face]=1;
                    a6=face;
                    c++;
                    e++;
                }
                else if(c==7&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6)
                {
                    data[face]=0;
                    a7=face;
                    c++;
                    e++;
                }
                else if(c==8&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7)
                {
                    data[face]=4;
                    a8=face;
                    c++;
                    e++;
                }
                else if(c==9&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a8)
                {
                    data[face]=0;
                    a9=face;
                    c++;
                    e++;
                }
                else if(c==10&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a9)
                {
                    data[face]=1;
                    a10=face;
                    c++;
                    e++;
                }
                else if(c==11&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a8&&face!=a9&&face!=a10)
                {
                    data[face]=0;
                    a11=face;
                    c++;
                    e++;
                }
                else if(c==12&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a8&&face!=a9&&face!=a10&&face!=a11)
                {
                    data[face]=6;
                    a12=face;
                    c++;
                    e++;
                }

            }
            cout<<endl<<endl;
            cout<< "You can choose any number from the range of 1 to 12:"<<endl;
            cout<<s1<< " now choose:";
            cin>>number;
            for(int k=0; k<1; k++)
            {
                if(data[number]==0)
                {
                    wicket1++;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                }
                else if(data[number]==3)
                {
                    run+=3;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                }
                else if(data[number]==2)
                {
                    run+=2;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                }
                else if(data[number]==1)
                {
                    run+=1;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                }
                else if(data[number]==4)
                {
                    run+=4;
                    cout<< "Run  Wicket Over"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                }
                else if(data[number]==6)
                {
                    run+=6;
                    cout<< "Run  Wicket Over"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                }
                if(wicket1==5)
                {
                    d=0;
                    cout<<endl<<endl;
                    cout<< s1<<"'s all the wickets have been fallen"<<endl;
                    cout<< s1<<"'s whole run is:"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                    d++;
                    break;
                }
                else if(gc==n)
                {
                    cout<<endl<<endl;
                    cout<< "Unfortunately the over is over"<<endl;
                    cout<<s1<< "'s whole run is:"<<endl;
                    cout<<run<<setw(4)<< "/"<<wicket1<<setw(4)<<"/"<<gc<<endl;
                    break;
                }
            }
            if(d==1)
            {
                d=0;
                break;
            }
        }
    }
    void get_run2_again(string s2,int n)
    {
        jk=s2;
        int face,data[100],i,j,c=0,need[100],g,number,wicket=0,pk=0,e,d;
        int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
        srand(time(0));
        for(gc1=1; gc1<=n; gc1++)
        {
            e=0;
            c=1;
            for(i=0; i<6000000; i++)
            {
                face=1+rand()%12;
                if(e==12)
                {
                    break;
                }
                if(c==1)
                {
                    data[face]=0;
                    a1=face;
                    c++;
                    e++;
                }
                else if(c==2&&face!=a1)
                {
                    data[face]=3;
                    a2=face;
                    c++;
                    e++;
                }
                else if(c==3&&face!=a1&&face!=a2)
                {
                    data[face]=0;
                    a3=face;
                    c++;
                    e++;
                }
                else if(c==4&&face!=a1&&face!=a2&&face!=a3)
                {
                    data[face]=2;
                    a4=face;
                    c++;
                    e++;
                }
                else if(c==5&&face!=a1&&face!=a2&&face!=a3&&face!=a4)
                {
                    data[face]=0;
                    a5=face;
                    c++;
                    e++;
                }
                else if(c==6&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5)
                {
                    data[face]=1;
                    a6=face;
                    c++;
                    e++;
                }
                else if(c==7&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6)
                {
                    data[face]=0;
                    a7=face;
                    c++;
                    e++;
                }
                else if(c==8&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7)
                {
                    data[face]=4;
                    a8=face;
                    c++;
                    e++;
                }
                else if(c==9&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a8)
                {
                    data[face]=0;
                    a9=face;
                    c++;
                    e++;
                }
                else if(c==10&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a9)
                {
                    data[face]=1;
                    a10=face;
                    c++;
                    e++;
                }
                else if(c==11&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a8&&face!=a9&&face!=a10)
                {
                    data[face]=0;
                    a11=face;
                    c++;
                    e++;
                }
                else if(c==12&&face!=a1&&face!=a2&&face!=a3&&face!=a4&&face!=a5&&face!=a6&&face!=a7&&face!=a8&&face!=a9&&face!=a10&&face!=a11)
                {
                    data[face]=6;
                    a12=face;
                    c++;
                    e++;
                }

            }
            cout<<endl<<endl;
            cout<< "You can choose any number from the range of 1 to 12:"<<endl;
            cout<<s2<< " now choose:";
            cin>>number;
            for(int k=0; k<1; k++)
            {
                if(data[number]==0)
                {
                    wicket2++;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                }
                else if(data[number]==3)
                {
                    run2+=3;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                }
                else if(data[number]==2)
                {
                    run2+=2;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                }
                else if(data[number]==1)
                {
                    run2+=1;
                    cout<< "Run Wicket Over"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                }
                else if(data[number]==4)
                {
                    run2+=4;
                    cout<< "Run  Wicket Over"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                }
                else if(data[number]==6)
                {
                    run2+=6;
                    cout<< "Run  Wicket Over"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                }
                if(wicket2==5)
                {
                    d=0;
                    cout<<endl<<endl;
                    cout<< s2<<"'s all the wickets have been fallen"<<endl;
                    cout<< s2<<"'s whole run is:"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                    d++;
                    break;
                }
                else if(gc1==n)
                {
                    cout<<endl<<endl;
                    cout<< "Unfortunately the over is over"<<endl;
                    cout<<s2<< "'s whole run is:"<<endl;
                    cout<<run2<<setw(4)<< "/"<<wicket2<<setw(4)<<"/"<<gc1<<endl;
                    break;
                }
            }
            if(d==1)
            {
                d=0;
                break;
            }
        }
    }
    void result()
    {
        if(run==run2)
        {
            cout<< "The match has been settled as draw"<<endl;
        }
        else if(run>run2)
        {
            cout<<endl<<endl;
            cout<<jj<< " is the winner by scoring "<<endl;
            cout<<run<<"/"<<wicket1<<"/"<<gc-1<<endl;
        }
        else
        {
            cout<<endl<<endl;
            cout<<jk<< " is the winner by scoring "<<endl;
            cout<<run2<< "/"<<wicket2<< "/"<<gc1-1<<endl;
        }
    }
};
int main()
{
    cric_note g1,g2;
    string name1,name2;
    int number;
    cout<< "Enter the name of the  first player:";
    getline(cin,name1);
    cout<< "Enter the name of the second player:";
    getline(cin,name2);
    cout<< "Enter the number of bowl be played:";
    cin>>number;
    g1.get_run(name1,number);
    g1.get_run2_again(name2,number);
    g1.result();
    return 0;
}
