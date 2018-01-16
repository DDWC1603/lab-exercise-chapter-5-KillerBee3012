//Name : Aidil Suffian Bin Abu Bakar (A17DW2253)
//Udated

#include <iostream>
#include <iomanip>

using namespace std;

void ombakOmbak(int repeat=3,int height=5,int up=2,int down=2)
{
	while(repeat >0)
	{
		for(int i=1;i<=up;i++/*up*/)
		cout<<setw(height)<<right<<"+"<<endl;
		for(int i=1;i<=down;i++/*down*/)
		cout<<"+"<<endl;
		repeat --;
	}
}



void OmbakKeluar()
{

	cout<<"\nwaveDemo\n";
	ombakOmbak();
}

void OmbakKeluar();

int main ()

{
	OmbakKeluar();
	
}
//done for today =D
