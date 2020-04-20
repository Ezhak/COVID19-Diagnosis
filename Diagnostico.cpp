#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <locale.h>
#include "rlutil.h"

using namespace rlutil;
using namespace std;


int main() {
	setColor(BLACK);
	setBackgroundColor(DARKGREY);
	cls();
	setlocale(LC_ALL, "Spanish");
	int age = 0;
	float fever = 0;
	int option = -1;
	char sympton;

	cout << "Bienvenido/a, este espacio virtual tiene como objetivo a ayudarle a tener una aproximación de su diagnostico aun asi sin reemplazar la debida consulta y atencion médica" << endl;
	cout << "¿Cuántos años tiene?" << endl;
	cin >> age;
	
	
		cls();
		if (age >= 65) {
			PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
			cout << "Usted, por su edad, es una persona de riesgo, es muy importante que sea estricto con las medidas de prevencion." << endl << endl;

		}
		PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
		cout << " Tambien es destacable informarle que si padece de estas afecciones, tambien debe extremar las medidas de precaucion:" << endl << endl;
		cout << "- Obesidad Grave" << endl;
		cout << "- Diabetes" << endl;
		cout << "- Enfermedad pulmonar crónica" << endl;
		cout << "- Afecciones cardiacas graves, renales o enfermedad hepática" << endl;
		cout << "- Obesidad grave" << endl;
		cout << "- Sistema inmunodepresivo" << endl;
		cout << "------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------------------------------------------------------" << endl << endl << endl;

		cout << "------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------------------------------------------------------" << endl << endl << endl;
		cout << "Por favor, elija una opcion, ¿Que sintoma principal tiene?" << endl;
		cout << "1. Fiebre \t 3. Dolor de Garganta" << endl;
		cout << "2. Dificultad para respirar \t\t 4. Tos" << endl;
		cout << "5. Perdida del olfato \t\t 0.Salir" << endl << endl;
		cin >> option;
		PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);

	switch (option) {
	case 1:
		cout << "¿Usted padece Dolor de Garganta, Dificultad para Respirar o Tos?" << endl;
		cout << " 'S'- Si | 'N'- No" << endl;
		cin >> sympton;
		PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
		switch (sympton) {
		case 'S':
			cout << "Lamentablemente, debido a sus sintomas, puede usted haberse contagiado de COVID-19" << endl;
			cout << "Si usted ha permanecido contacto con alguna persona recientemente llegada del exterior" << endl;
			cout << "Por favor, mantengase en cuarentena, y comuniquese al servicio de salud de su localidad" << endl<<endl;
			PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
			break;
		case 'N':
			cout << "Perfecto, mantengase aislado en su hogar, si los sintomas empeoran o la fiebre no cesa, asista al hospital más cercano." << endl << endl;
		}
		break;
	case 2:
		cout << "¿Tiene Fiebre?" << endl;
		cout << " 'S'- Si | 'N'- No" << endl;
		cin >> sympton;
		PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
		switch (sympton) {
		case 'S':
			cout << "Lamentablemente, debido a sus sintomas, puede usted haberse contagiado de COVID-19" << endl;
			cout << "Si usted ha permanecido contacto con alguna persona recientemente llegada del exterior" << endl;
			cout << "Por favor, mantengase en cuarentena, y comuniquese al servicio de salud de su localidad" << endl << endl;
			PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
			break;
		case 'N':
			cout << "Perfecto, mantengase aislado en su hogar, si los sintomas empeoran o se manifiesta fiebre, asista al hospital más cercano." << endl << endl;
			break;
		}
			break;
	case 3:
		cout << "¿Tiene Fiebre?" << endl;
		cout << " 'S'- Si | 'N'- No" << endl;
			cin >> sympton;
			PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
			switch (sympton) {
			case 'S':
				cout << "Lamentablemente, debido a sus sintomas, puede usted haberse contagiado de COVID-19" << endl;
				cout << "Si usted ha permanecido contacto con alguna persona recientemente llegada del exterior" << endl;
				cout << "Por favor, mantengase en cuarentena, y comuniquese al servicio de salud de su localidad" << endl << endl;
				PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
				break;
			case 'N':
				cout << "Perfecto, mantengase aislado en su hogar, si los sintomas empeoran o se manifiesta fiebre, asista al hospital más cercano." << endl << endl;
				break;
			}
				break;
	case 4:
		cout << "¿Tiene Fiebre?" << endl;
		cout << " 'S'- Si | 'N'- No" << endl;
				cin >> sympton;
				PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
				switch (sympton) {
				case 'S':
					cout << "Lamentablemente, debido a sus sintomas, puede usted haberse contagiado de COVID-19" << endl;
					cout << "Si usted ha permanecido contacto con alguna persona recientemente llegada del exterior" << endl;
					cout << "Por favor, mantengase en cuarentena, y comuniquese al servicio de salud de su localidad" << endl << endl;
					PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
					break;
				case 'N':
					cout << "Perfecto, mantengase aislado en su hogar, si los sintomas empeoran o se manifiesta fiebre, asista al hospital más cercano." << endl << endl;
					break;
				}
				break;
	case 5: 
		cout << "¿Tiene Fiebre?" << endl;
		cout << " 'S'- Si | 'N'- No" << endl;
		cin >> sympton;
		PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
		switch (sympton) {
		case 'S':
			cout << "Lamentablemente, debido a sus sintomas, puede usted haberse contagiado de COVID-19" << endl;
			cout << "Si usted ha permanecido contacto con alguna persona recientemente llegada del exterior" << endl;
			cout << "Por favor, mantengase en cuarentena, y comuniquese al servicio de salud de su localidad" << endl << endl;
			PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);
			break;
		case 'N':
			cout << "Perfecto, mantengase aislado en su hogar, si los sintomas empeoran o se manifiesta fiebre, asista al hospital más cercano." << endl;
			cout <<"Aun que, la perdida del sentido del olfato es uno de los nuevos sintomas, de todas maneras le recomendamos que asista de todas formas." << endl;
			break;
		}
		break;

	case 0:
					break;
		default:
					cout << "Opcion incorrecta, ingrese un sintoma" << endl << endl;

				}

	PlaySound(TEXT("beep.wav"), NULL, SND_ALIAS);


system("pause");
PlaySound(TEXT("buttonselect.wav"), NULL, SND_ALIAS);
return 0;
			
	
	

}