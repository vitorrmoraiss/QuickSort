#include <iostream>
using namespace std;

void mostraVetor(int vet[]){
    for(int i = 0; i < 15; i++)
	{
		cout << vet[i] << ' ';
	}
	cout << endl;
}

void quicksort(int vet[], int esq, int dir)
{
	int i, j, pivo, aux;
	i = esq;
	j = dir-1;
	pivo = vet[(esq + dir) / 2];
	while(i <= j)
	{
		while(vet[i] < pivo && i < dir)
		{
			i++;
		}
		while(vet[j] > pivo && j > esq)
		{
			j--;
		}
		if(i <= j)
		{
		    // swap
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
			i++;
			j--;
		}
	}
	cout << "--------------------------------" << endl;
    cout << "Pivo atual: " << pivo << endl;

	if(j > esq){
        cout << "Recursiva esquerda" << endl;
        mostraVetor(vet);
        cout << "esq: " << esq << "     j+1: " << j+1 << endl;
		quicksort(vet, esq, j+1);
	}
	if(i < dir){
	    cout << "Recursiva direita" << endl;
	    mostraVetor(vet);
        cout << "i: " << i << "     dir: " << dir << endl;
		quicksort(vet, i, dir);
	}
}

int main()
{
	int vetor[15] = {9, 10, -1, 3, 6, 2, 1, -3, 1, 0, -2, 15, 8, -7, 0};
	for(int i = 0; i < 15; i++)
	{
		cout << vetor[i] << ' ';
	}
    cout << endl;

	quicksort(vetor, 0, 15);

	for(int i = 0; i < 15; i++)
	{
		cout << vetor[i] << ' ';
	}

	return 0;
}
