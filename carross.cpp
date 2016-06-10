
//projeto3
#include <iostream> 
#include <string>
#include <ctime> 
using namespace std;
	void imprimir_espacos(int total1); 
	//função principal
	int main() 
{
	// sair quando for falso
	bool sair = false; 
	//variaveis
	string jog1, jog2; 
	//a quantidade inicial de cada carrinho
	int total1 = 0, total2 = 0;
	//imprimir na tela q o jogador digite o seu nome
	cout << "Digite o nome do jogador 1:" << endl; 
	// digitar o nome do joagor e salvar na variavel
	cin >> jog1; 
	cout << "Digite o nome do jogador 2:" << endl; 
	cin >> jog2; 
	// ficar no laço ate sair ser = a false
	while (sair == false)
	{
	//declarando a tamanho da pista
		int total_espacos = 80;
		//gerando numero aleatorio para o carro avançar
		srand (int)time( 0 );
	//gerar um numero entre 3 e 1
		total_espacos = rand() % 3 + 1;
		total1 = total1 + total_espacos;
		total_espacos = rand() % 3 + 1;
		total2 = total2 + total_espacos;
	//imprimindo na tela 
		cout << "fast and furious" << endl;
		cout << "INICIO:                                                               FIM:" << endl;
		//  nome do primeiro jogador
		cout << "carango1:" << jog1 << endl; 
		imprimir_espacos(total1);
		// fazendo o carro
		cout << "  _  " << endl;
		imprimir_espacos(total1);
		cout << "o-o>" << endl;
		//pista 
		cout << "_______________________________________________________________________________" << endl;
		//Total 
		cout << " pecorreu: " << total1 << endl;  
		// nome do segundo jogador
		cout << "carango2:" << jog2 << endl;
		imprimir_espacos(total2);
		// fazendo o carro
		cout << "  _  " << endl;
		imprimir_espacos(total2);
		//Corpo do carro
		cout << "-o-o>" << endl;
		//pista 
		cout << "_______________________________________________________________________________" << endl;
		//Total
		cout << " pecorreu: " << total2 << endl;  
		//limpar a tela
		system("cls");
		//fazer o jogo parar
		if (total1 >= 75 || total2 >= 75)
		{
			//sair quando for verdadeiro
			sair = true;
		}
		//limpar a tela
		else system("cls");
	}
 	// mostrando o resultado do jogo
	cout << " fim de jogo " << endl;
	// se o jogador um ganhar
	if (total1 >= 75) cout << jog1 << ", unrra, voce ganhou !" << endl;
	// se o joagdor dois ganhar
	else if (total2 >= 75) cout << jog2 << ", unrra, voce ganhou !" << endl;
	//empate
	else cout << "empate" << endl;
	//sair
	return 0; 
}
void imprimir_espacos(int total) 
{	
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		cout << " ";
	}
}
