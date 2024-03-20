#include <stdio.h>
#include <string.h>
#include <locale.h> // Para setlocale()
#include <windows.h> // Para obter informações sobre a janela do console
#include <time.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <ctype.h>



// Função para centralizar o texto na tela
void centralizarTexto(int larguraTexto)
{
    int larguraJanela = GetSystemMetrics(SM_CXSCREEN); // Obtém a largura da tela
    int posicaoX = (larguraJanela - larguraTexto) / 2;
    COORD coord;
    coord.X = posicaoX;
    coord.Y = 0; // Define a posição Y como 0 (parte superior da tela)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void exibirMenu()
{
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|                      MUSEU VERSO                     |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|  0 - Sair                                            |\n");
    printf("\t\t\t\t\t\t\t|  1 - Exposições                                      |\n");
    printf("\t\t\t\t\t\t\t|  2 - Venda de ingressos                              |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
    printf("\t\t\t\t\t\t\tEscolha uma opção: ");

}


void exposicoes()
{

    int exp = 0; //"exp" abreviado de Exposição. Vai ser a escolha do usuário para acessar o Menu.

    do
    {
        system("cls");

        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|                    Menu de Exposições                |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|  0 - Retornar ao Menu Principal                      |\n");
        printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
        printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
        printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
        printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

        printf("\t\t\t\t\t\t\tEscolha uma opção: ");

        fflush(stdin); //Esse comando "limpa o buffer do teclado". O programa irá ignorar as Letras digitadas.
        exp = -1;      //Essa parte também é necessária para o comando Flush funcionar.
        scanf("%d", &exp);

        //Quando aprendermos a armazenar cadastros de usuários, lembrar de criar "case" abaixo.
        switch (exp)
        {
            case 0:
                break;

            case 1:
                system("cls");

                printf("\t\t\t\t\t\t\t\t**************************************\n");
                printf("\t\t\t\t\t\t\t\t****** 100 ANOS DE ARTE MODERNA ******\n");
                printf("\t\t\t\t\t\t\t\t**************************************\n\n");
                printf("************************************************************************************************************************************************************************\n");
                printf("  A Semana de Arte Moderna ocorreu em fevereiro de 1922, em Sao Paulo, como um evento que buscava estabelecer uma identidade nacional para o Brasil e romper com as \ntradicoes artisticas da epoca. Ela aconteceu 100 anos apos a Independencia do Brasil, 34 anos apos a abolicao da escravidao e 4 anos apos o fim da Primeira Guerra\nMundial. Os intelectuais brasileiros estavam preocupados com o desenvolvimento do pais em comparacao com os Estados Unidos, que se tornaram uma grande potencia apos a \nPrimeira Guerra Mundial.\n  A Semana de Arte Moderna teve participacao de diversos artistas e intelectuais, principalmente de Sao Paulo, como Anita Malfatti, Di Cavalcanti, Tarsila do Amaral, \nMario de Andrade, Oswald de Andrade, entre outros. O evento teve programacao tematica nas areas de artes visuais, literatura e musica, embora tenha tido uma recepcao \nnegativa por parte dos conservadores da epoca.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 1/3\n\n");
                system("pause"); //Espera imput qualquer para continuar.
                system("cls");   //Colocar PAUSE e CLS sempre após acabar uma "Pagina".

                printf("\t\t\t\t\t\t\t\t**************************************\n");
                printf("\t\t\t\t\t\t\t\t****** 100 ANOS DE ARTE MODERNA ******\n");
                printf("\t\t\t\t\t\t\t\t**************************************\n\n");
                printf("************************************************************************************************************************************************************************\n");
                printf("  Anita Malfatti e Tarsila do Amaral foram artistas importantes para o movimento modernista, com suas obras demonstrando uma mudanca na producao artistica, afastando-sedas tradicoes academicas e parnasianistas. A obra \"Abaporu\" de Tarsila do Amaral se tornou iconica, embora tenha sido criada apos a Semana de Arte Moderna. A Semana de Arte Moderna e celebra-da como um marco na historia cultural do Brasil, mas e importante olha-la criticamente, ja que sua importancia foi construida posteriormente.\n  Ela foi realizada por uma elite branca de Sao Paulo, influenciada por ideais europeus, e nao abordou adequadamente as questoes de identidade e diversidade do Brasil. Artistas contemporaneos estao buscando incorporar relacoes raciais, LGBTQIA+, de mulheres e indigenas em suas producoes, tornando as artes mais inclusivas e \nrepresentativas da diversidade do pais.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 2/3\n\n");
                system("pause");
                system("cls");

                printf("\t\t\t\t\t\t\t\t**************************************\n");
                printf("\t\t\t\t\t\t\t\t****** 100 ANOS DE ARTE MODERNA ******\n");
                printf("\t\t\t\t\t\t\t\t**************************************\n\n");
                printf("************************************************************************************************************************************************************************\n");
                printf("  E importante entender a Semana de Arte Moderna em seu contexto historico e se aproximar das producoes artisticas contemporaneas para compreender a evolucao da culturabrasileira. Artistas como Rosana Paulino, Priscila Resende, Sergio Adriano, Rosa Luz, Ventura Profana, Uyra Sodoma, Denilson Baniwa, Isael Maxakali, Sallisa Rosa, \nDaiely Goncalves e Yan Nicolas Sao Thiago sao exemplos que merecem atencao.\n  Os 100 Anos de Arte Moderna faz referencia a um periodo artistico que foi marcado por mudancas radicais. Foi um periodo de rejeicao das normas convencionais e busca \nnovas formas de expressao.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 3/3\n\n");
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");

                printf("\t\t\t\t\t\t\t\t*************************************\n");
                printf("\t\t\t\t\t\t\t\t*****  JOGOS OLIMPICOS EM PARIS *****\n");
                printf("\t\t\t\t\t\t\t\t*************************************\n\n");
                printf("************************************************************************************************************************************************************************\n");
                printf("  As Olimpiadas de 2024 serao realizadas em Paris, marcando o retorno da cidade como anfitria apos um seculo. A ultima vez que Paris sediou os Jogos foi em 1924. \nDurante esse periodo de 100 anos, varias mudancas significativas ocorreram no cenario olimpico e esportivo. Em 1924, os Jogos tiveram 3.088 atletas de 44 paises, com \napenas 12 atletas representando o Brasil em tres modalidades. O Brasil nao conquistou medalhas nessa edicao.\n  Para os Jogos de 2024, sao esperados 10.500 atletas de mais de 200 paises competindo em 239 eventos de 38 modalidades. Essa edicao marcara a estreia do breakdance \ncomo modalidade olimpica. Alem disso, havera igualdade na participacao de atletas masculinos e femininos, com 50%% de cada, e um aumento nas provas mistas entre homens emulheres, de 18 para 22 em comparacao com os Jogos de Toquio.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 1/2\n\n");
                system("pause");
                system("cls");

                printf("\t\t\t\t\t\t\t\t*************************************\n");
                printf("\t\t\t\t\t\t\t\t*****  JOGOS OLIMPICOS EM PARIS *****\n");
                printf("\t\t\t\t\t\t\t\t*************************************\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("  Esses dados refletem o avanco da participacao feminina no esporte, ja que em 1924 as mulheres representavam apenas 4,4%% dos competidores. A busca pela igualdade de \ngenero no esporte faz parte das recomendacoes do Programa Olimpico e das metas da Agenda 2030, especialmente no Objetivo de Desenvolvimento Sustentavel (ODS) 5, que \nvisa alcancar a igualdade de genero e empoderamento das mulheres e criancas.\n  Quanto aos resultados comparativos, ainda nao se sabe quantos atletas brasileiros participarao e em quais modalidades eles competirao em 2024, ja que as competicoes \nclassificatorias estao em andamento. No entanto, ha expectativas de superar o desempenho da ultima edicao, com 302 atletas em 35 modalidades diferentes e a conquista de21 medalhas (7 de ouro,6 de prata e 8 de bronze) nos Jogos de Toquio. Essas conquistas nao apenas fazem historia para o Brasil, mas tambem contribuem para a igualdade \nde genero no esporte.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 2/2\n\n");
                system("pause");
                system("cls");
                break;


            case 3:
                system("cls");

                printf("\t\t\t\t\t\t\t\t*************************************\n");
                printf("\t\t\t\t\t\t\t\t***** 150 ANOS DE SANTOS DUMONT *****\n");
                printf("\t\t\t\t\t\t\t\t*************************************\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("  Ha 150 anos, em 20 de julho de 1873, nasceu o inventor brasileiro Alberto Santos Dumont, conhecido como o \"pai da aviacao\". Ele criou os primeiros dirigiveis e fez \nvoos notaveis ao redor da Torre Eiffel. Santos Dumont tambem foi o primeiro a decolar com um aviao propulsado por motor a gasolina, sem a ajuda do vento ou de rampas delancamento. Alem de suas contribuicoes para a aviacao, ele e creditado por inventar a porta de correr em hangares, adaptar o relogio de bolso para uso no pulso e \ndesenvolver o chuveiro para banhos quentes e frios.\n  Apesar de suas realizacoes na aviacao, existe uma controversia internacional sobre o reconhecimento de Santos Dumont como o inventor do aviao. Enquanto no Brasil ele e amplamente reconhecido, a Federacao Aeronautica Internacional e grande parte do mundo atribuem o credito aos irmaos Wright dos Estados Unidos. A disputa se baseia na falta de evidencias solidas para comprovar o voo dos Wright em 1903, enquanto Santos Dumont realizou um voo oficial perante uma comissao de especialistas.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 1/2\n\n");
                system("pause");
                system("cls");

                printf("\t\t\t\t\t\t\t\t*************************************\n");
                printf("\t\t\t\t\t\t\t\t***** 150 ANOS DE SANTOS DUMONT *****\n");
                printf("\t\t\t\t\t\t\t\t*************************************\n\n");
                printf("************************************************************************************************************************************************************************\n");
                printf("  Santos Dumont nasceu em Minas Gerais, Brasil, e mudou-se para Paris em 1891, onde testemunhou varias revolucoes tecnologicas e culturais. Ele comecou sua carreira na aviacao com baloes dirigiveis, mas depois se concentrou em aeronaves mais pesadas que o ar. Seu famoso aviao, o 14-Bis, realizou um voo historico em 1906, sem rampas ouvento, apenas com a propulsao do motor.\n  Apos suas conquistas, Santos Dumont voltou ao Brasil, mas sua saude mental se deteriorou, e ele morreu em 1932, com um ato de suicidio, possivelmente devido ao \ndesgosto de ver sua invencao sendo usada como arma de guerra durante a Revolucao Constitucionalista. Sua fama perdura ate hoje, e uma cratera na Lua foi nomeada em sua homenagem em 1973, por ocasiao do centenario de seu nascimento.\n  Alberto Santos Dumont e uma figura iconica da historia da aviacao, cujas inovacoes e conquistas tiveram um impacto duradouro na tecnologia e cultura brasileira, bem \ncomo na historia mundial da aviacao.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 2/2\n\n");
                system("pause");
                system("cls");
                break;

            case 4:
                system("cls");

                printf("\t\t\t\t\t\t\t\t**************************************\n");
                printf("\t\t\t\t\t\t\t\t**** O PRIMEIRO COMPUTADOR CRIADO ****\n");
                printf("\t\t\t\t\t\t\t\t**************************************\n\n");
                printf("************************************************************************************************************************************************************************\n");
                printf("  O ENIAC (Electronic Numerical Integrator and Computer) foi o primeiro computador digital e eletronico programavel do mundo. Foi desenvolvido durante a Segunda Guerra Mundial, por uma equipe majoritariamente feminina, composta por seis mulheres pioneiras: Kathleen Antonelli, Jean Bartik, Frances \"Betty\" Holberton, Marlyn Meltzer, \nFrances Spence e Ruth Teitelbaum. Elas desempenharam um papel crucial na programacao do ENIAC, apesar de seu trabalho ter sido obscurecido ao longo da historia e \nreconhecido decadas depois.\n  O ENIAC foi projetado para realizar calculos complexos em uma fracao do tempo que levaria um ser humano. Para programa-lo, as mulheres usaram fios e interruptores, \ntornando o processo demorado e propenso a erros. O computador ocupava um grande espaco, pesava mais de 30 toneladas e tinha milhares de valvulas de vacuo e juntas \nsoldadas a mao.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 1/2\n\n");
                system("pause");
                system("cls");

                printf("\t\t\t\t\t\t\t\t**************************************\n");
                printf("\t\t\t\t\t\t\t\t**** O PRIMEIRO COMPUTADOR CRIADO ****\n");
                printf("\t\t\t\t\t\t\t\t**************************************\n\n");
                printf("************************************************************************************************************************************************************************\n");
                printf("  Apesar de seu sucesso, as programadoras do ENIAC nao receberam reconhecimento imediato por seu trabalho. Elas acabaram nao sendo convidadas para eventos comemorativose suas contribuicoes foram esquecidas por decadas. No entanto, essas mulheres abriram caminho para a participacao feminina na tecnologia e engenharia.\n  Kathy Kleiman, autora do livro \"Proving Ground\", e criadora do Projeto ENIAC Programmers, dedicou-se a resgatar e divulgar as historias dessas mulheres pioneiras. Elaproduziu um documentario e promoveu eventos para compartilhar suas conquistas e inspirar outras mulheres a seguir carreiras na area de tecnologia e computacao.\n\n");
                printf("************************************************************************************************************************************************************************\n\n");
                printf("Pagina 2/2\n\n");
                system("pause");
                system("cls");
                break;


            default:
                system("cls");
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t--------------------------------------------------------\n");
                printf("\t\t\t\t\t\t\t|                    Menu de Exposições                |\n");
                printf("\t\t\t\t\t\t\t--------------------------------------------------------\n\n");
                printf("\t\t\t\t\t\t\t\t\t    OPCÃO INVALIDA!!!.\n\n\n\n\n");
                system("pause");
                break;
        }

    }
    while (exp != 0);

    return 0;
}


int exposicao100AnosAcessada = 0; // Inicialmente não acessada
int exposicao150AnosAcessada = 0;
int exposicaoJogosOlimpicosAcessada = 0;
int exposicaoprimeiroComputadorCriadoAcessada = 0;


// Define uma estrutura para armazenar informações da pessoa
struct Pessoa
{
    int id; // ID único para cada pessoa
    char nome[100];
    char idade_str[5];
    int idade;
    char status[20]; // Variável para Adulto/Estudante/Criança/Idoso
    char ingresso[20]; // Variável para o tipo de ingresso
    char exposicao[100]; // Variável para armazenar temporariamente a exposição escolhida, que será copiada para as seguintes variáveis conforme necessário:
    char exposicaonum[4][100]; // Varíavel para armazenar o nome das exposições compradas
    int foiPago; // Variável para a confirmação de pagamento
    int comprarExp; // Variável para o processo de compra das exposicoes
    int quantasExp; // Variável para o numero de exposicoes que esta sendo comprado
    float valorapagar; // Variável para o valor total a ser pago
    int exposicoesEscolhidas[4]; // Array para rastrear as exposições escolhidas (0 - não escolhido, 1 - escolhido)
};

int obterUltimoIDUsado()
{
    FILE* arquivo = fopen("informacoes.txt", "r");
    int ultimoID = 0;
    if (arquivo != NULL)
    {
        char linha[200];
        while (fgets(linha, sizeof(linha), arquivo) != NULL)
        {
            int idLido;
            if (sscanf(linha, "ID: %d", &idLido) == 1)
            {
                if (idLido > ultimoID)
                {
                    ultimoID = idLido;
                }
            }
        }
        fclose(arquivo);
    }
    return ultimoID;
}


int ticket = 0;
void vendaTicket()
{

    // Defina o nome do arquivo onde você deseja armazenar o tikcet
    const char* arquivo = "contador.txt";

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia o ticket armazenado
        fscanf(arquivo_contador, "%d", &ticket);
        fclose(arquivo_contador);
    }

    // Incrementa o ticket
    ticket++;

    // Abre o arquivo para escrita e atualiza o ticket
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ticket);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Sem vendas %s\n", arquivo);
        return 1;
    }
}

void quantidadeDeTickets()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "contador.txt"; // Nome do arquivo a ser aberto
    int ticketLido; // Variável para armazenar o ticket lido do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\t\tNão foi possível abrir o arquivo %s.\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê o ticket do arquivo
        if (fscanf(arquivo, "%d", &ticketLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tIngressos: %d\n", ticketLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }
}

int totalTickets = 0;

void cancelaTicket(int totalTickets)
{
    // Defina o nome do arquivo onde você deseja armazenar o ticket
    const char* arquivo = "contador.txt";

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia o ticket armazenado
        fscanf(arquivo_contador, "%d", &ticket);
        fclose(arquivo_contador);
    }

    // Subtrai o valor de totalTickets do ticket
    ticket -= totalTickets;

    // Abre o arquivo para escrita e atualiza o ticket
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ticket);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Sem vendas %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }

}

//------------------------------------------------------------------
float calcularTotalVendas()
{
    const char* arquivoVendasMeia = "vendaMeia.txt";
    const char* arquivoVendasInteira = "vendaInteira.txt";

    float totalVendasMeia = 0.0;
    float totalVendasInteira = 0.0;

    FILE* arquivo_vendas_meia = fopen(arquivoVendasMeia, "r");
    FILE* arquivo_vendas_inteira = fopen(arquivoVendasInteira, "r");

    if (arquivo_vendas_meia)
    {
        fscanf(arquivo_vendas_meia, "%f", &totalVendasMeia);
        fclose(arquivo_vendas_meia);
    }
    else
    {
        printf("\t\t\t\t\t\t\t\tSem vendas meia\n");
    }

    if (arquivo_vendas_inteira)
    {
        fscanf(arquivo_vendas_inteira, "%f", &totalVendasInteira);
        fclose(arquivo_vendas_inteira);
    }
    else
    {
        printf("\t\t\t\t\t\t\t\tSem vendas inteira\n");
    }

    float totalVendas = totalVendasMeia + totalVendasInteira;
    printf("\t\t\t\t\t\t\t\tTotal de vendas: %.2f R$\n", totalVendas);

    return totalVendas;
}


//-------------------------------------------------------------------

int ticketGratuito = 0;
void vendaTicketGratuito()
{

    // Defina o nome do arquivo onde você deseja armazenar o tikcet
    const char* arquivo = "contadorGratuito.txt";

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia o ticket armazenado
        fscanf(arquivo_contador, "%d", &ticketGratuito);
        fclose(arquivo_contador);
    }

    // Incrementa o ticket
    ticketGratuito++;

    // Abre o arquivo para escrita e atualiza o ticket
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ticketGratuito);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Sem vendas %s\n", arquivo);
        return 1;
    }
}

void quantidadeDeTicketsGratuito()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "contadorGratuito.txt"; // Nome do arquivo a ser aberto
    int ticketLido; // Variável para armazenar o ticket lido do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\tSem vendas %s.\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê o ticket do arquivo
        if (fscanf(arquivo, "%d", &ticketLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tIngressos: %d\n", ticketLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }
}

int cancelaGratuito = 0;

void cancelaTicketGratuito(int cancelaGratuito)
{
    // Defina o nome do arquivo onde você deseja armazenar o ticket
    const char* arquivo = "contadorGratuito.txt";

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia o ticket armazenado
        fscanf(arquivo_contador, "%d", &ticketGratuito);
        fclose(arquivo_contador);
    }

    // Subtrai o valor de totalTickets do ticket
    ticketGratuito -= cancelaGratuito;

    // Abre o arquivo para escrita e atualiza o ticket
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ticketGratuito);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Sem vendas %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }

}

//--------------------------------------------------------------

int ingressoInteiro = 0;
float totalVendaInteira = 0;

void vendaIngressoInteira()
{
    // Defina o nome do arquivo onde você deseja armazenar o ingresso inteiro
    const char* arquivo = "contadorInteiro.txt";
    const char* arquivo2 = "vendaInteira.txt";

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");
    FILE* arquivo_contador2 = fopen(arquivo2, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia o ingresso inteiro armazenado
        fscanf(arquivo_contador, "%d", &ingressoInteiro);
        fclose(arquivo_contador);
    }

    if (arquivo_contador2)
    {
        // Se o arquivo existe, leia o total de vendas inteira armazenado
        fscanf(arquivo_contador2, "%f", &totalVendaInteira);
        fclose(arquivo_contador2);
    }

    // Incrementa o ingresso inteiro
    ingressoInteiro++;

    // Calcula o valor total das vendas inteira
    totalVendaInteira = ingressoInteiro * 5.00;

    // Abre o arquivo para escrita e atualiza o ingresso inteiro
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ingressoInteiro);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }

    // Abre o arquivo para escrita e atualiza o valor total das vendas inteira
    arquivo_contador2 = fopen(arquivo2, "w");
    if (arquivo_contador2)
    {
        fprintf(arquivo_contador2, "%.2f", totalVendaInteira);
        fclose(arquivo_contador2);
    }
    else
    {
        printf("\t\t\t\t\t\t\t Sem vendas\n", arquivo2);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}

void quantidadeDeIngressosInteira()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "contadorInteiro.txt"; // Nome do arquivo a ser aberto
    int ingressoLido; // Variável para armazenar o ingresso inteiro lido do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\tSem vendas\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê o ingresso inteiro do arquivo
        if (fscanf(arquivo, "%d", &ingressoLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tIngressos: %d\n", ingressoLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }

    // Agora, leia o valor total de vendas inteira do arquivo "vendaInteira.txt"
    const char* arquivoVendasInteira = "vendaInteira.txt";
    float valorVendasInteira = 0.0;

    FILE* arquivo_vendas_inteira = fopen(arquivoVendasInteira, "r");
    if (arquivo_vendas_inteira)
    {
        fscanf(arquivo_vendas_inteira, "%f", &valorVendasInteira);
        printf("\t\t\t\t\t\t\t\tValor total: %.2f R$\n", valorVendasInteira);
        fclose(arquivo_vendas_inteira);
    }
    else
    {
        printf("\t\t\t\t\t\t\t\tValor total das vendas inteira: Sem vendas\n");
    }
}

int cancelaIngressoInteira = 0;

void fcancelaIngressoInteira(int quantidadeCancelada)
{
    // Defina o nome do arquivo onde você deseja armazenar o ingresso inteiro
    const char* arquivo = "contadorInteiro.txt";
    const char* arquivoVendasInteira = "vendaInteira.txt";

    // Abre o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");
    FILE* arquivo_vendas_inteira = fopen(arquivoVendasInteira, "r");

    if (arquivo_contador && arquivo_vendas_inteira)
    {
        // Se os arquivos existem, leia o ingresso inteiro e o valor total das vendas inteira armazenados
        fscanf(arquivo_contador, "%d", &ingressoInteiro);
        fscanf(arquivo_vendas_inteira, "%f", &totalVendaInteira);

        fclose(arquivo_contador);
        fclose(arquivo_vendas_inteira);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s ou %s\n", arquivo, arquivoVendasInteira);
        return; // Não retorne um valor em uma função do tipo "void"
    }

    // Subtrai a quantidade de ingressos cancelados do ingresso inteiro
    ingressoInteiro -= quantidadeCancelada;

    // Subtrai o valor dos ingressos cancelados do valor total das vendas inteira
    totalVendaInteira -= (quantidadeCancelada * 5.00);

    // Abre o arquivo para escrita e atualiza o ingresso inteiro
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ingressoInteiro);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }

    // Abre o arquivo para escrita e atualiza o valor total das vendas inteira
    arquivo_vendas_inteira = fopen(arquivoVendasInteira, "w");
    if (arquivo_vendas_inteira)
    {
        fprintf(arquivo_vendas_inteira, "%.2f", totalVendaInteira);
        fclose(arquivo_vendas_inteira);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivoVendasInteira);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}


//---------------------------------------------------------------------------

int ingressoMeia = 0;
float totalVendaMeia = 0;

void vendaIngressoMeia()
{
    // Defina o nome do arquivo onde você deseja armazenar o ingresso meia
    const char* arquivo = "contadorMeia.txt";
    const char* arquivo2 = "vendaMeia.txt";

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");
    FILE* arquivo_contador2 = fopen(arquivo2, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia o ingresso meia armazenado
        fscanf(arquivo_contador, "%d", &ingressoMeia);
        fclose(arquivo_contador);
    }

    if (arquivo_contador2)
    {
        // Se o arquivo existe, leia o total de vendas meia armazenado
        fscanf(arquivo_contador2, "%f", &totalVendaMeia);
        fclose(arquivo_contador2);
    }

    // Incrementa o ingresso meia
    ingressoMeia++;

    // Calcula o valor total das vendas meia
    totalVendaMeia = ingressoMeia * 2.5;

    // Abre o arquivo para escrita e atualiza o ingresso meia
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ingressoMeia);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }

    // Abre o arquivo para escrita e atualiza o valor total de vendas meia
    arquivo_contador2 = fopen(arquivo2, "w");
    if (arquivo_contador2)
    {
        fprintf(arquivo_contador2, "%.2f", totalVendaMeia);
        fclose(arquivo_contador2);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo2);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}

void quantidadeDeIngressosMeia()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "contadorMeia.txt"; // Nome do arquivo a ser aberto
    int ingressoLido; // Variável para armazenar o ingresso meia lido do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\tSem vendas\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê o ingresso meia do arquivo
        if (fscanf(arquivo, "%d", &ingressoLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tIngressos: %d\n", ingressoLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }

    // Agora, leia o valor total de vendas meia do arquivo "vendaMeia.txt"
    const char* arquivoVendasMeia = "vendaMeia.txt";
    float valorVendasMeia = 0.0;

    FILE* arquivo_vendas_meia = fopen(arquivoVendasMeia, "r");
    if (arquivo_vendas_meia)
    {
        fscanf(arquivo_vendas_meia, "%f", &valorVendasMeia);
        printf("\t\t\t\t\t\t\t\tValor total: %.2f R$\n", valorVendasMeia);
        fclose(arquivo_vendas_meia);
    }
    else
    {
        printf("\t\t\t\t\t\t\t\tValor total das vendas meia: Sem vendas\n");
    }
}


int cancelaIngressoMeia = 0;

void fcancelaIngressoMeia(int quantidadeCancelada)
{
    // Defina o nome do arquivo onde você deseja armazenar o ingresso meia
    const char* arquivo = "contadorMeia.txt";
    const char* arquivoVendasMeia = "vendaMeia.txt";

    // Abre o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");
    FILE* arquivo_vendas_meia = fopen(arquivoVendasMeia, "r");

    if (arquivo_contador && arquivo_vendas_meia)
    {
        // Se os arquivos existem, leia o ingresso meia e o valor total das vendas meia armazenados
        fscanf(arquivo_contador, "%d", &ingressoMeia);
        fscanf(arquivo_vendas_meia, "%f", &totalVendaMeia);

        fclose(arquivo_contador);
        fclose(arquivo_vendas_meia);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s ou %s\n", arquivo, arquivoVendasMeia);
        return; // Não retorne um valor em uma função do tipo "void"
    }

    // Subtrai a quantidade de ingressos cancelados do ingresso meia
    ingressoMeia -= quantidadeCancelada;

    // Subtrai o valor dos ingressos cancelados do valor total das vendas meia
    totalVendaMeia -= (quantidadeCancelada * 2.5); // Supondo que o valor do ingresso meia seja 2.5

    // Abre o arquivo para escrita e atualiza o ingresso meia
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ingressoMeia);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }

    // Abre o arquivo para escrita e atualiza o valor total das vendas meia
    arquivo_vendas_meia = fopen(arquivoVendasMeia, "w");
    if (arquivo_vendas_meia)
    {
        fprintf(arquivo_vendas_meia, "%.2f", totalVendaMeia);
        fclose(arquivo_vendas_meia);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivoVendasMeia);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}


//----------------------------------------------------------

void cemAnosDaArteModernaVenda()
{
    // Defina o nome do arquivo onde você deseja armazenar a quantidade de ingressos vendidos
    const char* arquivo = "cemAnos.txt";
    int quantidadeVendida = 0;

    // Abre o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia a quantidade de ingressos vendidos
        fscanf(arquivo_contador, "%d", &quantidadeVendida);
        fclose(arquivo_contador);
    }

    // Incrementa a quantidade de ingressos vendidos
    quantidadeVendida++;

    // Abre o arquivo para escrita e atualiza a quantidade de ingressos vendidos
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", quantidadeVendida);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}

void cemAnosDaArteModernaQuantidadeDeIngressos()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "cemAnos.txt"; // Nome do arquivo a ser aberto
    int ingressoLido; // Variável para armazenar a quantidade de ingressos lida do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\tNão foi possível abrir o arquivo %s.\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê a quantidade de ingressos do arquivo
        if (fscanf(arquivo, "%d", &ingressoLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tQuantidade: %d\n", ingressoLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }
}

int cancelaExposicao100Anos = 0;

void cancelaIngressoExposicao100Anos(int cancelaExposicao100Anos)
{
    // Defina o nome do arquivo onde você deseja armazenar o ingresso da exposição 100 anos
    const char* arquivo = "cemAnos.txt";
    int ingressoVendido = 0;

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia a quantidade de ingressos vendidos
        fscanf(arquivo_contador, "%d", &ingressoVendido);
        fclose(arquivo_contador);
    }

    // Subtrai o valor de cancelaExposicao100Anos da quantidade de ingressos vendidos
    ingressoVendido -= cancelaExposicao100Anos;

    // Abre o arquivo para escrita e atualiza a quantidade de ingressos vendidos
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ingressoVendido);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}

//----------------------------------------------------------------------------

void santosDumontVenda()
{
    // Defina o nome do arquivo onde você deseja armazenar a quantidade de ingressos vendidos
    const char* arquivo = "santosDumont.txt";
    int quantidadeVendida = 0;

    // Abre o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia a quantidade de ingressos vendidos
        fscanf(arquivo_contador, "%d", &quantidadeVendida);
        fclose(arquivo_contador);
    }

    // Incrementa a quantidade de ingressos vendidos
    quantidadeVendida++;

    // Abre o arquivo para escrita e atualiza a quantidade de ingressos vendidos
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", quantidadeVendida);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}

void santosDumontQuantidadeDeIngressos()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "santosDumont.txt"; // Nome do arquivo a ser aberto
    int ingressoLido; // Variável para armazenar a quantidade de ingressos lida do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\tNão foi possível abrir o arquivo %s.\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê a quantidade de ingressos do arquivo
        if (fscanf(arquivo, "%d", &ingressoLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tQuantidade: %d\n", ingressoLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }
}


int cancelaExposicaoSantosDumont = 0;

void cancelaIngressoSantosDumont(int cancelaExposicaoSantosDumont)
{
    // Defina o nome do arquivo onde você deseja armazenar o ingresso da exposição Santos Dumont
    const char* arquivo = "santosDumont.txt";
    int ingressoVendido = 0;

    // Abra o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia a quantidade de ingressos vendidos
        fscanf(arquivo_contador, "%d", &ingressoVendido);
        fclose(arquivo_contador);
    }

    // Subtrai o valor de cancelaExposicaoSantosDumont da quantidade de ingressos vendidos
    ingressoVendido -= cancelaExposicaoSantosDumont;

    // Abre o arquivo para escrita e atualiza a quantidade de ingressos vendidos
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", ingressoVendido);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}



//----------------------------------------------------------------------------

void jogosOlimpicosVenda()
{
    // Defina o nome do arquivo onde você deseja armazenar a quantidade de ingressos vendidos
    const char* arquivo = "jogosOlimpicos.txt";
    int quantidadeVendida = 0;

    // Abre o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia a quantidade de ingressos vendidos
        fscanf(arquivo_contador, "%d", &quantidadeVendida);
        fclose(arquivo_contador);
    }

    // Incrementa a quantidade de ingressos vendidos
    quantidadeVendida++;

    // Abre o arquivo para escrita e atualiza a quantidade de ingressos vendidos
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", quantidadeVendida);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}

void jogosOlimpicosQuantidadeDeIngressos()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "jogosOlimpicos.txt"; // Nome do arquivo a ser aberto
    int ingressoLido; // Variável para armazenar a quantidade de ingressos lida do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\tNão foi possível abrir o arquivo %s.\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê a quantidade de ingressos do arquivo
        if (fscanf(arquivo, "%d", &ingressoLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tQuantidade: %d\n", ingressoLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }
}

//----------------------------------------------------------------------------

void primeiroComputadorCriadoVenda()
{
    // Defina o nome do arquivo onde você deseja armazenar a quantidade de ingressos vendidos
    const char* arquivo = "primeiroComputadorCriado.txt";
    int quantidadeVendida = 0;

    // Abre o arquivo para leitura
    FILE* arquivo_contador = fopen(arquivo, "r");

    if (arquivo_contador)
    {
        // Se o arquivo existe, leia a quantidade de ingressos vendidos
        fscanf(arquivo_contador, "%d", &quantidadeVendida);
        fclose(arquivo_contador);
    }

    // Incrementa a quantidade de ingressos vendidos
    quantidadeVendida++;

    // Abre o arquivo para escrita e atualiza a quantidade de ingressos vendidos
    arquivo_contador = fopen(arquivo, "w");
    if (arquivo_contador)
    {
        fprintf(arquivo_contador, "%d", quantidadeVendida);
        fclose(arquivo_contador);
    }
    else
    {
        printf("Erro ao abrir o arquivo %s\n", arquivo);
        return; // Não retorne um valor em uma função do tipo "void"
    }
}

void primeiroComputadorCriadoQuantidadeDeIngressos()
{
    FILE* arquivo; // Declara um ponteiro de arquivo
    const char* nomeDoArquivo = "primeiroComputadorCriado.txt"; // Nome do arquivo a ser aberto
    int ingressoLido; // Variável para armazenar a quantidade de ingressos lida do arquivo

    // Abre o arquivo para leitura
    arquivo = fopen(nomeDoArquivo, "r");

    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL)
    {
        printf("\t\t\t\t\t\t\t\tNão foi possível abrir o arquivo %s.\n", nomeDoArquivo);
        return; // Encerra a função
    }
    else
    {
        // Lê a quantidade de ingressos do arquivo
        if (fscanf(arquivo, "%d", &ingressoLido) == 1)
        {
            printf("\t\t\t\t\t\t\t\tQuantidade: %d\n", ingressoLido);
        }
        else
        {
            printf("\t\t\t\t\t\t\tSem vendas\n");
        }

        fclose(arquivo);
    }
}






void vendas()
{

    setlocale(LC_ALL, "Portuguese");

    int respostaEstudante;
    int pegaRespostaEstudante = 0;


    FILE* arquivo; // Abre o arquivo em modo de anexação (append) para adicionar informações
    arquivo = fopen("informacoes.txt", "a");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo informacoes.txt!\n");
        return 1;
    }

    time_t t; // Declara uma variável t do tipo time_t, que é uma representação de data e hora
    struct tm *data_hora; //Declara um ponteiro para uma estrutura struct tm chamada data_hora. Essa estrutura será usada para armazenar as informações detalhadas da data e hora
char sessao[80]; //Matriz que será usada para armazenar a string formatada que será escrita no arquivo
time(&t); // Atribui à variável t o tempo atual
data_hora = localtime(&t); // Atribui à variável data_hora o tempo atual
strftime(sessao, sizeof(sessao), "Sessão iniciada em: %d/%m/%Y %H:%M:%S", data_hora); // Formata a data e hora atual
fprintf(arquivo, "%s\n", sessao); // Escreve no arquivo
fclose(arquivo); // Fecha o arquivo
int idAtual = obterUltimoIDUsado(); // Obtém o último ID usado
int contagemVendas = 0; // Inicializa o número de vendas do dia com 0
int opcao; // Variável para a opção do menu
char resposta = 's';
int escolha_exposicao; // Variável para o menu de escolha de exposições
float precointeira = 5.00; // Define o preço da entrada inteira
float precomeia = (precointeira) / 2; // Define o preço da meia-entrada como metade do valor da entrada inteira
char nomeExposicao1[100] = "100 anos da semana de arte moderna";
char nomeExposicao2[100] = "150 anos de Santos Dumont";
char nomeExposicao3[100] = "Jogos Olímpicos de 2024";
char nomeExposicao4[100] = "O primeiro computador";
int leituraValida = 1;
int limite1 = -1, limite2 = -1, limite3 = -1, limite4 = -1;
int limitemax1 = 5;
int limitemax2 = 5;
int limitemax3 = 5;
int limitemax4 = 5;
system("pause");
system("cls"); // Limpa a tela

FILE* arquivolimite1;
arquivolimite1 = fopen("limite1.txt", "r");
if (arquivolimite1 == NULL)
{
    printf("Arquivo limite1.txt não encontrado, criando-o e atribuindo limite padrão %d.\n", limitemax1);
    system("pause");
    arquivolimite1 = fopen("limite1.txt", "w");
    fprintf(arquivolimite1, "%d", limitemax1);
    if (arquivolimite1 == NULL)
    {
        perror("Erro ao abrir o arquivo limite1.txt!\n");
        return 1;
    }
    fflush(arquivolimite1); // Limpa o buffer do arquivo
    fclose(arquivolimite1);
}
FILE* arquivolimite2;
arquivolimite2 = fopen("limite2.txt", "r");
if (arquivolimite2 == NULL)
{
    printf("Arquivo limite2.txt não encontrado, criando-o e atribuindo limite padrão %d.\n", limitemax2);
    system("pause");
    arquivolimite2 = fopen("limite2.txt", "w");
    fprintf(arquivolimite2, "%d", limitemax2);
    if (arquivolimite2 == NULL)
    {
        perror("Erro ao abrir o arquivo limite2.txt!\n");
        return 1;
    }
    fflush(arquivolimite2); // Limpa o buffer do arquivo
    fclose(arquivolimite2);
}
FILE* arquivolimite3;
arquivolimite3 = fopen("limite3.txt", "r");
if (arquivolimite3 == NULL)
{
    printf("Arquivo limite3.txt não encontrado, criando-o e atribuindo limite padrão %d.\n", limitemax3);
    system("pause");
    arquivolimite3 = fopen("limite3.txt", "w");
    fprintf(arquivolimite3, "%d", limitemax3);
    if (arquivolimite3 == NULL)
    {
        perror("Erro ao abrir o arquivo limite3.txt!\n");
        return 1;
    }
    fflush(arquivolimite3); // Limpa o buffer do arquivo
    fclose(arquivolimite3);
}
FILE* arquivolimite4;
arquivolimite4 = fopen("limite4.txt", "r");
if (arquivolimite4 == NULL)
{
    printf("Arquivo limite4.txt não encontrado, criando-o e atribuindo limite padrão %d.\n", limitemax4);
    system("pause");
    arquivolimite4 = fopen("limite4.txt", "w");
    fprintf(arquivolimite4, "%d", limitemax4);
    if (arquivolimite4 == NULL)
    {
        perror("Erro ao abrir o arquivo limite4.txt!\n");
        return 1;
    }
    fflush(arquivolimite4); // Limpa o buffer do arquivo
    fclose(arquivolimite4);
}

do
{
    FILE* arquivo;
    arquivo = fopen("informacoes.txt", "a"); // Abre o arquivo em modo de anexação (append) para adicionar informações
    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo informacoes.txt!\n");
        return 1;
    }
    arquivolimite1 = fopen("limite1.txt", "r");
    if (arquivolimite1 == NULL)
    {
        perror("Erro ao abrir o arquivo limite1.txt!\n");
        return 1;
    }
    arquivolimite2 = fopen("limite2.txt", "r");
    if (arquivolimite2 == NULL)
    {
        perror("Erro ao abrir o arquivo limite2.txt!\n");
        return 1;
    }
    arquivolimite3 = fopen("limite3.txt", "r");
    if (arquivolimite3 == NULL)
    {
        perror("Erro ao abrir o arquivo limite3.txt!\n");
        return 1;
    }
    arquivolimite4 = fopen("limite4.txt", "r");
    if (arquivolimite4 == NULL)
    {
        perror("Erro ao abrir o arquivo limite4.txt!\n");
        return 1;
    }

    fscanf(arquivolimite1, "%d", &limite1);
    fscanf(arquivolimite2, "%d", &limite2);
    fscanf(arquivolimite3, "%d", &limite3);
    fscanf(arquivolimite4, "%d", &limite4);

    system("cls"); // Limpa a tela
    printf("\n");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|                    Menu de Vendas                    |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|  0 - Retornar ao Menu Principal                      |\n");
    printf("\t\t\t\t\t\t\t|  1 - Cadastrar Venda                                 |\n");
    printf("\t\t\t\t\t\t\t|  2 - Listar Todas as Vendas                          |\n");
    printf("\t\t\t\t\t\t\t|  3 - Buscar Venda por ID                             |\n");
    printf("\t\t\t\t\t\t\t|  4 - Tickets Vendidos                                |\n");
    printf("\t\t\t\t\t\t\t|  5 - Exposições Vendidas                             |\n");
    printf("\t\t\t\t\t\t\t|  6 - Limites de Vendas                               |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
    printf("\t\t\t\t\t\t\tEscolha uma opção: ");


    int opcaoAux; // Usa uma variável auxiliar para ler a opção
    fflush(stdin);
    opcaoAux = -1;
    scanf("%d", &opcaoAux);
    system("cls");

    if (opcaoAux != 0 && opcaoAux != 1 && opcaoAux != 2 && opcaoAux != 3 && opcaoAux != 4 && opcaoAux != 5 && opcaoAux != 6)
    {
        system("cls"); // Limpa a tela
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|                    Menu de Vendas                    |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

        printf("\t\t\t\t\t\t\tOpção inválida. Por favor, digite um número entre 0 e 6.\n");
        system("pause");
        while (getchar() != '\n') ; // Limpa o buffer do teclado
        continue; // Volta ao início do loop para pedir a opção novamente
    }
    opcao = opcaoAux;

    switch (opcao)
    {

        case 0:
            printf("\n");
            system("pause");
            system("cls"); // Limpa a tela
            break;

        case 1:
            {
                int haexpdisponiveis = 1;
                if (limite1 < 1 && limite2 < 1 && limite3 < 1 && limite4 < 1)
                {
                    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                    printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
                    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
                    printf("\t\t\t\t\t\t\tLimite máximo de vendas atingido para todas as exposições.\n");
                }
                else
                {
                struct Pessoa pessoa;
idAtual++; // Incrementa o ID atual
pessoa.id = idAtual; // Atribui o ID à pessoa
system("cls");
pessoa.valorapagar = 0.00; // Reseta o valor a pagar por uma mesma pessoa
pessoa.quantasExp = 0; // Reseta a quantidade de exposicoes sendo compradas por uma mesma pessoa
pessoa.comprarExp = 1;
// Inicializa o array de exposições escolhidas como não escolhidas
int i;
for (i = 0; i < 4; i++)
{
    pessoa.exposicoesEscolhidas[i] = 0;
}

while (getchar() != '\n') ; // Limpa o buffer do teclado

// Solicita ao usuário que insira o nome completo (Apenas letras)
printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
printf("\t\t\t\t\t\t\tDigite o nome (Apenas letras): ");
do
{
    leituraValida = 1;

    if (fgets(pessoa.nome, sizeof(pessoa.nome), stdin) == NULL)
    {
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
        printf("\t\t\t\t\t\t\tErro na leitura do nome.\n");
        printf("\t\t\t\t\t\t\tDigite o nome (Apenas letras): ");
        return 1;
    }

    // Remove a quebra de linha do final do nome, se existir
    if (pessoa.nome[strlen(pessoa.nome) - 1] == '\n')
    {
        pessoa.nome[strlen(pessoa.nome) - 1] = '\0';
    }

    // Verifica se o nome contém apenas letras (sem números)
    int i;
    for (i = 0; i < strlen(pessoa.nome); i++)
    {
        if (!isalpha(pessoa.nome[i]) && pessoa.nome[i] != ' ')
        {
            leituraValida = 0;
            system("cls");
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
            printf("\t\t\t\t\t\t\tO nome contém símbolos ou números. Por favor, tente novamente.\n");
            printf("\t\t\t\t\t\t\tDigite o nome (Apenas letras): ");

            break;
        }
    }

    // Se o nome estiver vazio, também marque a leitura como inválida
    if (strlen(pessoa.nome) == 0)
    {
        leituraValida = 0;
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
        printf("\t\t\t\t\t\t\tO nome não pode estar vazio. Por favor, tente novamente.\n");
        printf("\t\t\t\t\t\t\tDigite o nome (Apenas letras): ");

    }

}
while (leituraValida != 1);
system("cls");
printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
printf("\t\t\t\t\t\t\tDigite a idade (Apenas números): "); // Solicita ao usuário que insira a idade
do
{
    leituraValida = 1;

    if (fgets(pessoa.idade_str, sizeof(pessoa.idade_str), stdin) == NULL)   // Lê a entrada como uma string
    {
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
        printf("\t\t\t\t\t\t\tErro na leitura da idade.\n");
        printf("\t\t\t\t\t\t\tInforme idade: ");
        return 1;
    }

    // Remove a quebra de linha do final da string
    pessoa.idade_str[strcspn(pessoa.idade_str, "\n")] = '\0';

    if (strlen(pessoa.idade_str) == 0)
    {
        leituraValida = 0;
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
        printf("\t\t\t\t\t\t\tA idade não pode estar vazia. Por favor, tente novamente.\n");
        printf("\t\t\t\t\t\t\tInforme idade: ");
        fflush(stdin);
    }
    else if (strlen(pessoa.idade_str) > 3)
    {
        leituraValida = 0;
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
        printf("\t\t\t\t\t\t\tA idade deve conter no máximo três dígitos. Por favor, tente novamente.\n");
        printf("\t\t\t\t\t\t\tInforme idade: ");
        fflush(stdin);
    }
    else
    {
        char* endptr; // Ponteiro para o próximo caractere após o número
        long idade = strtol(pessoa.idade_str, &endptr, 10);

        if (*endptr != '\0')
        {
            leituraValida = 0;
            printf("\t\t\t\t\t\t\tA entrada não é um número válido. Por favor, tente novamente.\n");
            fflush(stdin);
        }
        else if (idade < 1 || idade > 300)
        {
            leituraValida = 0;
            printf("\t\t\t\t\t\t\tA idade deve estar entre 1 e 300. Por favor, tente novamente.\n");
            fflush(stdin);
        }
    }
}
while (leituraValida != 1);

// system("cls");



pessoa.idade = atoi(pessoa.idade_str); // Converte a string em um número inteiro

if (pessoa.idade < 18 && pessoa.idade >= 0)   // Se a idade for menor que 18, considera como criança
{
    strcpy(pessoa.status, "Criança");
    strcpy(pessoa.ingresso, "Meia Entrada"); // Crianças pagam meia entrada
    printf("\n\t\t\t\t\t\t\tCliente têm direito a meia-entrada.");
    printf("\n\t\t\t\t\t\t\tO valor da meia-entrada é: R$ %.2f.\n", precomeia);
}
else if (pessoa.idade > 59)     // Se a idade for maior que 59, considera como idoso
{
    strcpy(pessoa.status, "Idoso");
    strcpy(pessoa.ingresso, "Gratuito"); // Idosos têm entrada gratuita
    printf("\n\t\t\t\t\t\t\tO cliente tem direito a entrada gratuita\n");
}
else if (pessoa.idade < 0)
{
    printf("\t\t\t\t\t\t\tVocê não existe.\n");
    return 1;
}
else
{

    printf("\t\t\t\t\t\t\tVocê é estudante? 1-Sim 0-Não: ");


    do
    {
        leituraValida = 0;
        if (scanf("%d", &respostaEstudante) != 1 || respostaEstudante < 0 || respostaEstudante > 1)
        {
            system("cls");
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
            printf("\t\t\t\t\t\t\tEntrada inválida. Por favor, digite '1' para sim ou '0' para não.\n");
            printf("\t\t\t\t\t\t\tVocê é estudante? 1-Sim 0-Não: ");

            leituraValida = 0;
            while (getchar() != '\n') ;  // Limpa o buffer de entrada
        }
        else
        {

            if (respostaEstudante == 1)
            {

                strcpy(pessoa.status, "Estudante");
                strcpy(pessoa.ingresso, "Meia Entrada");
                printf("\n\t\t\t\t\t\t\tO cliente tem direito a meia-entrada.\n");
                printf("\t\t\t\t\t\t\tO valor da meia-entrada é: R$ %.2f.\n", precomeia);
                leituraValida = 1; // Marca a entrada como válida
            }
            else if (respostaEstudante == 0)
            {

                strcpy(pessoa.status, "Adulto");
                strcpy(pessoa.ingresso, "Inteiro");
                printf("\n\t\t\t\t\t\t\tO valor da entrada inteira é: R$ %.2f.\n", precointeira);
                leituraValida = 1; // Marca a entrada como válida
            }
        }
    }
    while (leituraValida != 1);
    pegaRespostaEstudante = respostaEstudante;
}
while (getchar() != '\n') ;  // Limpa o buffer de entrada
do
{
    // Exibe as opções de exposições e solicita a escolha
    system("pause");
    system("cls"); // Limpa a tela
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
    printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
    printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
    printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

    printf("\t\t\t\t\t\t\tEscolha uma opção: ");

    do
    {
        leituraValida = 1;
        if (scanf("%d", &escolha_exposicao) != 1 || escolha_exposicao < 1 || escolha_exposicao > 4)
        {
            leituraValida = 0; // A leitura falhou, indicando entrada inválida
            printf("\t\t\t\t\t\t\tEscolha inválida. Por favor, escolha um número de exposição de 1 a 4.\n");
            system("pause");
            system("cls");
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
            printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
            printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
            printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
            printf("\t\t\t\t\t\t\tDigite o número da exposição desejada: ");
            while (getchar() != '\n') ; // Limpa o buffer do teclado após entrada inválida
            continue;
        }
        // Verifica se a exposição já foi escolhida antes
        if (pessoa.exposicoesEscolhidas[escolha_exposicao - 1] == 1)
        {
            leituraValida = 0;

            printf("\t\t\t\t\t\t\tVocê já escolheu essa exposição. Escolha outra.\n");

            system("pause");
            system("cls"); // Limpa a tela
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
            printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
            printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
            printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

            printf("\t\t\t\t\t\t\tEscolha uma opção: ");
            while (getchar() != '\n') ; // Limpa o buffer do teclado após entrada inválida
            continue; // Pula o restante do código dentro do loop
        }
        if (escolha_exposicao == 1)
        {
            if (limite1 < 1)
            {
                leituraValida = 0;
                printf("\t\t\t\t\t\t\tLimite máximo de vendas atingido para a exposição 1.\n");
                system("pause");
                system("cls"); // Limpa a tela
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
                printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
                printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
                printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

                printf("\t\t\t\t\t\t\tEscolha uma opção: ");
                if (pessoa.quantasExp == 3)
                {
                    printf("\t\t\t\t\t\t\tContinuando compra...\n");
                    leituraValida = 1;
                    pessoa.comprarExp = 0;
                    system("pause");
                }
            }
            else
            {
                strcpy(pessoa.exposicao, nomeExposicao1);
                exposicao100AnosAcessada = 1;
                if ((limite1 == 0 && limite2 == 0 && limite3 == 0) || (limite1 == 0 && limite3 == 0 && limite4 == 0) || (limite1 == 0 && limite2 == 0 && limite4 == 0) || (limite2 == 0 && limite3 == 0 && limite4 == 0))
                {
                    haexpdisponiveis = 0;
                }
            }
        }
        else if (escolha_exposicao == 2)
        {
            if (limite2 < 1)
            {
                leituraValida = 0;
                printf("\t\t\t\t\t\t\tLimite máximo de vendas atingido para a exposição 2.\n");

                system("pause");
                system("cls"); // Limpa a tela
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
                printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
                printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
                printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

                printf("\t\t\t\t\t\t\tEscolha uma opção: ");
                if (pessoa.quantasExp == 3)
                {
                    printf("\t\t\t\t\t\t\tContinuando compra...\n");
                    leituraValida = 1;
                    pessoa.comprarExp = 0;
                    system("pause");
                }
            }
            else
            {
                strcpy(pessoa.exposicao, nomeExposicao2);
                exposicao150AnosAcessada = 1;
                if ((limite1 == 0 && limite2 == 0 && limite3 == 0) || (limite1 == 0 && limite3 == 0 && limite4 == 0) || (limite1 == 0 && limite2 == 0 && limite4 == 0) || (limite2 == 0 && limite3 == 0 && limite4 == 0))
                {
                    haexpdisponiveis = 0;
                }
            }
        }
        else if (escolha_exposicao == 3)
        {
            if (limite3 < 1)
            {
                leituraValida = 0;


                printf("\t\t\t\t\t\t\tLimite máximo de vendas atingido para a exposição 3.\n");
                system("pause");
                system("cls"); // Limpa a tela
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
                printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
                printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
                printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

                printf("\t\t\t\t\t\t\tEscolha uma opção: ");
                if (pessoa.quantasExp == 3)
                {
                    printf("\t\t\t\t\t\t\tContinuando compra...\n");
                    leituraValida = 1;
                    pessoa.comprarExp = 0;
                    system("pause");
                }
            }
            else
            {
                strcpy(pessoa.exposicao, nomeExposicao3);
                exposicaoJogosOlimpicosAcessada = 1;
                if ((limite1 == 0 && limite2 == 0 && limite3 == 0) || (limite1 == 0 && limite3 == 0 && limite4 == 0) || (limite1 == 0 && limite2 == 0 && limite4 == 0) || (limite2 == 0 && limite3 == 0 && limite4 == 0))
                {
                    haexpdisponiveis = 0;
                }
            }
        }
        else if (escolha_exposicao == 4)
        {
            if (limite4 < 1)
            {
                leituraValida = 0;
                printf("\t\t\t\t\t\t\tLimite máximo de vendas atingido para a exposição 4.\n");
                system("pause");
                system("cls"); // Limpa a tela
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|  1 - 100 Anos de Arte Moderna                        |\n");
                printf("\t\t\t\t\t\t\t|  2 - Jogos Olímpicos em Paris                        |\n");
                printf("\t\t\t\t\t\t\t|  3 - 150 Anos de Santos Dumont                       |\n");
                printf("\t\t\t\t\t\t\t|  4 - O Primeiro Computador Criado                    |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

                printf("\t\t\t\t\t\t\tEscolha uma opção: ");
                if (pessoa.quantasExp == 3)
                {
                    printf("\t\t\t\t\t\t\tContinuando compra...\n");
                    leituraValida = 1;
                    pessoa.comprarExp = 0;
                    system("pause");
                }
            }
            else
            {
                strcpy(pessoa.exposicao, nomeExposicao4);
                exposicaoprimeiroComputadorCriadoAcessada = 1;
                if ((limite1 == 0 && limite2 == 0 && limite3 == 0) || (limite1 == 0 && limite3 == 0 && limite4 == 0) || (limite1 == 0 && limite2 == 0 && limite4 == 0) || (limite2 == 0 && limite3 == 0 && limite4 == 0))
                {
                    haexpdisponiveis = 0;
                }
            }
        }
        while (getchar() != '\n') ; // Limpa o buffer do teclado após entrada válida
    } while (leituraValida != 1);
    system("cls");
    if (pessoa.comprarExp == 1)
    {
        pessoa.quantasExp++; // Quantidade de exposições escolhidas
        pessoa.exposicoesEscolhidas[escolha_exposicao - 1] = 1; // Marca a exposição como escolhida

        if (pessoa.quantasExp == 1)
        { // Salva os nomes das exposições compradas
            strcpy(pessoa.exposicaonum[0], pessoa.exposicao);
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
            printf("\t\t\t\t\t\t\t%s\n", pessoa.exposicaonum[0]);
            system("pause");
        }
        else if (pessoa.quantasExp == 2)
        {
            strcpy(pessoa.exposicaonum[1], pessoa.exposicao);
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
            printf("\t\t\t\t\t\t\t%s\n", pessoa.exposicaonum[1]);
            getchar();
        }
        else if (pessoa.quantasExp == 3)
        {
            strcpy(pessoa.exposicaonum[2], pessoa.exposicao);
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
            printf("\t\t\t\t\t\t\t%s\n", pessoa.exposicaonum[2]);
            system("pause");
        }
        else if (pessoa.quantasExp == 4)
        {
            strcpy(pessoa.exposicaonum[3], pessoa.exposicao);
            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
            printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
            printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
            printf("\t\t\t\t\t\t\t%s\n", pessoa.exposicaonum[3]);
            system("pause");
        }
        do
        {
            leituraValida = 1;
            if (pessoa.quantasExp < 4 && haexpdisponiveis == 1)
            {
                // Pergunta se quer comprar ingresso para mais uma exposição se ainda não tiver comprado as 4
                system("cls");
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
                printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
                printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
                printf("\t\t\t\t\t\t\tDeseja comprar ingresso para mais uma exposição? 1-Sim 0-Não: ");
                if (scanf("%d", &pessoa.comprarExp) != 1 || pessoa.comprarExp < 0 || pessoa.comprarExp > 1)
                {
                    printf("\t\t\t\t\t\t\tEscolha inválida, tente novamente\n");
                    system("pause");
                    leituraValida = 0;
                    while (getchar() != '\n') ; // Limpa o buffer do teclado após entrada inválida
                }
            }
            else
            {
                pessoa.comprarExp = 0; // Para finalizar a compra e prosseguir ao pagamento
            }
        } while (leituraValida != 1);
    }
    system("cls"); // Limpa a tela
} while (pessoa.comprarExp == 1);

// Define o valor a ser pago
if (strcmp(pessoa.ingresso, "Meia Entrada") == 0)
{
    pessoa.valorapagar = precomeia * pessoa.quantasExp;
}
else if (strcmp(pessoa.ingresso, "Inteiro") == 0)
{
    pessoa.valorapagar = precointeira * pessoa.quantasExp;
}

// Confirmar pagamento do ingresso
if (strcmp(pessoa.ingresso, "Gratuito") == 0)   // Pula a confirmação de pagamento caso o ingresso for gratuito
{
    pessoa.foiPago = 1;
}
else
{
    pessoa.foiPago = -1;




    do
    {
        leituraValida = 1;
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|  0 - Cancelar Pagamento                              |\n");
        printf("\t\t\t\t\t\t\t|  1 - Confirmar Pagamento                             |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
        printf("\t\t\t\t\t\t\tValor total a ser pago: R$%.2f             ", pessoa.valorapagar);
        printf("\n");
        printf("\t\t\t\t\t\t\tEntre com a opção: ");

        if (scanf("%d", &pessoa.foiPago) != 1 || (pessoa.foiPago != 0 && pessoa.foiPago != 1))
        {
            printf("\t\t\t\t\t\t\tEscolha inválida, tente novamente.\n");
            system("pause");
            leituraValida = 0;
        }
        while (getchar() != '\n') ; // Limpa o buffer do teclado após entrada válida ou inválida

    }
    while (leituraValida != 1);
}
if (pessoa.foiPago == 1)
{
    system("cls"); // Limpa a tela
    printf("\n");

    time(&t); // Atribui à variável t o tempo atual
    data_hora = localtime(&t); // Atribui à variável data_hora o tempo atual

    for (int i = 0; i < (pessoa.quantasExp); i++)
    {
        if (pessoa.idade > 0 && pessoa.idade < 18 || respostaEstudante == 1)
        {
            vendaIngressoMeia();
            vendaTicket();
        }
        if (pessoa.idade > 18 && pessoa.idade < 60 && respostaEstudante == 0)
        {
            vendaIngressoInteira();
            vendaTicket();
        }
        if (pessoa.idade > 59)
        {
            vendaTicketGratuito();
            vendaTicket();
        }
        if (strcmp(pessoa.exposicaonum[i], nomeExposicao1) == 0)
        {
            cemAnosDaArteModernaVenda();
            limite1--;
            fflush(arquivolimite1);
            fclose(arquivolimite1); // Fecha o arquivo
            arquivolimite1 = fopen("limite1.txt", "w"); // Abre em modo de escrita
            if (arquivolimite1 == NULL)
            {
                perror("Erro ao abrir o arquivo limite1!\n");
                return 1;
            }
            fprintf(arquivolimite1, "%d", limite1); // Atualiza o limite no arquivo
            fflush(arquivolimite1);
            fclose(arquivolimite1); // Fecha o arquivo
        }
        if (strcmp(pessoa.exposicaonum[i], nomeExposicao2) == 0)
        {
            santosDumontVenda();
            limite2--;
            fflush(arquivolimite2);
            fclose(arquivolimite2); // Fecha o arquivo
            arquivolimite2 = fopen("limite2.txt", "w"); // Abre em modo de escrita
            if (arquivolimite2 == NULL)
            {
                perror("Erro ao abrir o arquivo limite2!\n");
                return 1;
            }
            fprintf(arquivolimite2, "%d", limite2); // Atualiza o limite no arquivo
            fflush(arquivolimite2);
            fclose(arquivolimite2); // Fecha o arquivo
        }
        if (strcmp(pessoa.exposicaonum[i], nomeExposicao3) == 0)
        {
            jogosOlimpicosVenda();
            limite3--;
            fflush(arquivolimite3);
            fclose(arquivolimite3); // Fecha o arquivo
            arquivolimite3 = fopen("limite3.txt", "w"); // Abre em modo de escrita
            if (arquivolimite3 == NULL)
            {
                perror("Erro ao abrir o arquivo limite3!\n");
                return 1;
            }
            fprintf(arquivolimite3, "%d", limite3); // Atualiza o limite no arquivo
            fflush(arquivolimite3);
            fclose(arquivolimite3); // Fecha o arquivo
        }
        if (strcmp(pessoa.exposicaonum[i], nomeExposicao4) == 0)
        {
            primeiroComputadorCriadoVenda();
            limite4--;
            fflush(arquivolimite4);
            fclose(arquivolimite4); // Fecha o arquivo
            arquivolimite4 = fopen("limite4.txt", "w"); // Abre em modo de escrita
            if (arquivolimite4 == NULL)
            {
                perror("Erro ao abrir o arquivo limite4!\n");
                return 1;
            }
            fprintf(arquivolimite4, "%d", limite4); // Atualiza o limite no arquivo
            fflush(arquivolimite4);
            fclose(arquivolimite4); // Fecha o arquivo
        }
    }

    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|             Menu de Cadastro de Venda                |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

    for (int i = 0; i < (pessoa.quantasExp); i++)
    {
        contagemVendas++;
        // Exibe as informações na tela

        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\t\t\t\t\t\t\tNome: %s\n\t\t\t\t\t\t\tIdade: %d\n\t\t\t\t\t\t\tStatus: %s\n\t\t\t\t\t\t\tIngresso: %s\n\t\t\t\t\t\t\tExposição: '%s'\n\t\t\t\t\t\t\tID: %d",
               pessoa.nome, pessoa.idade, pessoa.status, pessoa.ingresso, pessoa.exposicaonum[i], pessoa.id);
        // Salva as informações no arquivo
        fprintf(arquivo, "ID: %d | %s |%d | %s | %s | %s | %02d/%02d/%d %02d:%02d\n",
                pessoa.id, pessoa.nome, pessoa.idade, pessoa.status, pessoa.ingresso, pessoa.exposicaonum[i],
                data_hora->tm_mday, data_hora->tm_mon + 1, data_hora->tm_year + 1900,
                data_hora->tm_hour, data_hora->tm_min);
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    }
    printf("\n\n***********************************************************************************************************************************************************************\n");
    printf("\n\t\t\t\t\t\t\tAs informações foram salvas em 'informacoes.txt'.\n\n");
    printf("\n");

    exposicao100AnosAcessada = 0; // Inicialmente não acessada
    exposicao150AnosAcessada = 0;
    exposicaoJogosOlimpicosAcessada = 0;
    exposicaoprimeiroComputadorCriadoAcessada = 0;
}
if (pessoa.foiPago == 0)
{
    printf("\n\n\n\t\t\t\t\t\t\tCompra cancelada!!!\n\n\n");

    idAtual--;
}
                }
                fflush(arquivo);
fclose(arquivo); // Fecha o arquivo antes de retornar
system("pause");
system("cls"); // Limpa a tela
break;
            }
            case 2:   // Implemente a listagem de todas as pessoas aqui
    {
        system("cls"); // Limpa a tela
        fflush(arquivo);
        fclose(arquivo); // Fecha o arquivo
        arquivo = fopen("informacoes.txt", "r");

        if (arquivo == NULL)
        {
            printf("\t\t\t\t\t\t\tErro ao abrir o arquivo de listagem!\n");
            return 1;
        }
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|                  Relatório de Vendas                 |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

        char linha[200];
        while (fgets(linha, sizeof(linha), arquivo) != NULL)
        {
            if ((strncmp(linha, "Sessão", 6) != 0) && (strncmp(linha, "Vendas", 6) != 0))   // Verifica se a linha não começa com "Sessão" antes de exibi-la
            {
                printf("%s", linha);
            }
        }

        printf("\n\nVendas na sessão atual: %d\n\n", contagemVendas);
        fflush(arquivo);
        fclose(arquivo); // Feche o arquivo após a leitura
        fflush(stdin);
        system("pause");
        system("cls"); // Limpa a tela
        break;
    }
case 3:   // Implemente a busca de pessoas por ID aqui
    {
        system("cls"); // Limpa a tela
        fflush(arquivo);
        fclose(arquivo); // Fecha o arquivo
        arquivo = fopen("informacoes.txt", "r");

        if (arquivo == NULL)
        {
            printf("\t\t\t\t\t\t\tErro ao abrir o arquivo de listagem!\n");
            return 1;
        }

        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|                 Buscar Vendas Por ID                 |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

        char linha[200];
        while (fgets(linha, sizeof(linha), arquivo) != NULL)
        {
            if ((strncmp(linha, "Sessão", 6) != 0) && (strncmp(linha, "Vendas", 6) != 0))   // Verifica se a linha não começa com "Sessão" antes de exibi-la
            {
                printf("%s", linha);
            }
        }
        printf("\n\nVendas na sessão atual: %d\n\n", contagemVendas);
        fflush(arquivo);
        fclose(arquivo); // Fecha o arquivo
        arquivo = fopen("informacoes.txt", "r");

        if (arquivo == NULL)
        {
            printf("\t\t\t\t\t\t\tErro ao abrir o arquivo de listagem!\n");
            return 1;
        }

        int buscaID;
        printf("Digite o ID da pessoa que deseja buscar: ");
        while (scanf("%d", &buscaID) != 1)
        {
            printf("\nPor favor, digite um número válido: ");
            while (getchar() != '\n') ; // Limpa o buffer de entrada
        }

        int encontrou = 0; // Flag para verificar se o ID foi encontrado
        system("cls"); // Limpa a tela
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|                 Buscar Vendas Por ID                 |\n");
        printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");
        printf("\n\t\t\t\t\t\t\tInformações da Pessoa com ID %d\n\n", buscaID);
        while (fgets(linha, sizeof(linha), arquivo) != NULL)
        {
            int idLido;
            if (sscanf(linha, "ID: %d", &idLido) == 1 && idLido == buscaID)
            {
                encontrou = 1; // ID encontrado
                printf("%s", linha); // Exibe a linha que corresponde ao ID
            }
        }

        if (!encontrou)
        {
            printf("\n\t\t\t\t\t\t\tPessoa com ID %d não encontrada!!!.\n\n", buscaID);
        }
        fflush(arquivo);
        fclose(arquivo); // Feche o arquivo após a leitura
        printf("\n");
        system("pause");
        system("cls"); // Limpa a tela
        break;
    }


case 4:
    printf("\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|             Relatório de Ingressos Vendidos          |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n");

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t|      Total de Ingressos Vendidos     |\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    quantidadeDeTickets();
    calcularTotalVendas();

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t| Total de Ingressos Gratuitos Vendidos|\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    quantidadeDeTicketsGratuito();

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t| Total de Ingressos Inteiros Vendidos |\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    quantidadeDeIngressosInteira();

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t| Total de Ingressos de Meia Vendidos  |\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    quantidadeDeIngressosMeia();

    printf("\n\n\n");

    system("pause");
    system("cls"); // Limpa a tela
    break;

case 5:
    printf("\n\t\t\t\t\t\t\t+------------------------------------------------------+\n");
    printf("\t\t\t\t\t\t\t|            Relatório de Exposições Vendidas          |\n");
    printf("\t\t\t\t\t\t\t+------------------------------------------------------+\n\n");

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t|\t100 Anos da Arte Moderna       |\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");

    cemAnosDaArteModernaQuantidadeDeIngressos();

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t|\t 150 Anos de Santos Dumont     |\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    santosDumontQuantidadeDeIngressos();

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t|\t  Jogos Olímpicos em Paris     |\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    jogosOlimpicosQuantidadeDeIngressos();

    printf("\n\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    printf("\t\t\t\t\t\t\t\t|\tO Primeiro Computador Criado   |\n");
    printf("\t\t\t\t\t\t\t\t+--------------------------------------+\n");
    primeiroComputadorCriadoQuantidadeDeIngressos();

    printf("\n\n");
    system("pause");
    system("cls"); // Limpa a tela
    break;

case 6:
    printf("\n");
    int oplimites;
    int expaltlimite;
    int oplimitesaux;
    do
    {
        system("cls"); // Limpa a tela
        fscanf(arquivolimite1, "%d", &limite1);
        fscanf(arquivolimite2, "%d", &limite2);
        fscanf(arquivolimite3, "%d", &limite3);
        fscanf(arquivolimite4, "%d", &limite4);
        printf("\n");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|                 Limite de Exposições                  |\n");
        printf("\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|  Ingressos disponíveis atualmente:                    |\n");
        printf("\t\t\t\t\t\t\t|  Exposição 1: %d                                       |\n", limite1);
        printf("\t\t\t\t\t\t\t|  Exposição 2: %d                                       |\n", limite2);
        printf("\t\t\t\t\t\t\t|  Exposição 3: %d                                       |\n", limite3);
        printf("\t\t\t\t\t\t\t|  Exposição 4: %d                                       |\n", limite4);
        printf("\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
        printf("\t\t\t\t\t\t\t|  0 - Retornar                                         |\n");
        printf("\t\t\t\t\t\t\t|  1 - Alterar limites                                  |\n");
        printf("\t\t\t\t\t\t\t|  2 - Reiniciar limites                                |\n");
        printf("\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
        printf("\n");
        printf("\t\t\t\t\t\t\tEscolha uma opção: ");

        fflush(stdin);
        oplimitesaux = -1;
        scanf("%d", &oplimitesaux);
        while (getchar() != '\n') ; // Limpa o buffer do teclado
        if (oplimitesaux != 1 && oplimitesaux != 2 && oplimitesaux != 0)
        {
            //system("cls"); // Limpa a tela
            printf("\t\t\t\t\t\t\tOpção inválida. Por favor, digite um número entre 0 e 2.\n");
            while (getchar() != '\n') ; // Limpa o buffer do teclado
            continue; // Volta ao início do loop para pedir a opção novamente
        }
        oplimites = oplimitesaux;
        switch (oplimites)
        {
            case 1:
                do
                {
                    printf("\t\t\t\t\t\t\tPara qual exposição deseja alterar o limite? (0 para cancelar): ");
                    scanf("%d", &expaltlimite);
                    if (expaltlimite != 1 && expaltlimite != 2 && expaltlimite != 3 && expaltlimite != 4 && expaltlimite != 0)
                    {


                        printf("\t\t\t\t\t\t\tOpção inválida. Por favor, digite um número entre 1 e 4, ou 0 para sair.\n");
                        system("pause");
                        system("cls");
                        printf("\n");
                        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
                        printf("\t\t\t\t\t\t\t|                 Limite de Exposições                  |\n");
                        printf("\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
                        printf("\t\t\t\t\t\t\t|  Ingressos disponíveis atualmente:                    |\n");
                        printf("\t\t\t\t\t\t\t|  Exposição 1: %d                                       |\n", limite1);
                        printf("\t\t\t\t\t\t\t|  Exposição 2: %d                                       |\n", limite2);
                        printf("\t\t\t\t\t\t\t|  Exposição 3: %d                                       |\n", limite3);
                        printf("\t\t\t\t\t\t\t|  Exposição 4: %d                                       |\n", limite4);
                        printf("\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
                        printf("\t\t\t\t\t\t\t|  0 - Retornar                                         |\n");
                        printf("\t\t\t\t\t\t\t|  1 - Alterar limites                                  |\n");
                        printf("\t\t\t\t\t\t\t|  2 - Reiniciar limites                                |\n");
                        printf("\t\t\t\t\t\t\t+-------------------------------------------------------+\n");
                        printf("\n");
                        printf("\t\t\t\t\t\t\tEscolha uma opção: \n");
                        while (getchar() != '\n') ; // Limpa o buffer do teclado
                        continue; // Volta ao início do loop para pedir a opção novamente
                    }
                    if (expaltlimite == 1 || expaltlimite == 2 || expaltlimite == 3 || expaltlimite == 4)
                    {
                        printf("\t\t\t\t\t\t\tAlterar o limite para quanto?: ");
                        int novolimite;
                        scanf("%d", &novolimite);
                        if (expaltlimite == 1)
                        {
                            limite1 = novolimite;
                            fflush(arquivolimite1); // Limpa o buffer do arquivo
                            fclose(arquivolimite1);
                            arquivolimite1 = fopen("limite1.txt", "w");
                            if (arquivolimite1 == NULL)
                            {
                                perror("Erro ao abrir o arquivo limite1.txt!\n");
                                return 1;
                            }
                            fprintf(arquivolimite1, "%d", limite1);
                            fflush(arquivolimite1); // Limpa o buffer do arquivo
                            fclose(arquivolimite1);
                            arquivolimite1 = fopen("limite1.txt", "r");
                            expaltlimite = 0;
                        }
                        else if (expaltlimite == 2)
                        {
                            limite2 = novolimite;
                            fflush(arquivolimite2); // Limpa o buffer do arquivo
                            fclose(arquivolimite2);
                            arquivolimite2 = fopen("limite2.txt", "w");
                            if (arquivolimite2 == NULL)
                            {
                                perror("Erro ao abrir o arquivo limite2.txt!\n");
                                return 1;
                            }
                            fprintf(arquivolimite2, "%d", limite2);
                            fflush(arquivolimite2); // Limpa o buffer do arquivo
                            fclose(arquivolimite2);
                            arquivolimite2 = fopen("limite2.txt", "r");
                            expaltlimite = 0;
                        }
                        else if (expaltlimite == 3)
                        {
                            limite3 = novolimite;
                            fflush(arquivolimite3); // Limpa o buffer do arquivo
                            fclose(arquivolimite3);
                            arquivolimite3 = fopen("limite3.txt", "w");
                            if (arquivolimite1 == NULL)
                            {
                                perror("Erro ao abrir o arquivo limite3.txt!\n");
                                return 1;
                            }
                            fprintf(arquivolimite3, "%d", limite3);
                            fflush(arquivolimite3); // Limpa o buffer do arquivo
                            fclose(arquivolimite3);
                            arquivolimite3 = fopen("limite3.txt", "r");
                            expaltlimite = 0;
                        }
                        else if (expaltlimite == 4)
                        {
                            limite4 = novolimite;
                            fflush(arquivolimite4); // Limpa o buffer do arquivo
                            fclose(arquivolimite4);
                            arquivolimite4 = fopen("limite4.txt", "w");
                            if (arquivolimite4 == NULL)
                            {
                                perror("Erro ao abrir o arquivo limite4.txt!\n");
                                return 1;
                            }
                            fprintf(arquivolimite4, "%d", limite4);
                            fflush(arquivolimite4); // Limpa o buffer do arquivo
                            fclose(arquivolimite4);
                            arquivolimite4 = fopen("limite4.txt", "r");
                            expaltlimite = 0;
                        }
                    }
                } while (expaltlimite != 0);
                break;
            case 2:
                limite1 = limitemax1;
                fflush(arquivolimite1); // Limpa o buffer do arquivo
                fclose(arquivolimite1);
                arquivolimite1 = fopen("limite1.txt", "w");
                if (arquivolimite1 == NULL)
                {
                    perror("Erro ao abrir o arquivo limite1.txt!\n");
                    return 1;
                }
                fprintf(arquivolimite1, "%d", limite1);
                fflush(arquivolimite1); // Limpa o buffer do arquivo
                fclose(arquivolimite1);
                arquivolimite1 = fopen("limite1.txt", "r");

                limite2 = limitemax2;
                fflush(arquivolimite2); // Limpa o buffer do arquivo
                fclose(arquivolimite2);
                arquivolimite2 = fopen("limite2.txt", "w");
                if (arquivolimite2 == NULL)
                {
                    perror("Erro ao abrir o arquivo limite2.txt!\n");
                    return 1;
                }
                fprintf(arquivolimite2, "%d", limite2);
                fflush(arquivolimite2); // Limpa o buffer do arquivo
                fclose(arquivolimite2);
                arquivolimite2 = fopen("limite2.txt", "r");

                limite3 = limitemax3;
                fflush(arquivolimite3); // Limpa o buffer do arquivo
                fclose(arquivolimite3);
                arquivolimite3 = fopen("limite3.txt", "w");
                if (arquivolimite3 == NULL)
                {
                    perror("Erro ao abrir o arquivo limite3.txt!\n");
                    return 1;
                }
                fprintf(arquivolimite3, "%d", limite3);
                fflush(arquivolimite3); // Limpa o buffer do arquivo
                fclose(arquivolimite3);
                arquivolimite3 = fopen("limite3.txt", "r");

                limite4 = limitemax4;
                fflush(arquivolimite4); // Limpa o buffer do arquivo
                fclose(arquivolimite4);
                arquivolimite4 = fopen("limite4.txt", "w");
                if (arquivolimite4 == NULL)
                {
                    perror("Erro ao abrir o arquivo limite4.txt!\n");
                    return 1;
                }
                fprintf(arquivolimite4, "%d", limite4);
                fflush(arquivolimite4); // Limpa o buffer do arquivo
                fclose(arquivolimite4);
                arquivolimite4 = fopen("limite4.txt", "r");
                printf("\t\t\t\t\t\t\tLimites redefinidos com sucesso.\n");
                system("pause");
                break;
            case 0:
                printf("\n");
                system("cls"); // Limpa a tela
                break;
            default:
                printf("\t\t\t\t\t\t\tOpção inválida.\n");
                break;
        }
    } while (oplimites != 0);
    break;

default:
    printf("Opção inválida.\n");
    system("pause");
    break;
}
        }while (opcao != 0) ;

time(&t); // Atribui à variável t o tempo atual
data_hora = localtime(&t); // Atribui à variável data_hora o tempo atual
fprintf(arquivo, "Vendas no sessão: %d\n", contagemVendas);
strftime(sessao, sizeof(sessao), "Sessão encerrada em: %d/%m/%Y %H:%M:%S", data_hora); // Formata a data e hora atual
fprintf(arquivo, "%s\n", sessao); // Escreve no arquivo
fflush(arquivo); // Limpa o buffer do arquivo
fclose(arquivo); // Fecha o arquivo

arquivo = fopen("informacoes.txt", "r"); // Abre o arquivo em modo de leitura
FILE* arquivo_backup; // Declara o ponteiro para o arquivo de backup
arquivo_backup = fopen("informacoes_backup.txt", "w"); // Abre o arquivo de backup em modo de escrita
if (arquivo_backup == NULL)
{
    perror("Erro ao abrir o arquivo de destino");
    fclose(arquivo);
    return 1;
}
char caractere;
while ((caractere = fgetc(arquivo)) != EOF)   // Copia o conteúdo de informacoes.txt para informacoes_backup.txt
{
    fputc(caractere, arquivo_backup);
}

fflush(arquivo); // Limpa o buffer do arquivo
fflush(arquivo_backup); // Limpa o buffer do arquivo de backup
fclose(arquivo); // Fecha o arquivo
fclose(arquivo_backup); // Fecha o arquivo de backup

// Renomeia e move informacoes_backup.txt para /sessoes_anteriores/informacoes_dataehora.txt
const char* old_name = "informacoes_backup.txt"; // Nome do arquivo a ser renomeado
const char* new_directory = "sessoes_anteriores"; // Especifica o caminho para o novo diretório

// Verifica se o diretório já existe
struct stat st;
if (stat(new_directory, &st) == -1)
{
    // O diretório não existe, então crie-o sem especificar as permissões
    if (mkdir(new_directory) == -1)
    {
        perror("Erro ao criar o diretório");
        return 1;
    }
    printf("Diretório '%s' criado com sucesso.\n", new_directory);
}
char new_name[100];
strftime(new_name, sizeof(new_name), "informacoes_%d_%m_%Y_%H_%M_%S.txt", data_hora); // Cria uma string de nome de arquivo com a data e hora atual
char full_new_path[200];
snprintf(full_new_path, sizeof(full_new_path), "%s/%s", new_directory, new_name); // Cria o caminho completo para o novo arquivo
if (rename(old_name, full_new_path) == 0)
{
    printf("Backup das vendas de sessão criado com sucesso como %s.\n", new_name);
}
else
{
    perror("Erro ao criar backup de informacoes.txt"); // perror informa a razão do erro
}

return 0;
}



int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); // Configura a localização para português
    system("title MUSEU DO PIM");
    char login[100];
    char senha[100];
    int i = 0;
    char ch;
    int tentativas = 3; // Número máximo de tentativas

    do
    {
        i = 0; // Reinicializa o índice da senha
        tentativas--;

        // Solicita ao usuário para inserir o login
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t *************************************\n");
        printf("\t\t\t\t\t\t\t\t *************************************\n");
        printf("\t\t\t\t\t\t\t\t *****        MUSEU VERSO        *****\n");
        printf("\t\t\t\t\t\t\t\t *************************************\n");
        printf("\t\t\t\t\t\t\t\t *************************************\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t Digite o login: ");
        scanf("%s", login);

        // Solicita ao usuário para inserir a senha
        printf("\t\t\t\t\t\t\t\t Digite a senha: ");

        // Lê a senha sem exibir caracteres no console
        while (1)
        {
            ch = getch();
            if (ch == 13) // 13 é o código ASCII para a tecla Enter (para encerrar a entrada)
                break;
            else if (ch == 8)   // 8 é o código ASCII para a tecla Backspace
            {
                if (i > 0)
                {
                    i--;
                    printf("\b \b"); // Apaga o caractere digitado
                }
            }
            else
            {
                senha[i] = ch;
                printf("*"); // Exibe um '*' em vez do caractere real da senha
                i++;
            }
        }
        senha[i] = '\0'; // Adiciona o terminador de string

        printf("\n"); // Pula uma linha após a senha

        // Verifica se o login e a senha são iguais a "admin" e "admin123"
        if (strcmp(login, "admin") == 0 && strcmp(senha, "admin123") == 0)
        {
            printf("\n\n\t\t\t\t\t\t\t\t Acesso permitido.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");

            int escolha;
            do
            {
                system("cls");
                exibirMenu();
                fflush(stdin);
                escolha = -1;
                scanf("%d", &escolha);

                switch (escolha)
                {
                    case 0:
                        system("pause");
                        system("cls");
                        printf("\t\t\t\t\t\t\tSaindo da conta...\n\n");
                        system("pause");
                        system("cls");
                        break;
                    case 1:
                        system("pause");
                        system("cls");
                        exposicoes(); // Chama a função de exposições
                        break;
                    case 2:
                        system("pause");
                        system("cls");
                        vendas();

                        // Implemente a lógica do agendamento de visita aqui
                        break;

                    default:
                        printf("\t\t\t\t\t\t\tOpção inválida. Tente novamente.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                        system("pause");
                        system("cls");
                        break;
                }
            }
            while (escolha != 0);
        }
        else
        {
            printf("\t\t\t\t\t\t\t\t Login ou Senha incorretos.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");

            if (tentativas > 0)
            {
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t *************************************\n");
                printf("\t\t\t\t\t\t\t\t *************************************\n");
                printf("\t\t\t\t\t\t\t\t *****        MUSEU VERSO        *****\n");
                printf("\t\t\t\t\t\t\t\t *************************************\n");
                printf("\t\t\t\t\t\t\t\t *************************************\n\n\n\n\n");
                printf("\n\t\t\t\t\t\t\t\tVocê ainda tem %d tentativa(s) restante(s).\n\n", tentativas);
                system("pause");
                system("cls");
            }
            else
            {
                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t *************************************\n");
                printf("\t\t\t\t\t\t\t\t *************************************\n");
                printf("\t\t\t\t\t\t\t\t *****        MUSEU VERSO        *****\n");
                printf("\t\t\t\t\t\t\t\t *************************************\n");
                printf("\t\t\t\t\t\t\t\t *************************************\n\n\n\n\n");
                printf("\t\t\t\t\t\t\t\tNúmero máximo de tentativas alcançado. Saindo do programa.\n\n");
                system("pause");
                system("cls");
            }
        }
    }
    while (tentativas > 0);

    return 0; // Saída sem erros


}

