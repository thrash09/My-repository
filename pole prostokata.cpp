#include <iostream>
using namespace std;
int main()
{
	float a, b; //definiujê zmienne a i b jako int
	
	//funkcja cout wyœwietla coœ na ekranie
	
	cout << "Wprowadz bok a prostokata: ";
	
	//funkcja cin wprowadza dane z klawiatury
	
	cin >> a;
	
	//Powtarzam poprzednie dwa kroki dla zmiennej b
	
	cout << "Wprowadz bok b prostokata: ";
	
	cin >> b;
	
	//program (to nie jest funkcja) podaje pole mno¿¹c obydwa boki
	
	cout << "Pole prostokata wynosi: " << a*b;
	
	//teraz go odpalê
	//i moje pytanko to czo zrobiæ ¿eby móc wczytaæ coœ z klawiatury w Pythonie (w necie wyczyta³em o jakimœ "input()")
	//jaki jest Pythonowy odpowiednik cin z C++?
}
