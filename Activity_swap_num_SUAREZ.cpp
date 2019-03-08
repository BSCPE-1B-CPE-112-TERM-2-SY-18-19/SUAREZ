#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	class jadeharris
{ 									//a class named after my name jadeharris
		public:						//public ra para dali daw matawag ingon ka sir
				int j,b,f; 				//variables declaration nga gamitunon sa code
				void twovarswap(); 		//ang function nga tawagon, this is the two value nga mag swap			
				void threevarswap();	 //moa ra ni sa taas ganilang kay three na ni sya	
};

int main() 
{									//akong main nga code gyud, ani na manawag tawag
	jadeharris bayot; 					//mao na ni pagtawag sa class jadeharris gamit ang 'bayot'
	bayot.twovarswapping(); 			//gitawag na ang mga functions 
	bayot.threevarswapping();
	return 0;
}

void jadeharris::twovarswapping() 						//process sud sa function nga two ra ka variable e swap
{
	cout<<"TWO VARIABLES"<<endl<<"ENTER J:"; 
	cin>>j; 										// scanf ni sya sa c language 
	cout<<"ENTER B:";
	cin>>b; 							
	b=j+b; 											//way para duha ra gyud varb ang magamit
	j=j-b;
	b=b-j;
	cout<<"SWAP"<<endl<<"J:"<<j<<endl<<"B:"<<b<<endl; //printf na ag output nga na swap na ang iayng variables/values
}


void jadeharris::threevarswapping() 						//still function code nga tawgon, mao  ra ni sa taas, basta kay mao na ni ang code nga tawgon ra didto sa main
{
	cout<<endl<<"THREE VARIABLES"<<endl<<"ENTER J:";
	cin>>j; 										
	cout<<"ENTER B:";
	cin>>b; 
	cin>>f;
	j=j+b+f; 
	b=j-b-f;
	f=j-b-f;	
	j=j-(b+f);
	cout<<"SWAP"<<endl<<"J:"<<j<<endl<<"B:"<<b<<endl<<"F:"<<f; 		//eprint na ag output sa 3 varb nga eswap
}

