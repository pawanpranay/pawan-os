#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int i,j,pro,sum=0,sum1=0;
	char a[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==0&&(j==0||j==1))
		{
			cout<<"enter resource name"<<endl;
			cin>>a[i][j];
		  }
			if(i==1&&(j==0||j==1))
			{
				cout<<"enter no of resources avaliable"<<endl;
				cin>>a[i][j];
			}
			
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<ends;
		}
		cout<<endl;
	}
	cout<<"enter no of process"<<endl;
	cin>>pro;
	char p[pro][1];
	cout<<"enter process name"<<endl;
	for(i=0;i<pro;i++)
	{
		for(j=0;j<1;j++)
		
		cin>>p[i][j];
	}
	cout<<"entered process are"<<endl;
	for(i=0;i<pro;i++)
	{
		for(j=0;j<1;j++)
		{
	 cout<<p[i][j];
        }
        cout<<endl;
	 	
	}
	int alloc[pro][2];
	cout<<"enter no of resources allocated to each process"<<endl;
	for(i=0;i<pro;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>alloc[i][j];
		}
		cout<<endl;
	}
     
	for(i=0;i<pro;i++)
	{
		sum=sum+alloc[i][0];
		sum1=sum1+alloc[i][1];
	}
	for(i=0;i<pro;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<ends<<alloc[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<ends<<"---    ----"<<endl;
	int sum_alloc[1][2]={sum,sum1};
	for(i=0;i<1;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<sum_alloc[i][j];
		}
		cout<<endl;
	}
	cout<<ends<<"---   ----"<<endl;
	int maxneed[pro][2];
	cout<<"enter max need of resources for each process"<<endl;
	for(i=0;i<pro;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>maxneed[i][j];
		}
	}
	int remaining[pro][2];
	cout<<"remaining need of process is : max - allocated"<<endl;
	for(i=0;i<pro;i++)
	{
		for(j=0;j<2;j++)
		{
			remaining[i][j]=maxneed[i][j]-alloc[i][j];
		}
	}
	for(i=0;i<pro;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<ends<<remaining[i][j];
		}
		cout<<endl;
	}
	int avali[pro+1][2];
	int av=a[1][0]-'0';
	int av1=a[1][1]-'0';
	avali[0][0]=av-sum_alloc[0][0];
	avali[0][1]=av1-sum_alloc[0][1];
	i=0,j=0;
	char safe[pro][1];
