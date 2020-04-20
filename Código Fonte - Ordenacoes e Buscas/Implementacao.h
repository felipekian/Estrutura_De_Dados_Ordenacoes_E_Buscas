#ifndef IMPLEMENTACAO_H_INCLUDED
#define IMPLEMENTACAO_H_INCLUDED
#endif // IMPLEMENTACAO_H_INCLUDED

void apresentacao(){
    char op;
    printf("\n\n        ORDENACAO\n\n           &\n\n         BUSCA\n\n");
    printf("\n\n\n TODOS DIREITOS RESERVADOS.\n");
    printf("      copy(R)right\n\n");
    Sleep(2500);
    Menu();
}

void Menu(){
    setbuf(stdin,NULL);
    system("cls");
    int op=-1;
    printf("== ORDENACAO E BUSCA ==\n\n");
    printf("MENU:\n\n");
    printf(" 1 -> GERAR ARQUIVOS.\n");
    printf(" 2 -> BENCHMARK DE ORDENACAO.\n");
    printf(" 3 -> BUSCAR NUMERO.\n");
    printf(" 4 -> IMPRIMIR ARQUIVOS GERADOS.\n");
    printf(" 5 -> IMPRIMIR RESULTADO DE BENCHMARK.\n");
    printf(" 6 -> SOBRE O APLICATIVO.\n");
    printf(" 0 -> FECHAR APLICATIVO.\n\n");
    printf("OPCAO: ");
    scanf("%d",&op);
    setbuf(stdin,NULL);


    switch(op){

        case 1:
            Gerar_Arquivo();
        break;
        case 2:
            Ordenadores();
        break;
        case 3:
            Buscadores();
        break;
        case 4:
            Imprimir_arquivos();
        break;
        case 5:
            finish();
        break;
        case 6:
            sobre();
        break;
        case 0:
            sair_do_programa();
        break;
        default:
            setbuf(stdin,NULL);
            system("cls");
             printf("\n OPCAO INVALIDA\n\n",op);
                Sleep(2000);
                Menu();
        break;
    }
}

void sair_do_programa(){
    system("cls");
    printf("\n  FECHANDO APLICATIVO...\n");
    Sleep(2000);
    system("cls");
    return 0;
}

void sobre(){
    char op;
    system("cls");
    printf(" == SOBRE == \n\n");

  //  printf("\n -> DESENVOLVEDOR: Felipe Derkian de Sousa Freitas:\n");
    printf(" -> DESENVOLVIDO EM: 10/02/2017.\n\n");
    printf("  O intuito desse programa e analisar a velocidade\n  com que cada algoritmo se comporta, tanto em veloci-\n  dade como analisando resultados gerados ao final da\n  execucao.\n");
    printf("\n\n        TODOS DIREITOS RESERVADOS.\n              copy(R)right");
    printf("\n\n\n VOLTAR AO MENU... ");
    setbuf(stdin,NULL);
    scanf("%c",&op);
    Menu();
}












