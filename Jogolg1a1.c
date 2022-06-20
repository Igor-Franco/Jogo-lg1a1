#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

int dado, opcao;
char char_acao;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	printf(" Harold o grande ca�ador de recompensas\n\n");
	printf(" O ano � 1920 no Egito. Harold, o mais famoso arque�logo e ca�ador de recompensas\n de toda a Europa est� � procura do sarc�fago do primeiro fara�. Depois de anos\n de pesquisa ele finalmente encontrou uma pista que valesse a pena ser seguida e\n ap�s chegar no e Egito e fazer uma viagem de dias no lombo de um camel, ele\n finalmente chega ao seu destino, uma pir�mide enorme.\n\n");
	printf(" Muito de sua estrutura estava enterrada pela areia, ent�o o trabalho de desenterrar\n a entrada ainda durou mais alguns dias. Quando finalmente conseguiram a achar uma\n entrada, mais uma surpresa, nenhum dos guias quiseram entrar com Harold, as lendas\n de maldi��es e armadilhas mantinham os nativos longe daqueles estruturas, mas\n mesmo assim Harold n�o se abalou, tendo feito tanto at� ent�o sentia que estava\n t�o pr�ximo e n�o podia desistir agora, sendo assim ao raiar do sol do dia\n seguinte a escava��o, Harold parte para sua aventura sozinho, munido de seu\n lampi�o e seu chicote ele entra na pir�mide. Sem olhar para tr�s, vai em busca\n de mais uma grande descoberta.");

	
	while (char_acao != 'n' && char_acao != 's'){
		printf("\n\n Deseja seguir em frente?(s/n)\n\n ");
		acao_sn();	}
		
	if(char_acao == 's'){
		printf("\n\n Resposta sim\n\n");
		funcao_escadaria();
	}
	
	if(char_acao == 'n'){
		printf("\n Harold j� foi longe de mais para desistir agora, e segue em frente mesmo assim.\n\n");
		funcao_escadaria();
	}
}

int acao_sn(){
	
	fflush(stdin);
	scanf("%c", &char_acao);
	printf(" Tecla digitada: %c", char_acao);	
}


int rolamento_dado(){

	srand(time(NULL));
	dado = (rand() % 6) + 1;
	printf("\n\n O valor tirado do dado � %d", dado);
}
	
	
int funcao_escadaria(){
	
	printf(" Ao entrar na pir�mide Harold levanta sua tocha e observa a sala em que se encontra.\n Muitas teias de aranha e poeira indicam que ningu�m passa por ali a muito tempo.\n A sala ap�s a entrada � muito simples, apenas alguns destro�os do que poderiam\n ser moveis ou estruturas antigas est�o l� e existe apenas um caminho por onde seguir,\n uma escada muito �ngreme que leva ao subsolo da pir�mide.\n\n Ao pisar no d�cimo degrau uma armadilha � ativada. Uma pedra enorme despenca do teto\n proximo a entrada e come�a a rolar escada a baixo, Harold precisa correr o mais\n r�pido poss�vel para se salvar.");
	printf("\n Ser� jogado um dado, e Harold precisa tirar um n�mero maior que 2 para escapar da armadilha.");
	printf("\n Aperte qualquer tecla para rolar o dado.");

	getch();
	rolamento_dado();
	
	if(dado <= 2){

	printf("\n Harold n�o conseguiu escapar da armadilha. \n\n GAME OVER!! \n\n");
	
	char_acao = 'a';
	
		while (char_acao != 'n' && char_acao != 's'){
		printf("\n\n Deseja tentar novamente? (s/n)\n\n");
		acao_sn();
		}
		
		if(char_acao == 's'){
			printf("\n\n Resposta sim\n\n");
			funcao_escadaria();
		}
	
		if(char_acao == 'n'){
			printf("\n O jogo ser� finalizado.\n\n");
			exit(0);
		}
	}
			else{		
			funcao_charada();
		}
}

	
int funcao_charada(){
	
	printf("\n\n Harold corre como um louco escada abaixo, e por pouco consegue entrar na pr�xima\n sala. A entrada era estreita ent�o a pedra n�o conseguiu segui-lo. A pedra s�\n bloqueou metade da porta, o que deixou Harold aliviado pois sabia que conseguiria\n voltar por onde veio.");
	printf(" A sala onde estava n�o tinha sa�da, apenas tr�s alavancas, na parede podia se\n observar hieroglifos. Harold limpa a poeira de cima e consegue traduzir o que\n est� escrito, uma charada:\n\n");
	printf("\n �Qual o ser que de manh� tem quatro patas; de tarde, tem duas; e de noite, tem tr�s?\".\n\n");
	
	printf(" Na alavanca 1 estava escrito \"homem\".\n na alavanca 2 \"Ornitorrinco\".\n na alavanca 3 \"Escorpi�o\".\n");

	printf("\n Qual alavanca voc� deseja acionar? (1, 2 ou 3)\n\n Ele deveria responder com muita cautela pois tinha a impress�o\n que n�o seria perdoado se errasse.\n ");

	fflush(stdin);
	scanf("%d", &opcao);

switch (opcao)
{
	case 1:
    printf ("\n Ao ativar a alavanca Harold escuta um barulho e sente o ch�o tremer. Ele quase\n n�o acredita mas logo a sua frente a parede se abre como uma porta e ele consegue\n ver a pr�xima sala. Ao entrar e iluminar com sua tocha ele � cegado por uns\n instantes com a intensidade da luminosidade que refletia nos tesouros e joias\n espelhadas pelo ch�o e cantos da sala. Ao centro o que buscara a tanto tempo,\n o sarc�fago do primeiro fara�, todo feito em ouro. Sua jornada tinha valido a pena\n e todo seu trabalho fora recompensado, Harold cumpriu seu objetivo!\n\n");
	break;

	case 2:
	printf("\n Ao ativar a alavanca, gases venenosos come�aram a entrar na sala.\n Harold n�o conseguiu escapar da armadilha. \n\n GAME OVER!! \n\n");
	
	char_acao = 'a';
	
		while (char_acao != 'n' && char_acao != 's'){
		printf("\n\n Deseja tentar novamente? (s/n)\n\n");
		acao_sn();
		}
		
		if(char_acao == 's'){
			printf("\n\n Resposta sim\n\n");
			funcao_charada();
			break;
		}
	
		if(char_acao == 'n'){
			printf("\n O jogo ser� finalizado.\n\n");
			exit(0);
		}
   
   case 3:
	printf("\n Ao ativar a alavanca, gases venenosos come�aram a entrar na sala.\n Harold n�o conseguiu escapar da armadilha. \n\n GAME OVER!! \n\n");
	
	char_acao = 'a';
	
		while (char_acao != 'n' && char_acao != 's'){
		printf("\n\n Deseja tentar novamente? (s/n)\n\n");
		acao_sn();
		}
		
		if(char_acao == 's'){
			printf("\n\n Resposta sim\n\n");
			funcao_charada();
			break;
		}
	
		if(char_acao == 'n'){
			printf("\n O jogo ser� finalizado.\n\n");
			exit(0);
		}
   break;
   default:
    printf ("Erro, o n�mero digitado n�o � uma op��o.");
    funcao_charada();
}

	printf(" Fim de jogo.");
	getch();

}



