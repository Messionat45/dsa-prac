#include<iostream>
using namespace std;

int main()
{
	int i,j,bub[30],temp,num;
	cout<<"enter the no of digits ";
	cin>>num;
	cout<<"enter the no";
	for(i=0;i<num;i++)
	cin>>bub[i];
	
	for(i=0;i<num-1;i++)
		{	//int sort=0;
			for(j=0;j<num-i-1;j++)
			{
			if(bub[j]>bub[j+1])
				{
						temp=bub[j];
						bub[j]=bub[j+1];
						bub[j+1]=temp;
			//			sort=1;		
				}
			}//if(sort==0)
			//break;
		}
		cout<<"the sorted array is";
		for(i=0;i<num;i++)
		cout<<bub[i];
		return 0;
}
