#include<iostream>
using namespace std;

int main()
{
    int i,n;
    float AvgWT,AvgTAT;
    cout<<"Total number of processes:";
    cin>>n;
    int P[n],BT[n],WT[n],TAT[n];
    cout<<"\nEnter Buist Time of all processes sequentially:\n";
    for(i=0; i<n; i++)
    {
        cin>>BT[i];
    }

    for(i=1; i<n; i++)
    {
        WT[0]=0;
        WT[i]=WT[i-1]+BT[i-1];
    }

    for(i=0; i<n; i++)
    {
        TAT[i]=WT[i]+BT[i];

    }


    cout<<"\nIn the form of table:\n\n";
    cout<<"Process "<<"BT"<<"\t"<<"WT"<<"\t"<<"TAT"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"p"<<i<<"\t"<<BT[i]<<"\t"<<WT[i]<<"\t"<<TAT[i]<<endl;
    }

    int sumwt=0;
    for(i=0; i<n; i++)
    {
        sumwt=WT[i]+sumwt;
    }
    AvgWT=(float)sumwt/n;
    cout<<"\nAverage Waiting Time:"<<AvgWT<<endl;

    int sumtat=0;
    for(i=0; i<n; i++)
    {
        sumtat=TAT[i]+sumtat;
    }
    AvgTAT=(float)sumtat/n;
    cout<<"\nAverage Turn-around Time:"<<AvgTAT<<endl;;

    return 0;
}