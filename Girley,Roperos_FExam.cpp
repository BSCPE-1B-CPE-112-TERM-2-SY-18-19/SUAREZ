#include <iostream>


using namespace std;
	class cpe1b{ 
		public:
			long wasteful_number(long num); 
			long binary(long x);
			void exam(long num[1000],long size);
			void sorting_descending(long num[1000],long size);
			long i,num,size,base,rem; 
			long factor,digit,temp1,j,n,x,t,rem2,bin,pdtemp;
	};
int main() 
	{
		long i,inp[1000],size; 
		cpe1b finalsr; 
		cout<<"INPUTS: ";  
		size=0; 
		for(i=0;;i++){ 
			cin>>inp[i];
			if(inp[i]==0){
				break; 
			}
			size++; 
		}
	cout<<"SIZE: "<<size<<endl;
	finalsr.exam(inp,size);	
	cout<<"Sorted_Binary: ";
	for (i=0;i<size;i++)
		{
		finalsr.binary(inp[i]);
		}				
	}						
	
	long cpe1b::wasteful_number(long size) {	
	n=size;
	x=n;
	digit=0;
	for (;n!=0;)
		{
		n=n/10;
		digit++;
		}
	t=0;
	j=2;
	factor=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem=j;
			t++;
			factor++;
			if (x==1)
				{
				break;
				}
			}
		else
			{
			j++;
			}
		}
	if(factor>digit){	
			return 1; 
		}else{
			return 0; 
		}
	}
	
	void cpe1b::exam(long num[1000],long size)
{
		cpe1b finalsr;
		if(finalsr.wasteful_number(size)==1){
			cout<<"Sorted: ";
			finalsr.sorting_descending(num,size);
			cout<<endl;
		}
		else
		{
			cout<<"Not Sorted: ";
			for(i=0;i<size;i++)
				{
					cout<<" "<<num[i];
				}
		}
}

	void cpe1b::sorting_descending(long num[1000],long size)
		{
			long temp1;
			for(i=0;i<size;i++)
				{
					for(j=i+1;j<size;j++)
						{
							if(num[i]<num[j])
								{
									temp1=num[i];
									num[i]=num[j];
									num[j]=temp1;
								}
						}		
					
				}
		for(i=0;i<size;i++)
			{
				cout<<" "<<num[i];
			}
		}
	
long cpe1b::binary(long x)
{
				pdtemp = x;
				bin=0;
				base = 1;
				cout<<" ";
				for (;pdtemp>0;){
					rem2=pdtemp%2;
					bin=bin+rem2*base;
					base = base*10;
					pdtemp=pdtemp/2;
				}
			cout<<bin;
}

