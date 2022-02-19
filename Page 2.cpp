#include <iostream>
#include <string>
using namespace std;

// Larget Number Fanc
float LargetNumber(float Numberone, float Numbertwo, float Numberthree)
{
	if (Numberone > Numbertwo && Numberone > Numberthree) {
		return Numberone;
	}
	else if (Numbertwo > Numberone && Numbertwo > Numberthree) {
		return Numbertwo;
	}
	else if (Numberthree > Numberone && Numberthree > Numbertwo) {
		return Numberthree;
	}
}

// Middle Number Fanc

float MiddleNumber(float Numberone, float Numbertwo, float Numberthree)
{
	if (Numberone > Numbertwo && Numberone < Numberthree) {
		return Numberone;
	}
	else if (Numberone < Numbertwo && Numberone > Numberthree) {
		return Numberone;
	}
	else if (Numbertwo > Numberone && Numbertwo < Numberthree) {
		return Numbertwo;
	}
	else if (Numbertwo < Numberone && Numbertwo > Numberthree) {
		return Numbertwo;
	}
	else if (Numberthree > Numbertwo && Numberthree < Numberone) {
		return Numberthree;
	}
	else if (Numberthree < Numbertwo && Numberthree > Numberone) {
		return Numberthree;
	}
}

// Lowest Number Fanc

float LowestNumber(float Numberone, float Numbertwo, float Numberthree)
{
	if (Numberone < Numbertwo && Numberone < Numberthree) {
		return Numberone;
	}
	else if (Numbertwo < Numberone && Numbertwo < Numberthree) {
		return Numbertwo;
	}
	else if (Numberthree < Numberone && Numberthree < Numbertwo) {
		return Numberthree;
	}
}



int main()
{
	float Numberone, Numbertwo, Numberthree;
	float Highest, Middle, Lowest;
	cout << "please entre the first number: ";
	cin >> Numberone;
	cout << "please entre the seconad number: ";
	cin >> Numbertwo;
	cout << "please entre the third number: ";
	cin >> Numberthree;
	
	Highest = LargetNumber(Numberone, Numbertwo, Numberthree);
	Middle = MiddleNumber(Numberone, Numbertwo, Numberthree);
	Lowest = LowestNumber(Numberone, Numbertwo, Numberthree);
	
	cout << "The Highest Number is: " << Highest << " ...." << "The Middle Number is: " << Middle << " .... " << "The Lowest Number is: " << Lowest;



	return 0;
}