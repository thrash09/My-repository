#include <iostream>
using namespace std;
int main()
{
	float a, b; //definiuj� zmienne a i b jako int
	
	//funkcja cout wy�wietla co� na ekranie
	
	cout << "Wprowadz bok a prostokata: ";
	
	//funkcja cin wprowadza dane z klawiatury
	
	cin >> a;
	
	//Powtarzam poprzednie dwa kroki dla zmiennej b
	
	cout << "Wprowadz bok b prostokata: ";
	
	cin >> b;
	
	//program (to nie jest funkcja) podaje pole mno��c obydwa boki
	
	cout << "Pole prostokata wynosi: " << a*b;
	
	//teraz go odpal�
	//i moje pytanko to czo zrobi� �eby m�c wczyta� co� z klawiatury w Pythonie (w necie wyczyta�em o jakim� "input()")
	//jaki jest Pythonowy odpowiednik cin z C++?
}
