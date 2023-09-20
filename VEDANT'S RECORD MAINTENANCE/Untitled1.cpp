#include<bits/stdc++.h>
using namespace std;

void INSERT(int *A ,  int  n)
{
int i,temp;
for(i=1;i<=n;i++)
{
    temp=A[i];
    while(temp>A[i%2==0?(i/2-1):i/2] and i<=n)
    {
        A[i]=A[i%2==0?(i/2-1):i/2];
        i=i%2==0?(i/2-1):i/2;
        A[i]=temp;
    }
}
}


void DELETE(int *A , int n)
{
//n=9
int x=A[0],i=0,temp;
A[0]=A[n];
temp=A[0];

}


int main()
{
int A[]={20,30,10,15,90,70,45,100,101,1000};
INSERT(A,9);
for(int i=0;i<10;i++)
{
    cout<<A[i]<<" ";
}
cout<<endl;
// int A[]={1000 101 70 90 100 10 45 15 30 20}

}
