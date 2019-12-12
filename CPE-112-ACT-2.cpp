#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	class suarez
{ 									//gagama ug class unya gipanganlan nako ug suarez
		public:						//public ra para dali daw matawag ingon ka sir
				int g,k,s; 				//declaration sa mga cariables nga gipangagmit sa code initial sa akong name hahah
				void twovarswap(); 		//ang function nga tawaon, duha ka variables/value ni nga mag swap			
				void threevarswap();	 //moa ra ni sa taas ganilang kay three na ni sya	
};

int main() 
{									//akong main nga code gyud, ani na manawag tawag
	suarez cpe; 					//getawag na nako ang sa class suarez gamit ang 'cpe'
	cpe.twovarswapping(); 			//gitawag na ang mga functions gamit ang cpe
	cpe.threevarswapping();
	return 0;
}

void suarez::twovarswapping() 						//process sud sa function nga two ra ka variable e swap
{
	cout<<"TWO VARIABLES"<<endl<<"ENTER G:"; 
	cin>>g; 										// mura ni sya scanf ni sya sa c language 
	cout<<"ENTER K:";
	cin>>k; 							
	k=g+k; 											//way para duha ra gyud varb ang magamit
	g=g-k;
	k=k-g;
	cout<<"SWAP"<<endl<<"G:"<<g<<endl<<"K:"<<k<<endl; //tadaaaaaaaa, printf na ag output nga na swap na sya
}


void suarez::threevarswapping() 						//still function code nga tawgon ni sya ug mao  ra ni sa taas, basta kay mao kini ang code nga tawgon ra didto sa main
{
	cout<<endl<<"THREE VARIABLES"<<endl<<"ENTER G:";		//ug kani na sya nga code sa swapping variables without using any variables
	cin>>g; 										
	cout<<"ENTER K:";
	cin>>k;
	cout<<"ENTER S: ";  
	cin>>s;
	g=g+k+s; 
	k=g-k-s;
	s=g-k-s;	
	g=g-(k+s);
	cout<<"SWAP"<<endl<<"G:"<<g<<endl<<"K:"<<k<<endl<<"S:"<<s; 		//tadaaaaaaaaaaaaa, eprint na ag output sa 3 varb nga eswap
}

