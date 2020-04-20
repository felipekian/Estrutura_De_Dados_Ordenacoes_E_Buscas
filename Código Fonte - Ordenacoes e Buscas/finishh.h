#ifndef FINISHH_H_INCLUDED
#define FINISHH_H_INCLUDED
#endif // FINISHH_H_INCLUDED


finish(){

    system("cls");
    printf("\n == IMPRIMIR RESULTADO DE BENCKMARK ==\n\n");
    char op;
    char nomee[40];
    unsigned aux_com= 0;
    unsigned aux_troca = 0;

    FILE*w = fopen("visualizar.txt","r");

    if(w==NULL){

        printf("ERRO, ARQUIVO NAO ENCONTRADO!\nPRECISA EXECUTAR O BENCHMARK DE ORDENACOES PARA GERAR ARQUIVO...");
        Sleep(3000);
        system("cls");
        printf("REDIRECIONANDO...");
        Sleep(2000);
        Menu();

    }else if(w!=NULL){

    while(fscanf(w,"%s %u %u\n",&nomee,&aux_com,&aux_troca)!=EOF){

        printf("=========================================================\n\n");

        printf("NOME: %s.\n",nomee);
        printf("COMPARACOES: %u.\n",aux_com);
        printf("TROCAS: %u.\n",aux_troca);
        printf("ORDENADO: OK.");

        printf("\n\n=========================================================\n");

    }


    fclose(w);

    printf("\n\nPRESSIONE ENTER...");
    scanf("%c",&op);
    system("cls");
    printf("REDIRECIONANDO...");
    Sleep(2000);
    Menu();
    }
}
