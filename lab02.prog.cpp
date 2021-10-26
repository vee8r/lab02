// lab02.prog.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{				/* ZADANIE1
	float a, b;
	cout << "podaj a: ", cin >> a;
	cout << "podaj b: ", cin >> b;

	if (a == 0) {
		if (b == 0)
			cout << "rownanie tozsamosciowe\n";
		else
			cout << "rownanie sprzeczne\n";
	}
	else {
		cout << "x = " << -b / a;
	}
	*/
	//ZADANIE2/3
/*
float a, b, c, delta;
cout << "podaj a: ", cin >> a;
cout << "podaj b: ", cin >> b;
cout << "podaj c: ", cin >> c;

if (a != 0) {
	delta = (b * b) - (4 * a * c);

	if (delta == 0) {

		cout << "jedno rozwiazanie, x1 = "<< -b / ( 2 * a ) << endl;
	}
	else if (delta > 0) {
		cout << "dwa rozwiazania; \n";
		cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
		cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
	}
	else cout << "brak rozwiazan\n";
}
else
	if (b == 0) {
		if (c == 0)
			cout << "rownanie tozsamowsciowe\n";
		else
			cout << "rownanie sprzeczne\n";
	}
	else {
		cout << "x = " << -c / b;
	}
	*/

	//ZADANIE 4

	/*float x;

	cout << "podaj x: ", cin >> x;

	if (x == 0)
	{
		cout << "a(x) = " << 0 << endl;
	}
	else if (x > 0)
	{
		cout << "a(x) = " << 2 * x << endl;
	}
	else
	{
		cout << "a(x) = " << -3 * x << endl;
	}
	*/

	/*float x;

	cout << "podaj x: ", cin >> x;

	if (x >= 1)
	{
		cout << "a(x) = " << pow(x, 2) << endl;
	}
	else
	{
		cout << "a(x) = " << x << endl;
	}
	*/

	/*
	float x;

	cout << "podaj x: ", cin >> x;

	if (x > 2)
	{
		cout << "a(x) = " << 2 + x << endl;
	}

	else if (x == 2)
	{
		cout << "a(x) = " << 8 << endl;
	}

	else if (x < 2)
	{
		cout << "a(x) = " << x - 4 << endl;
	}
	*/




				//ZADANIE 5 

	/*float x, y, z;

	cout << "podaj x: ", cin >> x;
	cout << "podaj y: ", cin >> y;
	cout << "podaj z: ", cin >> z;

	if (x > y && x > z)
	{
		if (y > z)
		{
			cout << x << y << z;
		}
		else 
		{
			cout << x << z << y;
		}
	}
	else if (y > x && y > z)
	{
		if (x > z)
		{
			cout << y << x << z;
		}
		else
		{
			cout << y << z << x;
		}
	}
	else if (z > x && z > y)
	{
		if (x > y)
		{
			cout << z << x << y;
		}
		else
		{
			cout << z << y << x;
		}
	}*/

			 //ZADANIE 6

/*bool pada, autobus;
cout << "1=prawda 0=falsz" << endl;
cout << "pada? ";
cin >> pada;
cout << "jest autobus? ";
cin >> autobus;

if (pada && autobus)
{
	cout << "Wez parasol " << "Dostaniesz sie na uczelnie";
}
else if (pada && !autobus)
{
	cout << "Nie dostaniesz sie na uczelnie";
}
else
{
	cout << "Dostaniesz sie na uczelnie " << "Milego dnia i pieknej pogody";
}
*/

			//ZADANIE 7

/*bool znizka, podwyzka;

cout << "1=prawda 0=falsz" << endl;

cout << "jest znizka? ";
cin >> znizka;
cout << "otrzymales premie? ";
cin >> podwyzka;

if (!znizka || podwyzka)
{
	cout << "Mozesz kupic samochod! Znizki na samochod nie ma";
}
else if (!znizka || !podwyzka)
{
	cout << "Zakup samochodu trzeba odlozyc na pozniej... Znizki na samochod nie ma";
}
else
{
	cout << "Mozesz kupic samochod";
}
*/









}



