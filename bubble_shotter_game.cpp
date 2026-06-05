#include<iostream>
using namespace std;
void display(char bubble[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<bubble[i]<<" ";
	}
}
int main()
{
	char bubble[8]={'R','G','W','B','R','G','W','B'};
	int k,size=8,count=0,pos=-1;
	cout<<"\n!Welcome to the begginer bubble shooter game!";
	cout<<"\nYou have R=Red,G=Green,W=White,B=Blue";
	cout<<"\nYou have following sequence\n";
	while(count<size&&pos!=0)
	{
		display(bubble,size);
		cout<<"\n Enter Your position to shoot from 1 to 8(0 to exit):";
		cin>>pos;
		if(pos==0)
		{
			cout<<"\n Thank you so much for your time";
			break;
		}
		if(pos<0||pos>8)
		{
			cout<<"\nInvalid output kindly input from 1 to 8";
			continue;
		}
		cout<<"\n You chosse the "<<bubble[pos-1]<<"  position so:";
		bubble[pos-1]=' ';
		count=0;
		for(k=0;k<8;k++)
		{
			if(bubble[k]==' ')
			{
			  count++;	
			}
		}
		if(count==size)
		{
			cout<<"\n Congratulations You Cleared all Bubbles.";
		}
	}	
}

