#include<bits/stdc++.h>
using namespace std;
class cric_note
{
public:
    void get_run(string s1)
    {
        int face,data[100],i,j,c=0,need[100],g,number,run=0,wicket=0,pk=0;
        srand(time(0));
        for(int gc=0;gc<10;gc++)
        {
            for(i=0; i<6000000; i++)
            {
                face=1+rand()%12;
                if(c==0)
                {
                    data[face]=0;
                    need[c]=face;
                    c++;
                }
                else if(c==12)
                {
                    c=0;
                    break;
                }
                else if(c>0)
                {
                    for(j=0; j<c; j++)
                    {
                        if(face==need[j])
                        {
                            g++;
                            break;
                        }
                    }
                    if(g==1)
                    {
                        g=0;
                        continue;
                    }
                }
                else if(c==1)
                {
                    data[face]=3;
                    need[i]=face;
                    c++;
                }
                else if(c==2)
                {
                    data[face]=0;
                    need[i]=face;
                    c++;
                }
                else if(c==3)
                {
                    data[face]=2;
                    need[i]=face;
                    c++;
                }
                else if(c==4)
                {
                    data[face]=0;
                    need[i]=face;
                    c++;
                }
                else if(c==5)
                {
                    data[face]=1;
                    need[i]=face;
                    c++;
                }
                else if(c==6)
                {
                    data[face]=0;
                    need[i]=face;
                    c++;
                }
                else if(c==7)
                {
                    data[face]=4;
                    need[i]=face;
                    c++;
                }
                else if(c==8)
                {
                    data[face]=0;
                    need[i]=face;
                    c++;
                }
                else if(c==9)
                {
                    data[face]=1;
                    need[i]=face;
                    c++;
                }
                else if(c==10)
                {
                    data[face]=0;
                    need[i]=face;
                    c++;
                }
                else if(c==11)
                {
                    data[face]=6;
                    need[i]=face;
                    c++;
                }
            }
            for(i=1;i<=12;i++)
            {
                cout<<data[i]<<setw(8)<<endl;
            }
            cout<<endl<<endl;
            if(wicket==5)
            {
                cout<< s1<<"'s all wickets have been fallen"<<endl;
                cout<< s1<<"'s whole run is:"<<endl;
                cout<<run<< "/"<<wicket<<endl;
                break;
            }
            cout<< "You can choose any number from the range of 1 to 12:"<<endl;
            cout<<s1<< " now choose:";
            cin>>number;
            for(int k=0; k<1; k++)
            {
                if(data[number]==0)
                {
                    wicket++;
                    cout<<run<< "/"<<wicket<<endl;
                }
                else if(data[number]==3)
                {
                    run+=number;
                    cout<<run<< "/"<<wicket<<endl;
                }
                else if(data[number]==2)
                {
                    run+=number;
                    cout<<run<< "/"<<wicket<<endl;
                }
                else if(data[number]==1)
                {
                    run+=number;
                    cout<<run<< "/"<<wicket<<endl;
                }
                else if(data[number]==4)
                {
                    run+=number;
                    cout<<run<< "/"<<wicket<<endl;
                }
                else if(data[number]==6)
                {
                    run+=number;
                    cout<<run<< "/"<<wicket<<endl;
                }
            }
        }
    }

};
int main()
{
    cric_note g1;
    string name1;
    cout<< "Enter the name of the player:";
    getline(cin,name1);
    g1.get_run(name1);
    return 0;
}
