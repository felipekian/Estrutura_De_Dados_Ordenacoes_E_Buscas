#ifndef GERARARQUIVO_H_INCLUDED
#define GERARARQUIVO_H_INCLUDED
#endif // GERARARQUIVO_H_INCLUDED

void zerar_arquivo_gerador(){
    FILE*arqq;
    arqq = fopen("100 numeros.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);

    arqq = fopen("100 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);

    arqq = fopen("1000 numeros.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);

    arqq = fopen("1000 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);

    arqq = fopen("10000 numeros.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);

    arqq = fopen("10000 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);

    arqq = fopen("100000 numeros.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);

    arqq = fopen("100000 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);
}

void Gerar_Arquivo(){
    int p=-12,n=-3;
    system("cls");

    FILE*oo = fopen("100 numeros.txt","r");
    if(oo!=NULL){
    zerar_arquivo_gerador();
    }

    printf("  == GERAR ARQUIVO ==\n\n");
    printf(" |--------------INFORMACAO IMPORTANTE--------------|\n\n");
    printf(" -> DESEJA CRIAR OS ARQUIVOS DESORDENADOS.\n -> SAO VITAIS PARA AO FUNCIONAMENTO ADEQUADO DO PROGRAMA:\n -> ESCOLHA: 1 para SIM ou 0 para NAO.\n\n");
    printf("\nOPCAO: ");
    scanf("%d",&p);
    setbuf(stdin,NULL);

    if(p==0){
            system("cls");
        printf("\n  REDIRECIONANDO AO MENU PRINCIPAL...");
        Sleep(3000);
        Menu();
    }else if(p!=0){

    system("cls");
    printf("\n  GERANDO ARQUIVO DE 100 NUMEROS...\n\n");
    Sleep(2000);
    if(p == 1){
            n = -2;
        n = Gerar_randomicos_cem();

        Sleep(3000);
        system("cls");
        if(n==1){
            printf("\n  GERADO E GRAVADO OS 100 NUMEROS COM SUCESSO! \n");
            Sleep(3000);

        }else{
            printf("\n  ERRO NA GERACAO DOS 100 NUMEROS! \n");
        }
    }else{
        system("cls");
    }



    system("cls");
    printf("\n  GERANDO ARQUIVO DE 1000 NUMEROS...\n\n");
    Sleep(2500);
    system("cls");
    if(p == 1){
            n = -2;
        n = Gerar_randomicos_mil();

        if(n==1){
                printf("\n  GERADO E GRAVADO OS 1000 NUMEROS COM SUCESSO! \n");
                Sleep(3000);

            }else{
                printf("\n ERRO NA GERACAO DOS 1000 NUMEROS! \n");
            }
    }else{
        system("cls");
    }


    system("cls");
    printf("\n  GERANDO ARQUIVO DE 10 MIL NUMEROS...\n\n");
    Sleep(3000);

    if(p == 1){
        n = -2;
    n = Gerar_randomicos_dez_mil();

        system("cls");
    if(n==1){
                printf("\n  GERADO E GRAVADO OS 10 MIL NUMEROS COM SUCESSO! \n");
                Sleep(3000);
            }else{
                printf("\nERRO NA GERACAO DOS 10 MIL NUMEROS! \n");
            }
    }else{
        system("cls");
    }

    system("cls");
    printf("\n GERANDO ARQUIVO DE 100 MIL NUMEROS...\n\n");
    Sleep(4000);

    if(p == 1){
            n = -2;
        n = Gerar_randomicos_cem_mil();

        system("cls");
        if(n==1){
            printf("\n  GERADO E GRAVADO OS 100 MIL NUMEROS COM SUCESSO! \n");
            Sleep(4000);

        }else{
            printf("\n  ERRO NA GERACAO DOS 100 MIL NUMEROS! \n");
        }
    }else{
        system("cls");
    }

    system("cls");
    printf("\n ->  TODOS OS POSSIVEIS ARQUIVOS CRIADOS E GRAVADOS...\n\n");
    printf(" ->  REDIRECIONANDO AO MENU PRINCIPAL...\n");
    Sleep(4000);
    Menu();
    }
}

int Gerar_randomicos_cem(){
    FILE*arquivo;
    arquivo = fopen("100 numeros.txt","a");
    int i;
    srand((unsigned) time(NULL));

    for(i = 1 ; i <= 100 ; i++){
        int no = rand()%999;
            fprintf(arquivo, "%d ", no);

    }
    fclose(arquivo);
    return 1;
}

int Gerar_randomicos_mil(){
    FILE*arquivo;
    arquivo = fopen("1000 numeros.txt","a");
    int i;
    srand((unsigned) time(NULL));

    for(i = 1 ; i <= 1000 ; i++){
        int no = rand()%9999;
        fprintf(arquivo, "%d ", no);
    }
fclose(arquivo);
return 1;
}

int Gerar_randomicos_dez_mil(){
    FILE*arquivo;
    arquivo = fopen("10000 numeros.txt","a");
    int i;
    srand((unsigned) time(NULL));

    for(i = 1 ; i <= 10000 ; i++){
         int no = rand()%99999;
        fprintf(arquivo, "%d ", no);
    }
fclose(arquivo);
return 1;
}

int Gerar_randomicos_cem_mil(){
    FILE*arquivo;
    arquivo = fopen("100000 numeros.txt","a");
    int i;
    srand((unsigned) time(NULL));

    for(i = 1 ; i <= 100000 ; i++){
         int no = rand()%999999;
        fprintf(arquivo, "%d ", no);
    }
fclose(arquivo);
return 1;
}
