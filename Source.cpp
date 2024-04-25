#include <iostream>

using namespace std;

/*Gerar e imprimir uma matriz, onde seus elementos são da forma: 
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i2 − 1 se i = j;
A[i][j] = 4i3 − 5j2 + 1 se i > j.*/


int** criarMatriz(int lim, int col) {
	int** m = new int* [lim];
	for (int i = 0; i < lim; i++)
	{
		m[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			if (i < j)
				m[i][j] = 2 * i + 7 * j - 2;
			else if (i == j)
				m[i][j] = 3 * i * i - 1;
			else
				m[i][j] = 4 * i * i * i - 5 * j * j + 1;



		}
	}
	return m;
}



void imprimir(int** m, int l, int c) {

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << m[i][j] << " ";



		}
		cout << endl;

	}


}



int main() {
	int l;
	int c;

	cout << "informe as linhas: ";
	cin >> l;

	cout << "informe as colunas: ";
	cin >> c;


	int** matriz = criarMatriz(l, c);

	imprimir(matriz, l, c);






}