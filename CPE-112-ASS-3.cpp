#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class suarez				//pangan sa akong class nga gegamit
	{
		public:
		long input();
		long palindromic_prime(long x);				//function for palindromic prime ni sya nga getawag
		void fquiz(long num[1000],long size);
			long i,num,size;
			long rev,rem,bin,base,key,pdtemp,pdnum,count,j,index=0,temp,s,pdnumber,count1;
	};
int main() 
{
	long i,inp[1000],size;					//ga initialize ug balik dri
	suarez computer;						//pangan sa akong class ug object pod
		cout<<"INPUT:";						//kung sa c pani mao ni ang ga printf
	size=0;
		for(i=0;;i++)						//code ni sya sa pagbutang sa input nga ge break
		{
			cin>>inp[i];
			
			if(inp[i]==0)
			{
				break;
			}
			size++;
		}
	computer.fquiz(inp,size);				//mao nani ang gepangtawag gamit ang object nga computer
			
}
	
	
	//mao na ni ang process pagkuha sa palindromic prime ug given na ni sya sa mga past quizes
long suarez::palindromic_prime(long x)
{
	count=0;
	num=x;
	for(j=2;j<num;j++)
	{
		if(num%j==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		pdtemp=num;
		bin=0;
		base=1;
			
		for(;pdtemp>0;)
		{
			rem=pdtemp%2;
			bin=bin+(rem*base);
			base=base*10;
			pdtemp=pdtemp/2;
		}
		key=bin;
		temp=0;
		rev=0;
		
		for(;key!=0;)
		{
			temp=key%10;
			key=key/10;
			rev=temp+(rev*10);		
		}
	
		if(rev==bin)
		{
		//	cout<<endl;
		//	num[i]=143;
		//	cout<<num[i]<<" ";
			
			return 1;
		}
		else
		{
		//		cout<<num[i]<<" ";
			return 0;
		}
	}
		else
		{
			return 0;
		}
}

void suarez::fquiz(long num[1000],long size)
{
	for(i=3;i<size;i++)
	{
	
	if(palindromic_prime(i)==1)
	{
		num[i]=143;
	
	}
	}
	for(i=0;i<size;i++)
	{
		cout<<"index["<<i<<"] - "<<num[i]<<" "<<endl;
	}
}

		

