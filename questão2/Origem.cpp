#include<iostream>

using namespace std;

float divisao(float n1, float n2);
float subtrair(float n1, float n2);
float somar(float n1, float n2);


int main() {
	float numero = 4;
	float numerador = 4;
	float denominador = 3;
	int contador = 0;
	float total = 0;
	float r;
	float n;

	cout << "Digite o numero: " << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		if (contador == 0) {
			r = divisao(numerador, denominador);
			total = somar(total, r);
			contador++;
			denominador += 2;
			continue;
		}
		if (contador % 2 == 0) {
			r = divisao(numerador, denominador);
			total = subtrair(total, r);
		}
		else {
			r = divisao(numerador, denominador);
			total = somar(total, r);
		}
		contador++;
		denominador += 2;
	}

	total = 4 - total;
	cout << "O resutado e: " << total << endl;
	system("pause");
	
	return 0;
}


float divisao(float n1, float n2) {
	float r = n1 / n2;
	return r;
}

float subtrair(float n1, float n2) {
	float r = n1 - n2;
	return r;
}

float somar(float n1, float n2) {
	float r = n1 + n2;
	return r;
}