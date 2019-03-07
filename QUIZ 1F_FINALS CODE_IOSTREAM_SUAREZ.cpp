#include <iostream> 
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// global
class computer{
	public:
                 //'LONG' ANG DATA TYPE NGA AKONG GIGAMIT PARA DAKO OG MASULOD...

		void palindromic_prime(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA PALINDROMIC PRIME//
		void wasteful_number(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA WASTEFUL NUMBER SAME SA PALINDROMIC PRIME
		long prime(long num);   // FUNCTION NI SIYA NGA GINGANLAN UG PRIME PARA MAHIBAW-AN NATU ANG PRIME NUMBERS SA MGA GI INPUT
		long binary(long num1); //  making of function for binary FUNCTION NI SIYA NGA GINGANLAN UG BINARY PARA MADETERMINE ANG BINARY SA MGA NUMBER NGA PRIME
		long reverse(long num2); //  FUNCTION NI SIYA NGA GINGANLAN UG REVERSE NGA PANGREVERSE SA BINARY UG ICOMPARE SA ORIGINAL BINARY 
		long digit(long num3); //FUNCTION NI SIYA NGA GINGANLAN UG DIGIT PARA IHAP SA DIGITS SA NUMBER
		long primefactorization(long num4); ////FUNCTION NI SIYA NGA GINGANLAN UG PRIMEFACTORIZATION PARA DETERMINE SA MGA PRIME FACTORS SA NUMBER
		
				So, sa ibabaw makita nato na dako jud ni ikatabang siya para makuha atong mga gusto na resulta...

		//Mga gipang declare para magamit sa program...
		long j,count,x;
		long pdtemp, bin, base, rem;
		long rev, temp, key;
		long caryl, digits;                 
		long factors,t,i;
		long rem1[100];
		long jean;
};

int main() {
	computer engineering; //gatawag ko sa class gamit ang computer engineering//
	long num,i;	// nag declare ko ari og num and i:

    string str; //// local declaration sa akong string kay string man ang gamit sa pag input 
    cout<<"INPUT STRING: ";
	cin>>str;
    cout << "The size of str is " << str.length() << " bytes.\n";

for (i=1;i<=str.length();i++)
{
	if (str.length()%2!=0){ // statement ni siya para mahibaw an nga EVEN ang str.length kay naa may not equal na girepresentahan og exclamation point...

		engineering.palindromic_prime(i); //gitawag ang function nga 'palindromic_prime' ni 'computer engineering' para muperform sa tanang process sa range
	//	cout<<i<<endl; // displaying i
	}
	else{
		engineering.wasteful_number(i); ///gitawag ang function nga 'wasteful_number' ni 'computer engineering' para muperform sa tanang process sa range
	//	cout<<i<<endl; // displaying i
	}
}
	return 0;
}

void computer::palindromic_prime(long x){
	// cout<<endl;
	prime(x); //gitawag ni 'palindromic_prime' si 'prime' para masud ang process ni prime ani nga function to ready napd inig tawag ni 'computer engineering' kang 'palindromic_prime'
}
void computer::wasteful_number(long x){
	digit(x);  //gitawag ni 'wasteful_number' si 'digit' para masud ang process ni digit ani nga function to ready napd inig tawag ni 'guwapo' kang 
	if (digits>=factors){   // ga if statement ko kay duha man ang padulngan ma wasteful ba o dili...
		// cout<<x<<endl;
	}
}

//FUNCTIONS NI SIYA PARA SA PALINDROMIC PRIME
long computer::prime(long num){  // process ni tara madetermine kung prime ba o dili.. ang range

	count = 0;
	for (j=2;j<num;j++){
		if (num%j==0){
			count++;
		}
	}	
	if (count==0){
		binary(num); // pag butang og value sa num binary
	}
	else{
		cout<<endl;
	}
}
long computer::binary(long num1){ //mao ni sulod sa function nga binary which is gitawag sa prime nga function

/* BINARY */ //process sa pagkuhag binary sa number nga prime which is gi-identify sa prime function sa babaw 

	pdtemp = num1;
	bin=0;
	base = 1;
	
	for (;pdtemp>0;){
		rem=pdtemp%2;
		bin=bin+rem*base;
		base = base*10;
		pdtemp=pdtemp/2;
	}
	reverse(bin); // storing the value of bin to reverse
}
long computer::reverse(long num2){ //mao ni sulod sa function nga reverse nga gitawag sa function nga binary 

/*REVERSE*/ // process sa pagreverse sa binary sa babaw para macompare silang duha arun maka-identify ko nga palindromic ba siya or dili

	key=num2;
	temp=0;
	rev=0;

	for (;key!=0;){
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}

	
	if (rev!=num2){
		cout<<num2<<endl;
	
}}

// FUNCTIONS NAPOD NI SILA PARA SA WASTEFUL NUMBER

long computer::digit(long num3){ // mao ni sulod sa function nga digit para maihap kung pila ang digits sa range
	girley=num3;
	kay=num3;
	digits = 0;

	for (;girley!=0;){ //process ni siya para ihap sa digits
		girley=girley/10;
		digits++;
		}
		primefactorization(kay); 
}

long computer::primefactorization(long num4){ //gitawag ni siya ni function digit para macompare silang duha adtu sa ibabaw nga function 'void wasteful_number' which is ang digit function napd gitawag adtu 
	x=num4;
	factors=0;
	i=2;
	t=0;

	for (;x!=0;) {
	   if (x%i==0){
	       x=x/i;
	       rem1[t]=i;
	       t++;
	       factors++;
	       				if (x==1){
	              			break;
					              }
	           }
	       else{
		          i++; 
	           }
	    }
	    
		printf("\n");
	
}

