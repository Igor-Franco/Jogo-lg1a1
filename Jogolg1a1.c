#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

int dado, opcao;
char char_acao;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	printf(" Harold o grande caçador de recompensas\n\n");
	printf(" O ano é 1920 no Egito. Harold, o mais famoso arqueólogo e caçador de recompensas\n de toda a Europa está à procura do sarcófago do primeiro faraó. Depois de anos\n de pesquisa ele finalmente encontrou uma pista que valesse a pena ser seguida e\n após chegar no e Egito e fazer uma viagem de dias no lombo de um camel, ele\n finalmente chega ao seu destino, uma pirâmide enorme.\n\n");
	printf(" Muito de sua estrutura estava enterrada pela areia, então o trabalho de desenterrar\n a entrada ainda durou mais alguns dias. Quando finalmente conseguiram a achar uma\n entrada, mais uma surpresa, nenhum dos guias quiseram entrar com Harold, as lendas\n de maldições e armadilhas mantinham os nativos longe daqueles estruturas, mas\n mesmo assim Harold não se abalou, tendo feito tanto até então sentia que estava\n tão próximo e não podia desistir agora, sendo assim ao raiar do sol do dia\n seguinte a escavação, Harold parte para sua aventura sozinho, munido de seu\n lampião e seu chicote ele entra na pirâmide. Sem olhar para trás, vai em busca\n de mais uma grande descoberta.");

	
	while (char_acao != 'n' && char_acao != 's'){
		printf("\n\n Deseja seguir em frente?(s/n)\n\n ");
		acao_sn();	}
		
	if(char_acao == 's'){
		printf("\n\n Resposta sim\n\n");
		funcao_escadaria();
	}
	
	if(char_acao == 'n'){
		printf("\n Harold já foi longe de mais para desistir agora, e segue em frente mesmo assim.\n\n");
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
	printf("\n\n O valor tirado do dado é %d", dado);
}
	
	
int funcao_escadaria(){
	
	printf(" Ao entrar na pirâmide Harold levanta sua tocha e observa a sala em que se encontra.\n Muitas teias de aranha e poeira indicam que ninguém passa por ali a muito tempo.\n A sala após a entrada é muito simples, apenas alguns destroços do que poderiam\n ser moveis ou estruturas antigas estão lá e existe apenas um caminho por onde seguir,\n uma escada muito íngreme que leva ao subsolo da pirâmide.\n\n Ao pisar no décimo degrau uma armadilha é ativada. Uma pedra enorme despenca do teto\n proximo a entrada e começa a rolar escada a baixo, Harold precisa correr o mais\n rápido possível para se salvar.");
	printf("\n Será jogado um dado, e Harold precisa tirar um número maior que 2 para escapar da armadilha.");
	printf("\n Aperte qualquer tecla para rolar o dado.");

	getch();
	rolamento_dado();
	
	if(dado <= 2){

	printf("\n Harold não conseguiu escapar da armadilha. \n\n GAME OVER!! \n\n");
	
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
			printf("\n O jogo será finalizado.\n\n");
			exit(0);
		}
	}
			else{		
			funcao_charada();
		}
}

	
int funcao_charada(){
	
	printf("\n\n Harold corre como um louco escada abaixo, e por pouco consegue entrar na próxima\n sala. A entrada era estreita então a pedra não conseguiu segui-lo. A pedra só\n bloqueou metade da porta, o que deixou Harold aliviado pois sabia que conseguiria\n voltar por onde veio.");
	printf(" A sala onde estava não tinha saída, apenas três alavancas, na parede podia se\n observar hieroglifos. Harold limpa a poeira de cima e consegue traduzir o que\n está escrito, uma charada:\n\n");
	printf("\n “Qual o ser que de manhã tem quatro patas; de tarde, tem duas; e de noite, tem três?\".\n\n");
	
	printf(" Na alavanca 1 estava escrito \"homem\".\n na alavanca 2 \"Ornitorrinco\".\n na alavanca 3 \"Escorpião\".\n");

	printf("\n Qual alavanca você deseja acionar? (1, 2 ou 3)\n\n Ele deveria responder com muita cautela pois tinha a impressão\n que não seria perdoado se errasse.\n ");

	fflush(stdin);
	scanf("%d", &opcao);

switch (opcao)
{
	case 1:
    printf ("\n Ao ativar a alavanca Harold escuta um barulho e sente o chão tremer. Ele quase\n não acredita mas logo a sua frente a parede se abre como uma porta e ele consegue\n ver a próxima sala. Ao entrar e iluminar com sua tocha ele é cegado por uns\n instantes com a intensidade da luminosidade que refletia nos tesouros e joias\n espelhadas pelo chão e cantos da sala. Ao centro o que buscara a tanto tempo,\n o sarcófago do primeiro faraó, todo feito em ouro. Sua jornada tinha valido a pena\n e todo seu trabalho fora recompensado, Harold cumpriu seu objetivo!\n\n");
	break;

	case 2:
	printf("\n Ao ativar a alavanca, gases venenosos começaram a entrar na sala.\n Harold não conseguiu escapar da armadilha. \n\n GAME OVER!! \n\n");
	
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
			printf("\n O jogo será finalizado.\n\n");
			exit(0);
		}
   
   case 3:
	printf("\n Ao ativar a alavanca, gases venenosos começaram a entrar na sala.\n Harold não conseguiu escapar da armadilha. \n\n GAME OVER!! \n\n");
	
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
			printf("\n O jogo será finalizado.\n\n");
			exit(0);
		}
   break;
   default:
    printf ("Erro, o número digitado não é uma opção.");
    funcao_charada();
}

	printf(" Fim de jogo.");
	getch();

}



