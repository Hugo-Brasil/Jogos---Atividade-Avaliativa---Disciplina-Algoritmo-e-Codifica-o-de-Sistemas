#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

        char respostaDoUsuarioNoJogoPerguntasERespostas;
        char respostaDoUsuarioNoJogoCobraNaCaixa;
        char respostaDoUsuarioNoJogoGousmasWar;

        do
        {
        int EscolhaDoMenuPrincipal;
        //char respostaDoUsuarioNoJogoPerguntasERespostas;    

        system("cls");
        printf("TITULO: MENU PRINCIPAL\n\n");
        printf("1: Jogo de Perguntas e Respostas\n");
        printf("2: Cobra na Caixa\n");
        printf("3: Gousmas War\n");
        printf("4: Sair\n");

        printf("\n\nDigite o numero da opcao que voce desejar: "); 
        scanf(" %d", &EscolhaDoMenuPrincipal);
        while (getchar() != '\n');
        

        if (EscolhaDoMenuPrincipal == 4)
        {
            printf("\n\nObrigado por jogar! Ate a proxima!\n\n");
            break;
        } else {
            
            switch (EscolhaDoMenuPrincipal)
            { 
            case 1:
            
                //Jogo de Perguntas e Respostas.
               do
               {
                    system("cls");
    printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
    
    char resposta;
    char respostaDois;
    char respostaTres;
    char respostaQuatro;
    char respostaCinco;
    int pontos = 0;

    printf("1: Perguntas e Respostas\n\n\n");
    printf("Pergunta 1: As taxas cobradas pela Administracao Publica tem como fato gerador:\n\n");
    printf("a) Situacao de riqueza.\n");
    printf("b) Fiscalizacao ou prestacao de servico publico especifico e divisivel.\n");
    printf("c) Renda anual do contribuinte.\n");
    printf("d) Valor venal do imovel.\n");
    printf("e) Consumo de energia eletrica.\n\n");

    printf("Resposta: ");
    scanf("%c", &resposta);
    while (getchar() != '\n');
    
    if (resposta == 'b')
    {
      printf("\nResposta correta! \n\nSegundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de");
      printf("\npolicia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nNao ha comentarios adicionais.\n\n");
      pontos++;
    } else if(resposta == 'a') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nCometario:\nA situacao de riqueza e fato gerador do IGF (Imposto sobre Grandes Fortunas), que e o unico imposto previsto na Constituicao da Republica Federativa do Brasil de 1988 que nao foi implementado, sendo, portanto, um fato gerador estranho a definicao do Art. 77 do CTN.\n\n"); 
    } else if(resposta == 'c') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nA renda anual do contribuinte e fato gerador do Imposto de Renda (IR) e, conforme o Art. 145, paragrafo segundo, as taxas nao poderao ter base de calculo ou fato gerador identicos aos que correspondam a impostos. Logo, a renda anual e um fato gerador proprio de impostos e nao das taxas.\n\n");
    } else if(resposta == 'd') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nO valor venal do imovel constitui fato gerador do IPTU, proprio, portanto, da categoria dos impostos, nao das taxas.\n\n");
    } else if(resposta == 'e') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nO consumo de energia eletrica nao consitui servico publico especifico e divisivel prestado ao contribuinte e, portanto, enquanto fato gerador, nao esta contido na definicao de taxas. O consumo de energia eletrica tem natureza de tarifa, nao de tributo. As tarifas (ou precos publicos) constituem uma cobranca voluntaria pelo uso de um servico especifico prestado por concessionarias.\n\n");
    }
    
    if (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' && resposta != 'e')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }

    while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' && resposta != 'e')
    {
        system("cls");
        printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
        printf("1: Perguntas e Respostas\n\n\n");
        printf("Pergunta 1: As taxas cobradas pela Administracao Publica tem como fato gerador:\n\n");
        printf("a) Situacao de riqueza.\n");
        printf("b) Fiscalizacao ou prestacao de servico publico especifico e divisivel.\n");
        printf("c) Renda anual do contribuinte.\n");
        printf("d) Valor venal do imovel.\n");
        printf("e) Consumo de energia eletrica.\n\n");

        printf("Resposta: ");
        scanf(" %c", &resposta);
        
        if (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' && resposta != 'e')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }
        

        if (resposta == 'b')
        {
        printf("\nResposta correta! \n\nSegundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de");
        printf("\npolicia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nNao ha comentarios adicionais.\n\n");
        pontos++;
        break;
        } else if(resposta == 'a') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nCometario:\nA situacao de riqueza e fato gerador do IGF (Imposto sobre Grandes Fortunas), que e o unico imposto previsto na Constituicao da Republica Federativa do Brasil de 1988 que nao foi implementado, sendo, portanto, um fato gerador estranho a definicao do Art. 77 do CTN.\n\n");
        break;
        } else if(resposta == 'c') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nA renda anual do contribuinte e fato gerador do Imposto de Renda (IR) e, conforme o Art. 145, paragrafo segundo, as taxas nao poderao ter base de calculo ou fato gerador identicos aos que correspondam a impostos. Logo, a renda anual e um fato gerador proprio de impostos e nao das taxas.\n\n");
        break;
        } else if(resposta == 'd') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nO valor venal do imovel constitui fato gerador do IPTU, proprio, portanto, da categoria dos impostos, nao das taxas.\n\n");
        break;
        } else if(resposta == 'e') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois Segundo o caput do Art. 77 do Codigo Tributario Nacional, as taxas tem como fato gerador o exercicio regular do poder de policia ou a utilizacao, efetiva ou potencial, de servico publico especifico e divisivel, prestado ao contribuinte ou posto a sua disposicao.\n\nComentario:\nO consumo de energia eletrica nao consitui servico publico especifico e divisivel prestado ao contribuinte e, portanto, enquanto fato gerador, nao esta contido na definicao de taxas. O consumo de energia eletrica tem natureza de tarifa, nao de tributo. As tarifas (ou precos publicos) constituem uma cobranca voluntaria pelo uso de um servico especifico prestado por concessionarias.\n\n");
        break;
        }
    }
   
    system("pause");

    //printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    system("cls");
    printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
    printf("1: Perguntas e Respostas\n\n\n");
    printf("Pergunta 2: Ao contrario da Constituicao Federal, o Codigo Tributario Nacional adota a teoria tripartite quanto as especies tributarias."); 
    printf("\nDesse modo, assinalar a alternativa cujo tributo nao esta contemplado por esta teoria.\n\n"); 
    printf("a) Impostos.\n");
    printf("b) Contribuicoes de melhoria.\n");
    printf("c) Taxas.\n");
    printf("d) Emprestimos Compulsorios\n\n");

    

    printf("Resposta: ");
    scanf(" %c", &respostaDois);

    if (respostaDois == 'd')
    {
      printf("\nResposta correta! \n\nOs emprestimos compulsorios nao estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional,"); 
      printf("\nmas sim pela teoria pentapartite da Constituicao Federal.\n\nComentario:\nConforme o Art. 148 da Constituicao Federal, dispoe que a Uniao, mediante lei complementar podera instituir emprestimos compulsorios. \n\n");
      pontos++;
    } else if(respostaDois == 'a') {
      printf("Resposta incorreta. \n\nA alternativa correta e a letra d), pois os impostos estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional,");
      printf("\nque define os tres tipos de tributos: impostos, taxas e contribuicoes.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
    } else if(respostaDois == 'b') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra d), pois as contribuicoes de melhoria estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional, que define os tres tipos de tributos: impostos, taxas e contribuicoes.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
    } else if(respostaDois == 'c') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra b), pois as taxas estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional, que define os tres tipos de tributos: impostos, taxas e contribuicoes.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
    }

   if (respostaDois != 'a' && respostaDois != 'b' && respostaDois != 'c' && respostaDois != 'd')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }


    while (respostaDois != 'a' && respostaDois != 'b' && respostaDois != 'c' && respostaDois != 'd')
    {
        system("cls");
        printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
        printf("1: Perguntas e Respostas\n\n\n");
        printf("Pergunta 2: Ao contrario da Constituicao Federal, o Codigo Tributario Nacional adota a teoria tripartite quanto as especies tributarias."); 
        printf("\nDesse modo, assinalar a alternativa cujo tributo nao esta contemplado por esta teoria.\n\n"); 
        printf("a) Impostos.\n");
        printf("b) Contribuicoes de melhoria.\n");
        printf("c) Taxas.\n");
        printf("d) Emprestimos Compulsorios\n\n");

        printf("Resposta: ");
        scanf(" %c", &respostaDois);



         if (respostaDois != 'a' && respostaDois != 'b' && respostaDois != 'c' && respostaDois != 'd')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }
        


        if (respostaDois == 'd')
        {
            printf("\nResposta correta! \n\nOs emprestimos compulsorios nao estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional,"); 
            printf("\nmas sim pela teoria pentapartite da Constituicao Federal.\n\nComentario:\nConforme o Art. 148 da Constituicao Federal, dispoe que a Uniao, mediante lei complementar podera instituir emprestimos compulsorios. \n\n");
            pontos++;
            break;
        } else if(respostaDois == 'a') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra d), pois os impostos estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional,");
            printf("\nque define os tres tipos de tributos: impostos, taxas e contribuicoes.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
            break;
        } else if(respostaDois == 'b') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra d), pois as contribuicoes de melhoria estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional, que define os tres tipos de tributos: impostos, taxas e contribuicoes.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
            break;
        } else if(respostaDois == 'c') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra d), pois as taxas estao contemplados pela teoria tripartite constante no Artigo 5 do Codigo Tributario Nacional, que define os tres tipos de tributos: impostos, taxas e contribuicoes.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
            break;
        }
    }

    system("pause");

    //printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    system("cls");
    printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
    printf("1: Perguntas e Respostas\n\n\n");
    printf("Pergunta 3: A Constituicao Federal, no Capitulo que trata do Sistema Tributario Nacional, delimita a competencia tributaria da Uniao, dos Estados"); 
    printf("\ne Municipios, proibindo, por exemplo, a Uniao e os Estados de cobrarem o IPTU. Isso demonstra que o Brasil\n\n");
    printf("a) adotou o federalismo fiscal.\n");
    printf("b) aplica a equidade tributaria.\n");
    printf("c) e um pais republicano.\n");
    printf("d) e uma nacao democratica.\n\n");

    printf("Resposta: ");
    scanf(" %c", &respostaTres);

    if (respostaTres == 'a')
    {
      printf("\nResposta correta!\n\nO federalismo fiscal e um sistema em que a competencia tributaria e distribuida entre os niveis de governo, como Uniao, estados"); 
      printf("\ne Municipios, tal como e adotado no Brasil.\n\nComentario:\nConforme o Art. 145 da Constituicao Federal, a Uniao, os estados, o Distrito Federal e os Municipios poderao instituir os seguintes tributos:"); 
      printf("\nI - impostos; II - taxas (...); III - contribuicoes de melhoria (..).\n\n");
      pontos++;
    } else if(respostaTres == 'b') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a equidade tributaria refere-se a justica na distribuicao da carga tributaria entre os contribuintes, que nao e o foco da questao, que trata da distribuicao de competencias tributarias entre os entes federativos.\n\nCometario:\nNo que tange a equidade tributaria, o Art. 150 da Constituicao da Republica Federativa do Brasil impoe limites arrecadatorios no ambito fiscal aos entes federativos.\n\n");
    } else if(respostaTres == 'c') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a questao nao esta relacionada ao fato do Brasil ser uma republica, mas sim a organizacao federativa do"); 
      printf("\nEstado, que envolve distribuicao de competencias tributarias.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
    } else if(respostaTres == 'd') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois, embora o Brasil seja uma nacao democratica, a questao nao esta abordando a democracia, mas sim a"); 
      printf("\nestrutura federativa e a distribuicao de competencias tributarias.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
    }

   if (respostaTres != 'a' && respostaTres != 'b' && respostaTres != 'c' && respostaTres != 'd')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }

    while (respostaTres != 'a' && respostaTres != 'b' && respostaTres != 'c' && respostaTres != 'd')
    {
        system("cls");
        printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
        printf("1: Perguntas e Respostas\n\n\n");
        printf("Pergunta 3: A Constituicao Federal, no Capitulo que trata do Sistema Tributario Nacional, delimita a competencia tributaria da Uniao, dos Estados"); 
        printf("\ne Municipios, proibindo, por exemplo, a Uniao e os Estados de cobrarem o IPTU. Isso demonstra que o Brasil\n\n");
        printf("a) adotou o federalismo fiscal.\n");
        printf("b) aplica a equidade tributaria.\n");
        printf("c) e um pais republicano.\n");
        printf("d) e uma nacao democratica.\n\n");

        printf("Resposta: ");
        scanf(" %c", &respostaTres);



        if (respostaTres != 'a' && respostaTres != 'b' && respostaTres != 'c' && respostaTres != 'd')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }



         if (respostaTres == 'a')
        {
            printf("\nResposta correta! \n\nO federalismo fiscal e um sistema em que a competencia tributaria e distribuida entre os niveis de governo, como Uniao, estados"); 
            printf("\ne Municipios, tal como e adotado no Brasil.\n\nComentario:\nConforme o Art. 145 da Constituicao Federal, a Uniao, os estados, o Distrito Federal e os Municipios poderao instituir os seguintes tributos:"); 
            printf("\nI - impostos; II - taxas (...); III - contribuicoes de melhoria (..).\n\n");
            pontos++;
            break;
        } else if(respostaTres == 'b') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a equidade tributaria refere-se a justica na distribuicao da carga tributaria entre os contribuintes, que nao e o foco da questao, que trata da distribuicao de competencias tributarias entre os entes federativos.\n\nCometario:\nNo que tange a equidade tributaria, o Art. 150 da Constituicao da Republica Federativa do Brasil impoe limites arrecadatorios no ambito fiscal aos entes federativos.\n\n");
            break;
        } else if(respostaTres == 'c') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a questao nao esta relacionada ao fato do Brasil ser uma republica, mas sim a organizacao federativa do"); 
            printf("\nEstado, que envolve distribuicao de competencias tributarias.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
            break;
        } else if(respostaTres == 'd') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois, embora o Brasil seja uma nacao democratica, a questao nao esta abordando a democracia, mas sim a"); 
            printf("\nestrutura federativa e a distribuicao de competencias tributarias.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
            break;
        } else if(respostaTres == 'e') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a questao nao esta relacionada ao fato do Brasil ser uma republica, mas sim a organizacao federativa do"); 
            printf("\nEstado, que envolve distribuicao de competencias tributarias.\n\nCometario:\nNao ha comentarios adicionais.\n\n");
            break;
        }
    }

    system("pause");

    //printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    system("cls");
    printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
    printf("1: Perguntas e Respostas\n\n\n");
    printf("Pergunta 4:  A lei define a situacao necessaria e suficiente cuja ocorrencia em concreto torna imperativa a tributacao. Esse fato imponivel que"); 
    printf("\nacontece em eventos concretos como fenomeno cotidiano e chamado de\n\n");
    printf("a) fato gerador.\n");
    printf("b) obrigacao tributaria.\n");
    printf("c) hipotese de incidencia.\n");
    printf("d) exacao tributaria.\n\n");

    printf("Resposta: ");
    scanf(" %c", &respostaQuatro);

    if (respostaQuatro == 'a')
    {
      printf("\nResposta correta!\n\nO fato gerador e o evento concreto que, ao ocorrer, faz surgir a obrigacao tributaria. Este conceito esta previsto no Codigo"); 
      printf("\nTributario Nacional.\n\nComentario:\nO art. 144 do Codigo Tributario Nacional (CTN) define o fato gerador da obrigacao principal como a situacao definida em lei como necessaria e"); 
      printf("\nsuficiente a sua ocorrencia.\n\n");
      pontos++;
    } else if(respostaQuatro == 'b') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a obrigacao tributaria consiste na relacao juridica que surge a partir do fato gerador, com o qual, porem, nao se confunde.\n\nCometario:\nSegundo o art. 113 do Codigo Tributario Nacional (CTN), a obrigacao tributaria e principal ou acessoria, sendo que a obrigacao principal surge com a ocorrencia do fato gerador.\n\n");
    } else if(respostaQuatro == 'c') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a hipotese de incidencia e a descricao abstrata, na lei, do fato gerador, mas nao e o evento concreto que"); 
      printf("gera a obrigacao tributaria.\n\nCometario:\nFato gerador da obrigacao principal e situacao definida em lei como necessaria e suficiente a sua ocorrencia, conforme o art. 114 do Codigo"); 
      printf("\nTributario Nacional (CTN). Segundo o art. 116 do CTN, considera-se ocorrido o fato gerador e existentes os seus efeitos: I - tratando-se de situacao de fato, desde o momento em que se"); 
      printf("\nverifiquem as circunstancias materiais necessarias a que produza os efeitos que normalmente lhe sao proprios; II - tratando-se de situacao juridica, desde o momento em que esteja"); 
      printf("\ndefinitivamente constituida, nos termos do direito aplicavel.\n\n");
    } else if(respostaQuatro == 'd') {
      printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a exacao tributaria refere-se a cobranca ou arrecadacao de tributos, nao ao fato gerador.\n\nCometario:\nA exacao tributaria e o ato administrativo pelo qual se determina a exigibilidade do tributo, isto e, e o ato administrativo de exigir o pagamento do tributo devido, que ocorre apos a constituicao do credito tributario.\n\n");
    }
    
     if (respostaQuatro != 'a' && respostaQuatro != 'b' && respostaQuatro != 'c' && respostaQuatro != 'd')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }

    while (respostaQuatro != 'a' && respostaQuatro != 'b' && respostaQuatro != 'c' && respostaQuatro != 'd')
    {
        system("cls");
        printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
        printf("1: Perguntas e Respostas\n\n\n");
        printf("Pergunta 4:  A lei define a situacao necessaria e suficiente cuja ocorrencia em concreto torna imperativa a tributacao. Esse fato imponivel que"); 
        printf("\nacontece em eventos concretos como fenomeno cotidiano e chamado de\n\n");
        printf("a) fato gerador.\n");
        printf("b) obrigacao tributaria.\n");
        printf("c) hipotese de incidencia.\n");
        printf("d) exacao tributaria.\n\n");

        printf("Resposta: ");
        scanf(" %c", &respostaQuatro);

        if (respostaQuatro != 'a' && respostaQuatro != 'b' && respostaQuatro != 'c' && respostaQuatro != 'd')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }
        

        if (respostaQuatro == 'a')
        {
            printf("\nResposta correta!\n\nO fato gerador e o evento concreto que, ao ocorrer, faz surgir a obrigacao tributaria. Este conceito esta previsto no Codigo"); 
            printf("\nTributario Nacional.\n\nComentario:\nO art. 144 do Codigo Tributario Nacional (CTN) define o fato gerador da obrigacao principal como a situacao definida em lei como necessaria e"); 
            printf("\nsuficiente a sua ocorrencia.\n\n");
            pontos++;
        } else if(respostaQuatro == 'b') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a obrigacao tributaria consiste na relacao juridica que surge a partir do fato gerador, com o qual, porem, nao se confunde.\n\nCometario:\nSegundo o art. 113 do Codigo Tributario Nacional (CTN), a obrigacao tributaria e principal ou acessoria, sendo que a obrigacao principal surge com a ocorrencia do fato gerador.\n\n");
        } else if(respostaQuatro == 'c') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a hipotese de incidencia e a descricao abstrata, na lei, do fato gerador, mas nao e o evento concreto que"); 
            printf("gera a obrigacao tributaria.\n\nCometario:\nFato gerador da obrigacao principal e situacao definida em lei como necessaria e suficiente a sua ocorrencia, conforme o art. 114 do Codigo"); 
            printf("\nTributario Nacional (CTN). Segundo o art. 116 do CTN, considera-se ocorrido o fato gerador e existentes os seus efeitos: I - tratando-se de situacao de fato, desde o momento em que se"); 
            printf("\nverifiquem as circunstancias materiais necessarias a que produza os efeitos que normalmente lhe sao proprios; II - tratando-se de situacao juridica, desde o momento em que esteja"); 
            printf("\ndefinitivamente constituida, nos termos do direito aplicavel.\n\n");
        } else if(respostaQuatro == 'd') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra a), pois a exacao tributaria refere-se a cobranca ou arrecadacao de tributos, nao ao fato gerador.\n\nCometario:\nA exacao tributaria e o ato administrativo pelo qual se determina a exigibilidade do tributo, isto e, e o ato administrativo de exigir o pagamento do tributo devido, que ocorre apos a constituicao do credito tributario.\n\n");
        }
    }
    
    system("pause");
        
    //printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    system("cls");
    printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
    printf("1: Perguntas e Respostas\n\n\n");
    printf("Pergunta 5: Assinale a alternativa que indique o tributo cuja obrigacao tem por fato gerador uma situacao independente de qualquer atividade"); 
    printf("\nestatal especifica, relativa ao contribuinte:\n\n");
    printf("a) tarifa.\n");
    printf("b) prospeccao.\n");
    printf("c) imposto.\n");
    printf("d) alienacao.\n");
    printf("e) arrecadacao.\n\n");

    printf("Resposta: ");
    scanf(" %c", &respostaCinco);



    if (respostaQuatro != 'a' && respostaQuatro != 'b' && respostaQuatro != 'c' && respostaQuatro != 'd' && respostaQuatro != 'e')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }



    if (respostaCinco == 'c')
    {
        printf("\nResposta correta!\n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer"); 
        printf("\natividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nComentario:\nO art. 16 do Codigo Tributario Nacional (CTN) define que imposto e o tributo cuja obrigacao tem por fato gerador uma situacao independente de"); 
        printf("\nqualquer atividade estatal especifica relativa ao contribuinte.\n\n");
        pontos++;
    } else if(respostaCinco == 'a') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal"); 
        printf("\nespecifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nA tarifa e uma contraprestacao paga pelo uso de um servico publico especifico, portanto nao se encaixa na definicao de tributo cujo fato gerador e"); 
        printf("\nindependente de atividade estatal especifica.\n\n");
    } else if(respostaCinco == 'b') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nProspeccao nao e um tributo, mas uma atividade economica relacionada a pesquisa e exploracao de recursos naturais.\n\n");
    } else if(respostaCinco == 'd') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nA alienacao refere-se a transferencia de propriedade de um bem, nao sendo um tributo. Portanto, nao se encaixa na definicao de tributo cujo fato gerador e independente de atividade estatal especifica.\n\n");
    } else if(respostaCinco == 'e') {
        printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nA arrecadacao e o ato de coletar tributos, nao sendo um tipo de tributo em si. Portanto, nao se encaixa na definicao de tributo cujo fato gerador e independente de atividade estatal especifica.\n\n");
    }
    
    if (respostaCinco != 'a' && respostaCinco != 'b' && respostaCinco != 'c' && respostaCinco != 'd' && respostaCinco != 'e')
    {
      printf("A resposta inserida e invalida."); 
      printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");
    }

    while (respostaCinco != 'a' && respostaCinco != 'b' && respostaCinco != 'c' && respostaCinco != 'd' && respostaCinco != 'e')
    {
        system("cls");
        printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
        printf("1: Perguntas e Respostas\n\n\n");
        printf("Pergunta 5: Assinale a alternativa que indique o tributo cuja obrigacao tem por fato gerador uma situacao independente de qualquer atividade"); 
        printf("\nestatal especifica, relativa ao contribuinte:\n\n");
        printf("a) tarifa.\n");
        printf("b) prospeccao.\n");
        printf("c) imposto.\n");
        printf("d) alienacao.\n");
        printf("e) arrecadacao.\n\n");

        printf("Resposta: ");
        scanf(" %c", &respostaCinco);

         if (respostaCinco != 'a' && respostaCinco != 'b' && respostaCinco != 'c' && respostaCinco != 'd' && respostaCinco != 'e')
        {
            printf("\n\nA resposta inserida e invalida."); 
            printf("\n\nLembre-se, apenas responda com as letras 'a', 'b', 'c', 'd' ou 'e', apertando enter ao final para confirmar a sua resposta.\n\n");

            system("pause");
        }

         if (respostaCinco == 'c')
        {
            printf("\nResposta correta!\n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer"); 
            printf("\natividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nComentario:\nO art. 16 do Codigo Tributario Nacional (CTN) define que imposto e o tributo cuja obrigacao tem por fato gerador uma situacao independente de"); 
            printf("\nqualquer atividade estatal especifica relativa ao contribuinte.\n\n");
            pontos++;
        } else if(respostaCinco == 'a') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal"); 
            printf("\nespecifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nA tarifa e uma contraprestacao paga pelo uso de um servico publico especifico, portanto nao se encaixa na definicao de tributo cujo fato gerador e"); 
            printf("\nindependente de atividade estatal especifica.\n\n");
        } else if(respostaCinco == 'b') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nProspeccao nao e um tributo, mas uma atividade economica relacionada a pesquisa e exploracao de recursos naturais.\n\n");
        } else if(respostaCinco == 'd') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nA alienacao refere-se a transferencia de propriedade de um bem, nao sendo um tributo. Portanto, nao se encaixa na definicao de tributo cujo fato gerador e independente de atividade estatal especifica.\n\n");
        } else if(respostaCinco == 'e') {
            printf("\nResposta incorreta. \n\nA alternativa correta e a letra c), pois o imposto e o tributo que tem como fato gerador uma situacao independente de qualquer atividade estatal especifica relativa ao contribuinte, conforme definido no Codigo Tributario Nacional (CTN).\n\nCometario:\nA arrecadacao e o ato de coletar tributos, nao sendo um tipo de tributo em si. Portanto, nao se encaixa na definicao de tributo cujo fato gerador e independente de atividade estatal especifica.\n\n");
        }
    }
    
    
    system("pause");

    //printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n\n");

    system("cls");
    printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
    printf("1: Perguntas e Respostas\n\n\n");
    printf("\t\t\t\t\t\t   JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
    printf("\t\t\t\t\t\t\t\t--- FIM DO QUIZ ---\n\n");
    printf("\t\t\t\t\t\t\t\tPONTUACAO FINAL: %i.\n\n", pontos);
    system("pause");

    //printf("----------------------------------------------------------------------------------------------------------------------------------------------------------");
               
                system("cls");
                printf("TITULO: JOGO DE PERGUNTAS BASICAS DE DIREITO TRIBUTARIO \n\n");
                printf("1: Perguntas e Respostas\n\n\n");
                printf("\n\nVoce deseja jogar novamente ou retornar ao menu principal?\n\n");
                printf("1: Jogar novamente\n");
                printf("2: Retornar ao menu principal\n\n");
                printf("Digite 1 para jogar novamente ou 2 para retornar ao menu principal: ");
                scanf(" %c", &respostaDoUsuarioNoJogoPerguntasERespostas);
                system("pause");
               } while (respostaDoUsuarioNoJogoPerguntasERespostas == '1');
               
               break;
               
               
            
            case 2: 
                system("cls");
                //Jogo Cobra na Caixa.
                do
                {
                    system("cls");
    printf("TITULO: COBRA NA CAIXA\n\n");
    printf("2: Cobra na Caixa\n\n\n");
    printf("Dois exploradores ficaram presos dentro de uma tumba egipcia e, agora, precisam encontrar uma maneira de escapar. \n\n");
    printf("Eles constataram que no centro da sala em que ficaram presos, ha cinco caixas. "); 
    printf("Apos lerem os hieroglifos inscritos \n"); 
    printf("na tumba, os exploradores descobriram ");
    printf("que uma das caixas contem um botao para abrir a porta de saida, enquanto \n");
    printf("outra esconde uma cobra mortal, que, caso liberta, "); 
    printf("atacara os exploradores, causando-lhes a morte. \n"); 
    printf("As demais caixas estao vazias, ou seja, nao contem nem o botao de saida, nem a cobra venenosa.\n\n");
    printf("Os exploradores tambem descobriram que cada um deles precisara escolher uma das cinco caixas para abrir e terem a \n"); 
    printf("chance de escapar. ");
    printf("Devido a uma maldicao do Farao, se nenhum dos exploradores encontrar o botao de saida ou a cobra \nvenenosa, "); 
    printf("eles continuarao presos na tumba para sempre! \n\n"); 
    printf("Neste caso, tanto o botao quanto a cobra mortal mudarao de caixa de forma aleatoria e cada explorador precisara ");
    printf("\nabrir uma caixa novamente para tentar escapar da tumba amaldicoada do Farao Egipcio, enquanto rezam para nao \nencontrar a COBRA NA CAIXA!\n\n\n");

    system("pause");
    system("cls");

//--------------------------------------------------------------------------------------------------------------------------------------------------
    int ContadorCobraNaCaixa = 0;
    int CaixaEscolhidaPeloExploradorUm;
    int CaixaEscolhidaPeloExploradorDois;
    int CaixaComCobra = rand() % 5 + 1;
    int CaixaComBotao = rand() % 5 + 1;
    int EscolhaDoNomeDoExploradorUm;
    int EscolhaDoNomeDoExploradorDois;
    char NomeUm[20];
    char NomeDois[20];
    char NomeDoExploradorUm[20];
    char NomeDoExploradorDois[20];


//-------------------------------------------------------------------------------------------------------------------------------------------
    printf("TITULO: COBRA NA CAIXA\n\n");
    printf("2: Cobra na Caixa\n\n\n");

    printf("Escolha o nome do primeiro explorador: \n");
    printf("1. Rodion Raskolnikov\n");
    printf("2. Natasha Rostova\n");
    printf("3. Maria Bolkonskaya\n");
    printf("4. Polina Alexandrovna\n");
    printf("5. Andrei Bolkonsky\n");
    printf("6. Pierre Bezukhov\n");
    printf("7. Nikolai Rostov\n");

    printf("\n\nExplorador 1, digite o numero do nome que voce deseja: ");
    scanf("%d", &EscolhaDoNomeDoExploradorUm);

    while (getchar() != '\n'); // Limpar o buffer de entrada

    if (EscolhaDoNomeDoExploradorUm >= 1 && EscolhaDoNomeDoExploradorUm <= 7)  
    {
        switch (EscolhaDoNomeDoExploradorUm)
        {
        case 1:
            sprintf(NomeUm, "Rodion Raskolnikov");
            break;
        case 2:
            sprintf(NomeUm, "Natasha Rostova");
            break;
        case 3:
            sprintf(NomeUm, "Maria Bolkonskaya");
            break;
        case 4:
            sprintf(NomeUm, "Polina Alexandrovna");
            break;
        case 5:
            sprintf(NomeUm, "Andrei Bolkonsky");
            break;
        case 6:
            sprintf(NomeUm, "Pierre Bezukhov");
            break;
        case 7:
            sprintf(NomeUm, "Nikolai Rostov");
            break;
        default:
            break;
        } 
    
    } else {
        printf("\n\nA escolha do nome e invalida.");
        printf("\n\nPara escolher um nome valido, digite um numero entre 1 e 7 e aperte enter para confirmar a sua escolha.\n\n");
        while (getchar() != '\n');
        system("pause");
    }
    
    while (EscolhaDoNomeDoExploradorUm != 1 && EscolhaDoNomeDoExploradorUm != 2 && EscolhaDoNomeDoExploradorUm != 3 && EscolhaDoNomeDoExploradorUm != 4 && EscolhaDoNomeDoExploradorUm != 5 && EscolhaDoNomeDoExploradorUm != 6 && EscolhaDoNomeDoExploradorUm != 7)
    {
        system("cls");
        printf("TITULO: COBRA NA CAIXA\n\n");
        printf("2: Cobra na Caixa\n\n\n");

        printf("Escolha o nome do primeiro explorador: \n");
        printf("1. Rodion Raskolnikov\n");
        printf("2. Natasha Rostova\n");
        printf("3. Maria Bolkonskaya\n");
        printf("4. Polina Alexandrovna\n");
        printf("5. Andrei Bolkonsky\n");
        printf("6. Pierre Bezukhov\n");
        printf("7. Nikolai Rostov\n");

        printf("\n\nExplorador 1, digite o numero do nome que voce deseja: ");
        scanf("%d", &EscolhaDoNomeDoExploradorUm);

        if (EscolhaDoNomeDoExploradorUm >= 1 && EscolhaDoNomeDoExploradorUm <= 7)  
        {
        switch (EscolhaDoNomeDoExploradorUm)
        {
        case 1:
            sprintf(NomeUm, "Rodion Raskolnikov");
            break;
        case 2:
            sprintf(NomeUm, "Natasha Rostova");
            break;
        case 3:
            sprintf(NomeUm, "Maria Bolkonskaya");
            break;
        case 4:
            sprintf(NomeUm, "Polina Alexandrovna");
            break;
        case 5:
            sprintf(NomeUm, "Andrei Bolkonsky");
            break;
        case 6:
            sprintf(NomeUm, "Pierre Bezukhov");
            break;
        case 7:
            sprintf(NomeUm, "Nikolai Rostov");
            break;
        default:
            break;
        } 
    
        } else {
            printf("\n\nA escolha do nome e invalida.");
            printf("\n\nPara escolher um nome valido, digite um numero entre 1 e 7 e aperte enter para confirmar a sua escolha.\n\n");
           
            while (getchar() != '\n');
                
        
            
            system("pause");
        }
       
    }
    
    system("pause");



//----------------------------------------------------------------------------------------------------------------------------------------------
    system("cls");
    printf("TITULO: COBRA NA CAIXA\n\n");
    printf("2: Cobra na Caixa\n\n\n");

    printf("Escolha o nome do segundo explorador: \n");
    printf("1. Rodion Raskolnikov\n");
    printf("2. Natasha Rostova\n");
    printf("3. Maria Bolkonskaya\n");
    printf("4. Polina Alexandrovna\n");
    printf("5. Andrei Bolkonsky\n");
    printf("6. Pierre Bezukhov\n");
    printf("7. Nikolai Rostov\n");

    printf("\n\nExplorador 2, digite o numero do nome que voce deseja: ");
    scanf(" %d", &EscolhaDoNomeDoExploradorDois);

    if (EscolhaDoNomeDoExploradorDois >= 1 && EscolhaDoNomeDoExploradorDois <= 7)
    {
         switch (EscolhaDoNomeDoExploradorDois)
        {    
        case 1:
            sprintf(NomeDois, "Rodion Raskolnikov");
            break;
        case 2:
            sprintf(NomeDois, "Natasha Rostova");
            break;
        case 3:
            sprintf(NomeDois, "Maria Bolkonskaya");
            break;
        case 4:
            sprintf(NomeDois, "Polina Alexandrovna");
            break;
        case 5:
            sprintf(NomeDois, "Andrei Bolkonsky");
            break;
        case 6:
            sprintf(NomeDois, "Pierre Bezukhov");
            break;
        case 7:
            sprintf(NomeDois, "Nikolai Rostov");
            break;
        default:
            break;
        }
    } else {
        printf("\n\nA escolha do nome e invalida.");
        printf("\n\nPara escolher um nome valido, digite um numero entre 1 e 7 e aperte enter para confirmar a sua escolha.\n\n");
        while (getchar() != '\n');
        system("pause");
    }

   
    while (EscolhaDoNomeDoExploradorDois != 1 && EscolhaDoNomeDoExploradorDois != 2 && EscolhaDoNomeDoExploradorDois != 3 && EscolhaDoNomeDoExploradorDois != 4 && EscolhaDoNomeDoExploradorDois != 5 && EscolhaDoNomeDoExploradorDois != 6 && EscolhaDoNomeDoExploradorDois != 7)
    {
        system("cls");
        printf("TITULO: COBRA NA CAIXA\n\n");
        printf("2: Cobra na Caixa\n\n\n");

        printf("Escolha o nome do segundo explorador: \n");
        printf("1. Rodion Raskolnikov\n");
        printf("2. Natasha Rostova\n");
        printf("3. Maria Bolkonskaya\n");
        printf("4. Polina Alexandrovna\n");
        printf("5. Andrei Bolkonsky\n");
        printf("6. Pierre Bezukhov\n");
        printf("7. Nikolai Rostov\n");

        printf("\n\nExplorador 2, digite o numero do nome que voce deseja: ");
        scanf(" %d", &EscolhaDoNomeDoExploradorDois);

        if (EscolhaDoNomeDoExploradorDois >= 1 && EscolhaDoNomeDoExploradorDois <= 7)
        {
            switch (EscolhaDoNomeDoExploradorDois)
            {
            case 1:
                sprintf(NomeDois, "Rodion Raskolnikov");
                break;
            case 2:
                sprintf(NomeDois, "Natasha Rostova");
                break;
            case 3:
                sprintf(NomeDois, "Maria Bolkonskaya");
                break;
            case 4:
                sprintf(NomeDois, "Polina Alexandrovna");
                break;
            case 5:
                sprintf(NomeDois, "Andrei Bolkonsky");
                break;
            case 6:
                sprintf(NomeDois, "Pierre Bezukhov");
                break;
            case 7:
                sprintf(NomeDois, "Nikolai Rostov");
                break;
            default:
                break;
            }
        } else {
            printf("\n\nA escolha do nome e invalida.");
            printf("\n\nPara escolher um nome valido, digite um numero entre 1 e 7 e aperte enter para confirmar a sua escolha.\n\n");
            
            while (getchar() != '\n');
            
            
            system("pause");
        }

    }
    system("pause");

   
//-------------------------------------------------------------------------------------------------------------------------------------------------


    system("cls");

    printf("TITULO: COBRA NA CAIXA\n\n");
    printf("2: Cobra na Caixa\n\n\n");

    printf("O nome do primeiro explorador e: %s\n", NomeUm);
    printf("\n\nO nome do segundo explorador e: %s \n\n\n", NomeDois);

    system("pause");
    //1. LISTA PRÉ-DEFINIDA DE SETE NOMES - FEITO

//-------------------------------------------------------------------------------------------------------------------------------------------------
//   ESTRUTURA DO SORTEIO DO JOGADOR QUE COMEÇARÁ O JOGO

    system("cls");

    printf("TITULO: COBRA NA CAIXA\n\n");
    printf("2: Cobra na Caixa\n\n\n");


    srand(time(NULL)); // Inicializar a semente para geração de números aleatórios com base no tempo atual.

    char *JogadoresCobraNaCaixa[2] = {NomeUm, NomeDois}; // Armazenar os nomes dos jogadores em um array bidimensional.
    int JogadorSorteadoCobraNaCaixa = rand() % 2; // Gerar um número aleatório entre 0 e 1 para sortear o jogador que começará a jogar (0 para o primeiro jogador, 1 para o segundo jogador).
    int OutroJogadorCobraNaCaixa = 1 - JogadorSorteadoCobraNaCaixa; // Determinar o outro jogador com base no jogador sorteado (se o jogador sorteado for 0, o outro jogador será 1, e vice-versa).

    printf("O jogador sorteado para comecar a jogar e: %s\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]); // Exibir o nome do jogador sorteado para começar a jogar. 

   
    system("pause");
    //2. O COMPUTADOR SORTEARÁ QUEM COMEÇARÁ - FEITO

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//   JOGADOR UM ESCOLHE UMA CAIXA   

    //3. JOGADOR ESCOLHE UMA CAIXA E O SISTEMA INFORMA: BOTAO, COBRA OU VAZIA - FALTA IMPLEMENTAR
    system("cls");

    printf("TITULO: COBRA NA CAIXA\n\n");
    printf("2: Cobra na Caixa\n\n\n");
   

    //COMO IMPLEMENTAR A LÓGICA DE VERIFICAÇÃO DAS CAIXAS ESCOLHIDAS PELOS EXPLORADORES E O RESULTADO DO JOGO (SE ENCONTRARAM O BOTÃO, A COBRA OU SE ESTÃO VIVOS)?
    //1. GERAR UM NÚMERO ALEATÓRIO ENTRE 1 E 5 PARA A CAIXA COM A COBRA E OUTRO NÚMERO ALEATÓRIO ENTRE 1 E 5 PARA A CAIXA COM O BOTÃO DE SAÍDA.

    

    //int CaixaComCobra = rand() % 5 + 1; // Gerar um número aleatório entre 1 e 5 para a caixa com a cobra
    //int CaixaComBotao = rand() % 5 + 1; // Gerar um número aleatório entre 1 e 5 para a caixa com o botão de saída

    printf("%s, escolhera uma caixa para abrir (1, 2, 3, 4 ou 5): ", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
    scanf(" %d", &CaixaEscolhidaPeloExploradorUm);



   

    if (CaixaEscolhidaPeloExploradorUm == CaixaComCobra)
    {
        printf("A caixa escolhida por %s contem a cobra! Os exploradores morreram.\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        system("pause");

        
    }
    else if (CaixaEscolhidaPeloExploradorUm == CaixaComBotao)
    {
        printf("A caixa escolhida por %s contem o botao de saida! Os exploradores conseguiram escapar da tumba!\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        system("pause");

        
    }
    else
    {
        printf("\n\nA caixa escolhida por %s esta vazia. Agora, o outro explorador escolhera outra caixa.\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
        system("pause");
        

//---------------------------------------------------------------------------------------------------------------------------------------------------
// JOGADOR DOIS ESCOLHE UMA CAIXA

        printf("\n%s, escolhera uma caixa para abrir (1, 2, 3, 4 ou 5): ", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        scanf(" %d", &CaixaEscolhidaPeloExploradorDois);
    
        if (CaixaEscolhidaPeloExploradorDois == CaixaComCobra)
        {
        printf("A caixa escolhida por %s contem a cobra! Os exploradores morreram.\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        
        }
        else if (CaixaEscolhidaPeloExploradorDois == CaixaComBotao)
        {
        printf("A caixa escolhida por %s contem o botao de saida! Os exploradores conseguiram escapar da tumba!\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        
        }
        else
        {
        printf("\nA caixa escolhida por %s tambem esta vazia. Agora, o os exploradores continuarao na tumba amaldicoada do Farao ate encontrarem o botao de saida ou a cobra mortal.\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        system("pause");
        
        }
    }
    

/*
    printf("%s, escolhera uma caixa para abrir (1, 2, 3, 4 ou 5): ", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
    scanf(" %d", &CaixaEscolhidaPeloExploradorDois);
    
     if (CaixaEscolhidaPeloExploradorDois == CaixaComCobra)
    {
        printf("A caixa escolhida por %s contem a cobra! Os exploradores morreram.\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
    }
    else if (CaixaEscolhidaPeloExploradorDois == CaixaComBotao)
    {
        printf("A caixa escolhida por %s contem o botao de saida! Os exploradores conseguiram escapar da tumba!\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
    }
    else
    {
        printf("A caixa escolhida por %s tambem esta vazia. Agora, o os exploradores continuarao na tumba amaldicoada do Farao ate encontrarem o botao de saida ou a cobra mortal.\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
    }
*/

    //2. VERIFICAR SE A CAIXA ESCOLHIDA PELO EXPLORADOR É A CAIXA COM A COBRA, A CAIXA COM O BOTÃO DE SAÍDA OU UMA CAIXA VAZIA.

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//   LAÇO DE REPETIÇÃO   
    while ((CaixaEscolhidaPeloExploradorUm != CaixaComCobra && CaixaEscolhidaPeloExploradorUm != CaixaComBotao) && (CaixaEscolhidaPeloExploradorDois != CaixaComCobra && CaixaEscolhidaPeloExploradorDois != CaixaComBotao))
    {
        system("cls");
        printf("TITULO: COBRA NA CAIXA\n\n");
        printf("2: Cobra na Caixa\n\n\n");


        printf("As caixas escolhidas por %s e por %s estavam vazias. \nAgora, o ciclo se repete.\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa], JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        
        system("pause");
        system("cls");
        printf("TITULO: COBRA NA CAIXA\n\n");
        printf("2: Cobra na Caixa\n\n\n");
        
        printf("%s, escolhera uma caixa para abrir (1, 2, 3, 4 ou 5): ", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
        scanf(" %d", &CaixaEscolhidaPeloExploradorUm); 

        if (CaixaEscolhidaPeloExploradorUm == CaixaComCobra)
        {
        printf("A caixa escolhida por %s contem a cobra! Os exploradores morreram.\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        system("pause");
        break;
        }
        else if (CaixaEscolhidaPeloExploradorUm == CaixaComBotao)
        {
        printf("A caixa escolhida por %s contem o botao de saida! Os exploradores conseguiram escapar da tumba!\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        system("pause");
        break;
        }
        else
        {
        printf("A caixa escolhida por %s esta vazia.\n\n", JogadoresCobraNaCaixa[JogadorSorteadoCobraNaCaixa]);
        system("pause");
        }



        printf("%s, escolhera uma caixa para abrir (1, 2, 3, 4 ou 5): ", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        scanf(" %d", &CaixaEscolhidaPeloExploradorDois);
    
        if (CaixaEscolhidaPeloExploradorDois == CaixaComCobra)
        {
        printf("A caixa escolhida por %s contem a cobra! Os exploradores morreram.\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        system("pause");
        /*printf("Os jogadores desejam jogar novamente? (Digite 's' para sim ou 'n' para nao): ");
        char JogarNovamente;
        scanf(" %c", &JogarNovamente);
        if (JogarNovamente == 's' || JogarNovamente == 'S')
        {
            system("cls");
            main(); // Chamar a função main() para reiniciar o jogo.
        } else {
            printf("\n\nObrigado por jogar! Ate a proxima!\n\n");
            exit(0); // Encerrar o programa.
        }*/
        
        }
        else if (CaixaEscolhidaPeloExploradorDois == CaixaComBotao)
        {
        printf("A caixa escolhida por %s contem o botao de saida! Os exploradores conseguiram escapar da tumba!\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        printf("\n\nFim de jogo.\n\n");
        system("pause");
        }
        else
        {
        printf("\n\nA caixa escolhida por %s tambem esta vazia. \n\nMais um ciclo de se inicia e os exploradores continuarao na tumba amaldicoada do Farao ate\n encontrarem o botao de saida ou a cobra mortal.\n\n", JogadoresCobraNaCaixa[OutroJogadorCobraNaCaixa]);
        
        system("pause");
        }


    }
    



                system("cls");
                printf("TITULO: COBRA NA CAIXA\n\n");
                printf("2: Cobra na Caixa\n\n\n");
                printf("\n\nVoce deseja jogar novamente ou retornar ao menu principal?\n\n");
                printf("1: Jogar novamente\n");
                printf("2: Retornar ao menu principal\n\n");
                printf("Digite 1 para jogar novamente ou 2 para retornar ao menu principal: ");
                scanf(" %c", &respostaDoUsuarioNoJogoCobraNaCaixa);
                system("pause");

                } while (respostaDoUsuarioNoJogoCobraNaCaixa == '1');
                
                break;
            case 3:
                system("cls");
                //Gousmas War.
                do
                {
                    // Limite de fúria
                    int limite_furia = 5;

                    // Gousmas do jogador 1
                    int g1_1 = 1, g1_2 = 1;
                    // Gousmas do jogador 2
                    int g2_1 = 1, g2_2 = 1;

                    int turno = 1; // 1 = jogador 1, 2 = jogador 2
                    int jogoAtivo = 1;
                    int opcao, escolhaOrigem, escolhaAlvo;
                    int metade;

                    while (jogoAtivo) {
                    // Mostrar estado das Gousmas
                    system("cls");
                    printf("TITULO: GOUSMAS WAR\n\n");
                    printf("3: Gousmas War\n\n\n");
                    
                    printf("\n=== Estado Atual ===\n");
                    printf("\nJogador 1:\n");
                    printf("Gousma 0: %s%d\n", g1_1 > 0 ? "" : "(inativa) ", g1_1);
                    printf("Gousma 1: %s%d\n", g1_2 > 0 ? "" : "(inativa) ", g1_2);
                    printf("\n\nJogador 2:\n");
                    printf("Gousma 0: %s%d\n", g2_1 > 0 ? "" : "(inativa) ", g2_1);
                    printf("Gousma 1: %s%d\n", g2_2 > 0 ? "" : "(inativa) ", g2_2);

                    // Menu do jogador atual
                    printf("\n--- Turno do Jogador %d ---\n", turno);
                    printf("Escolha uma acao:\n");
                    printf("1 - Atacar\n");
                    printf("2 - Dividir\n");
                    printf("Escolha: ");
                    scanf("%d", &opcao);

                    if (opcao == 1) {
                        // Atacar
                        printf("Escolha sua Gousma (0 ou 1): ");
                        scanf("%d", &escolhaOrigem);
                        printf("Escolha Gousma inimiga (0 ou 1): ");
                        scanf("%d", &escolhaAlvo);

                        if (turno == 1) {
                            int atk = (escolhaOrigem == 0) ? g1_1 : g1_2;
                            if (atk <= 0) {
                                printf("Gousma invalida!\n");
                            } else {
                                if (escolhaAlvo == 0 && g2_1 > 0) g2_1 += atk;
                                else if (escolhaAlvo == 1 && g2_2 > 0) g2_2 += atk;
                                else printf("Gousma inimiga invalida!\n");
                            }
                        } else {
                            int atk = (escolhaOrigem == 0) ? g2_1 : g2_2;
                            if (atk <= 0) {
                                printf("Gousma invalida!\n");
                            } else {
                                if (escolhaAlvo == 0 && g1_1 > 0) g1_1 += atk;
                                else if (escolhaAlvo == 1 && g1_2 > 0) g1_2 += atk;
                                else printf("Gousma inimiga invalida!\n");
                            }
                        }

                    } else if (opcao == 2) {
                        // Dividir
                        printf("Escolha Gousma para dividir (0 ou 1): ");
                        scanf("%d", &escolhaOrigem);

                        if (turno == 1) {
                            int *origem = (escolhaOrigem == 0) ? &g1_1 : &g1_2;
                            int *destino = (!g1_1) ? &g1_1 : (!g1_2) ? &g1_2 : NULL;

                            if (*origem <= 1 || destino == NULL) {
                                printf("Divisao invalida!\n");
                            } else {
                                metade = *origem / 2;
                                *origem -= metade;
                                *destino = metade;
                                printf("Divisao realizada!\n");
                            }

                        } else {
                            int *origem = (escolhaOrigem == 0) ? &g2_1 : &g2_2;
                            int *destino = (!g2_1) ? &g2_1 : (!g2_2) ? &g2_2 : NULL;

                            if (*origem <= 1 || destino == NULL) {
                                printf("Divisao invalida!\n");
                            } else {
                                metade = *origem / 2;
                                *origem -= metade;
                                *destino = metade;
                                printf("Divisao realizada!\n");
                            }
                        }

                    } else {
                        printf("Opção invalida!\n");
                    }

                    // Verificar desintegração
                    if (g1_1 > limite_furia) { g1_1 = 0; printf("Gousma do Jogador 1 se desintegrou!\n"); }
                    if (g1_2 > limite_furia) { g1_2 = 0; printf("Gousma do Jogador 1 se desintegrou!\n"); }
                    if (g2_1 > limite_furia) { g2_1 = 0; printf("Gousma do Jogador 2 se desintegrou!\n"); }
                    if (g2_2 > limite_furia) { g2_2 = 0; printf("Gousma do Jogador 2 se desintegrou!\n"); }

                    // Verificar vitória
                    if (g1_1 <= 0 && g1_2 <= 0) { printf("Jogador 2 venceu!\n"); jogoAtivo = 0; }
                    if (g2_1 <= 0 && g2_2 <= 0) { printf("Jogador 1 venceu!\n"); jogoAtivo = 0; }

                    // Trocar turno
                    if (jogoAtivo) turno = (turno == 1) ? 2 : 1;
                }

                    printf("Fim do jogo!\n");
                    system("pause");
                    
                    system("cls");
                    printf("TITULO: GOUSMAS WAR\n\n");
                    printf("2: Gousmas War\n\n\n");
                    printf("\n\nVoce deseja jogar novamente ou retornar ao menu principal?\n\n");
                    printf("1: Jogar novamente\n");
                    printf("2: Retornar ao menu principal\n\n");
                    printf("Digite 1 para jogar novamente ou 2 para retornar ao menu principal: ");
                    scanf(" %c", &respostaDoUsuarioNoJogoGousmasWar);
                    system("pause");
                } while (respostaDoUsuarioNoJogoGousmasWar == '1');
                
                break;
             default:
                printf("\n\nA opcao escolhida e invalida.");
                printf("\n\nPara escolher um jogo valido, digite um numero entre 1 e 4 e aperte enter para confirmar a sua escolha.\n\n");
                
                while (getchar() != '\n');
                
                system("pause");
            }
        }
        } while (respostaDoUsuarioNoJogoPerguntasERespostas == '2' || respostaDoUsuarioNoJogoCobraNaCaixa == '2' || respostaDoUsuarioNoJogoGousmasWar == '2');
        
        return 0;
    }