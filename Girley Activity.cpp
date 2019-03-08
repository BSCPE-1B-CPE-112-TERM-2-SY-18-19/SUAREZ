#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class suarez_wasteful{						//mao ni ang nagdala sa pagtawag
	public:
		void display(int num[10]);
		long digit[100],n, x, t, j, factor[100], rem[100], wasteful_num[10],num[10];
};

int main() 
{
	int wasteful_num[10]={11,12,13,14,15,16,17,18,19,20}; //mao ni ang array nga pangitaan ug wasteful numbers
	suarez_wasteful computer; 							// diri ga store ug object
	computer.display (wasteful_num);					// gegamit na ag object, name kay computer
	return 0;
}

void suarez_wasteful::display(int wasteful_num[10]) 	//function class
{
	cout<<"Displaying wastefuls:"<<endl;  				// eoutput
	
	for (int i=0; i<10; i++)							//sugod na ag code sa pagdetermined sa mga wastful numbers
	{
		
		for (i=0;i<10; i++)
			{
			digit[i]=0;
			n=wasteful_num[i];
			x=n;
			for (;n!=0;)
				{
				n=n/10;
				digit[i]++;
				}
			t=0;
			j=2;
			factor[i]=0;
			for (;x!=0;)
				{
				if (x%j==0)
					{
					x=x/j;
					rem[t]=j;
					t++;
					factor[i]++;
					if(x==1)
						{
						break;
						}
					}
			else
				{
				j++;
				}
			}
		}
		for (i=0; i<10; i++)
			{
			if (factor[i]>digit[i])
				{
				cout<<"Number:"<<wasteful_num[i]<<endl;			//e print na ag mga number nga wasteful
				}
			}
		}
}
