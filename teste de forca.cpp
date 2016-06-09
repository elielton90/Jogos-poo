#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//biblioteca
int main()
{
	// quando for falso sair
	bool sair = false;
	//variavel
	string player1, player2;
	int vida1 = 10, vida2 = 10;
	int dado, dano;
	int A1 = 3, A2 = 3, D1 = 2, D2 = 2;
	//nome dos jogadores
	cout << "Digite o nome do jogador 1: " << endl;
	//digitar
	cin >> player1;
	cout << "Digite o nome do jogador 2: " << endl;
	cin >> player2;
	//laço quando for falso sair
	while (sair == false)
	{
		//imprimindo na tela
		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << player1 << "             " << player2 << endl;
		cout << "Ataque: " << A1 << "          " << "Ataque: " << A2 << endl;
		cout << "Defesa: " << D1 << "          " << "Defesa: " << D2 << endl;
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl;

		system("pause");

		//gerar numeros
		srand((int)time(0));
		// player 1 vai jogar
		dado = rand() % 6 + 1;

		// se o dado for maior que 4 acerta causando dano ao oponente 2
		if (dado > 4)
		{

			dano = A1 - D2;
			vida2 = vida2 - dano;
			cout << player1<< " Acertou" << endl;
			cin.get();
		}
		//se o dado for maior que 4 erra
		else if (dado <= 4)
		{
			cout << player1 << " Errou " << endl;
			cin.get();
		}

		// player 2 vai jogar
		dado = rand() % 6 + 1;
		// se o dado for maior que 4 acerta causando dano ao oponente 1
		if (dado > 4)
		{
			dano = A2 - D1;
			
			vida1 = vida1 - dano;
			cout << player2 << " Acertou " << endl;;
			cin.get();
		}
		// se o dado for menor que 4 erra
		else if (dado <= 4)
		{
			cout << player2 << " Errou " << endl;
			cin.get();
		}
		//limpar
		system("cls");

		if (vida1 <= 0 || vida2 <= 0)
		{
			
			sair = true;
		}
	}
	//o vencedor sera o que tiver vida maior que zero
	//player1 vence
	if (vida1 > 0)
		cout << player1 << " Venceu!" << endl;
	//caso contrario player2 vence
	else if (vida2 > 0)
		cout << player2<< " Venceu!" << endl;
	// condicao se der empate os dois players perdem
	else
		cout << " Os dois perderam" << endl;
	
	return 0;
}
