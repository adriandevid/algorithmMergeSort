// ConsoleApplication3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>

void merge(int vetorA[], int vetorB[], int start, int end, int mid)
{
	int s = start;
	int m = mid;

	for (int i = start; i < end; i++)
	{
		if ((s < mid) && (m >= end || vetorA[s] <= vetorA[m]))
		{
			vetorB[i] = vetorA[s];
			s++;
		}
		else {
			vetorB[i] = vetorA[m];
			m++;
		}
	}
}

void printVetor(int vetor[]) 
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d", vetor[i]);
	}

	printf("\n");
}
void mergeSort(int vetorA[], int start, int end, int vetorB[])
{
	if ((end - start) <= 1) {
		return;
	}

	int mid = (end + start) / 2;

	mergeSort(vetorB, start, mid, vetorA);
	mergeSort(vetorB, mid, end, vetorA);

	printf("vetor A: \n");
	printVetor(vetorA);

	printf("vetor B: \n");
	printVetor(vetorB);

	merge(vetorA, vetorB, start, end, mid);
}

int main()
{
	int vD[] = {
		4, 3, 2, 1
	};

	int vetor[] = {
		4, 3, 2, 1
	};


	mergeSort(vetor, 0, 4, vD);

	for (int i = 0; i < 4; i++)
	{
		printf("%d", vD[i]);
	}

	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
