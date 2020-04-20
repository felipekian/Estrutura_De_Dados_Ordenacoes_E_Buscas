// implementar: mandar perguntar o nome do arquivo para fazer a pesquisa:
void Buscadores(){
    char op;
    system("cls");
    setbuf(stdin,NULL);
    printf(" == BUSCADORES ==\n\n");
    printf(" -> NECESSITA QUE OS ARQUIVOS ESTAJAM GERADOS PREVIAMENTE:\n    USE A OPCAO 1 DO MENU PRINCIPAL.\n\n");
    printf(" 1 -> BUSCA SEQUENCIAL\n");
    printf(" 2 -> BUSCA BINARIA\n");
    printf(" 0 -> VOLTAR AO MENU PRINCIPAL\n\n");
    printf(" OPCAO: ");
    scanf("%c",&op);
    system("cls");

    if(op == '1'){
        entrar_busca_sequencial();
    }else if(op == '2'){
        entrar_busca_binaria();
    }else if(op == '0'){
        Menu();
    }
    else{
        setbuf(stdin,NULL);
        printf("\n OPCAO INVALIDA!\n");
        Sleep(3000);
        Buscadores();
    }
}

void entrar_busca_sequencial(){
    int procurado = -12;
    char op;
    int tam;
    printf(" == BUSCA SEQUENCIAL ==\n\n");
    printf(" ESCOLHA O ARQUIVO DESEJADO PARA A BUSCA: \n\n");
    printf(" 1 -> ARQUIVO DE 100 NUMEROS DESORDENADOS\n");
    printf(" 2 -> ARQUIVO DE 1.000 NUMEROS DESORDENADOS\n");
    printf(" 3 -> ARQUIVO DE 10 MIL NUMEROS DESORDENADOS\n");
    printf(" 4 -> ARQUIVO DE 100 MIL NUMEROS DESORDENADOS\n\n");
    printf(" OPCAO: ");
    scanf("%d",&tam);
    printf(" VALOR PROCURADO: ");
    scanf("%d",&procurado);
    setbuf(stdin,NULL);

    if(tam == 1){
        FILE*arquivo = fopen("100 numeros.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){

         int i=0 ,aux = 0;
         int vet[100];

         while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

         int resp = Sequencial_implemente(vet , 100 , procurado);
         analisar_busca_sequencial(resp,procurado);
        }
    }else if(tam == 2){
        FILE*arquivo = fopen("1000 numeros.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){
        int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

        int resp = Sequencial_implemente(vet , 1000 , procurado);
        analisar_busca_sequencial(resp,procurado);
        }
    }else if(tam == 3){
        FILE*arquivo = fopen("10000 numeros.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){
        int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

        int resp = Sequencial_implemente(vet , 10000 , procurado);
        analisar_busca_sequencial(resp,procurado);
        }
    }else if(tam == 4){
        FILE*arquivo = fopen("100000 numeros.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){
        int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

        int resp = Sequencial_implemente(vet , 100000 , procurado);
        analisar_busca_sequencial(resp,procurado);
        }
    }else{
        system("cls");
        printf("\n OPCAO INVALIDA!\n\n");
        Sleep(3000);
        system("cls");
        entrar_busca_sequencial();
    }

}

void erro_leitura(){
        system("cls");
        char op;
        printf(" -> ARQUIVO NAO ENCONTRADO!\n");
        setbuf(stdin,NULL);
        printf(" -> GERE-O NA PRIMEIRA OPCAO DO MENU PRINCIPAL!\n\nREDIRECIONANDO AO MENU...\n");
        Sleep(4000);
        Menu();
}

int Sequencial_implemente(int vet[] , int tamanho , int procurado){
    int i;
    for(i=0;i<tamanho;i++){
        if(vet[i]==procurado){
            return i;
        }
    }
    return -1;
}

void analisar_busca_sequencial(int resp ,int procurado){
    char op;
    if(resp == -1){
        system("cls");
        printf("\n -> VALOR NAO EXISTE NO ARQUIVO!\n\n");
        printf(" -> REDIRECIONANDO AO MENU...\n\n");
        Sleep(2500);
        Buscadores();

    }else{
        system("cls");
        printf("\n -> VALOR %d ENCONTRADO NA POSICAO --> %d <-- DO ARQUIVO!\n\n",procurado,resp);
        setbuf(stdin,NULL);
        printf(" -> REDIRECIONANDO AO MENU...\n\n");
        Sleep(2500);
        Buscadores();
    }
}

void entrar_busca_binaria(){
    system("cls");
    int op;
    printf(" == BUSCA BINARIA ==\n\n");
    printf(" |--------------INFORMACOES--------------|\n\n");
    printf(" --> PRIMEIRAMENTE DEVE-SE GERAR OS ARQUIVOS NA PRIMEIRA OPCAO DO MENU\n     PRINCIPAL.\n");
    printf(" --> NA BUSCA BINARIA, EH NECESSARIO ESTA COM OS ARQUIVOS ORDENADOS.\n --> NAO SE PREOCUPE, SERAO ORDENADOS AUTOMATICAMENTE...\n\n");
    printf(" 1 -> CASO JA TENHA GERADO OS ARQUIVOS NECESSARIOS.\n 0 -> VOLTAR AO MENU PRINCIPAL.\n\n");
    printf("OPCAO: ");
    scanf("%d",&op);
    setbuf(stdin,NULL);
    switch (op){
        case 1:
            criar_Ordenado();
        break;
        case 0:
            Menu();
        break;
        default:
            system("cls");
            printf("\n OPCAO INVALIDA...");
            Sleep(1500);
            entrar_busca_binaria();
        break;
    }



}

void binario_verdadeiro(){
    system("cls");
    setbuf(stdin,NULL);
    int procurado = -12;
    char op;
    int tam;
    printf(" == BUSCA BINARIA ==\n\n");
    printf(" ESCOLHA O ARQUIVO DESEJADO PARA A BUSCA: \n\n");
    printf(" 1 -> ARQUIVO DE 100 NUMEROS ORDENADOS\n");
    printf(" 2 -> ARQUIVO DE 1.000 NUMEROS ORDENADOS\n");
    printf(" 3 -> ARQUIVO DE 10 MIL NUMEROS ORDENADOS\n");
    printf(" 4 -> ARQUIVO DE 100 MIL NUMEROS ORDENADOS\n\n");
    printf(" OPCAO: ");
    scanf("%d",&tam);
    printf(" VALOR PROCURADO: ");
    scanf("%d",&procurado);
    setbuf(stdin,NULL);

    if(tam == 1){
        system("cls");
        printf(" == BUSCA BINARIA ==\n\n");
        FILE*arquivo = fopen("100 numeros ordenados.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){

         int i=0 ,aux = 0;
         int vet[100];

         while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

         int resp = Busca_Binaria(vet , 100 , procurado);
         analisar_busca_sequencial(resp,procurado);
        }
    }else if(tam == 2){
        system("cls");
        printf(" == BUSCA BINARIA ==\n\n");
        FILE*arquivo = fopen("1000 numeros ordenados.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){
        int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

        int resp = Busca_Binaria(vet , 1000 , procurado);
        analisar_busca_sequencial(resp,procurado);
        }
    }else if(tam == 3){
        system("cls");
        printf(" == BUSCA BINARIA ==\n\n");
        FILE*arquivo = fopen("10000 numeros ordenados.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){
        int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

        int resp = Busca_Binaria(vet , 10000 , procurado);
        analisar_busca_sequencial(resp,procurado);
        }
    }else if(tam == 4){
        system("cls");
        printf(" == BUSCA BINARIA ==\n\n");
        FILE*arquivo = fopen("100000 numeros ordenados.txt","r");
        if(arquivo == NULL){

            erro_leitura();

        }else if(arquivo != NULL){
        int i=0 ,aux = 0;
        int vet[100009];

        while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arquivo);

        int resp = Busca_Binaria(vet , 100000 , procurado);
        analisar_busca_sequencial(resp,procurado);
        }
    }else{
        system("cls");
        printf("\n OPCAO INVALIDA!\n\n");
        Sleep(3000);
        system("cls");
        binario_verdadeiro();
    }
}

int Busca_Binaria ( int vet[], int Tam , int chave){
     int inf = 0;     //Limite inferior  (o primeiro elemento do vetor em C é zero          )
     int sup = Tam-1; //Limite superior  (termina em um número a menos 0 a 9 são 10 numeros )
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}

int cem_gravar(){
    FILE*arquivo;

    arquivo = fopen("100 numeros.txt","r");

    if(arquivo == NULL){
        system("cls");
        printf(" -> ARQUIVO DE 100 NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
        Sleep(3000);
        system("cls");
        printf("REDIRECIONANDO...");
        Sleep(2000);
        fclose(arquivo);
        return 0;

    }else if(arquivo != NULL){

    int vet[100];
    int i=0,aux=0;

    while(fscanf(arquivo,"%d ",&aux )!= EOF){
        vet[i] = aux;
        i++;
    }

    fclose(arquivo);

    radixsort(vet , 100);

    zerar_arquivo_100();

    arquivo = fopen("100 numeros ordenados.txt","a");

    for(i=0;i<100;i++){
        fprintf(arquivo,"%d ",vet[i]);
    }

    fclose(arquivo);
    }
    return 1;
}

int MILLL_gravar(){
FILE*arquivo;
    arquivo = fopen("1000 numeros.txt","r");

    if(arquivo == NULL){
        system("cls");
        printf(" -> ARQUIVO DE 1000 NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
        Sleep(3000);
        system("cls");
        printf("REDIRECIONANDO...");
        Sleep(2000);
        fclose(arquivo);
        return 0;
    }else if(arquivo != NULL){

    int vet[1000];
    int i=0,aux=0;

    while(fscanf(arquivo,"%d ",&aux )!= EOF){
        vet[i] = aux;
        i++;
    }

    fclose(arquivo);

    radixsort(vet , 1000);

    zerar_arquivo_1000();

    arquivo = fopen("1000 numeros ordenados.txt","a");

    for(i=0;i<1000;i++){
        fprintf(arquivo,"%d ",vet[i]);
    }

    fclose(arquivo);

    }

    return 1;
}

int dezMIl_gravar(){
    FILE*arquivo;
    arquivo = fopen("10000 numeros.txt","r");
    if(arquivo == NULL){
        system("cls");
        printf(" -> ARQUIVO DE 10 MIL NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
        Sleep(3000);
        system("cls");
        printf("REDIRECIONANDO...");
        Sleep(2000);
        fclose(arquivo);
       return 0;
    }else if(arquivo != NULL){


    int vet[10000];
    int i=0,aux=0;

    while(fscanf(arquivo,"%d ",&aux )!= EOF){
        vet[i] = aux;
        i++;
    }

    fclose(arquivo);

    radixsort(vet , 10000);
    zerar_arquivo_10000();
    arquivo = fopen("10000 numeros ordenados.txt","a");

    for(i=0;i<10000;i++){
        fprintf(arquivo,"%d ",vet[i]);
    }

    fclose(arquivo);
    }

    return 1;
}

int cemMil_gravar(){
    FILE*arquivo;
    arquivo = fopen("100000 numeros.txt","r");

    if(arquivo == NULL){
        system("cls");
        printf(" -> ARQUIVO DE 100 MIL NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
        Sleep(3000);
        system("cls");
        printf("REDIRECIONANDO...");
        Sleep(2000);
        fclose(arquivo);
        return 0;
    }else if(arquivo != NULL){

    int vet[100000];
    int i=0,aux=0;

    while(fscanf(arquivo,"%d ",&aux )!= EOF){
        vet[i] = aux;
        i++;
    }

    fclose(arquivo);

    radixsort(vet , 100000);
    zerar_arquivo_100000();
    arquivo = fopen("100000 numeros ordenados.txt","a");

    for(i=0;i<100000;i++){
        fprintf(arquivo,"%d ",vet[i]);
    }

    fclose(arquivo);
    }
    return 1;
}

void criar_Ordenado(){

    int resp = -12;
    resp = cem_gravar();
     switch (resp){
        case 1:
            chama_Mil();
        break;
        default:
            system("cls");
            printf(" -> ARQUIVO DE 100 NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
            Sleep(2000);
            Menu();
        break;
     }
}

void chama_Mil(){
    int resp = -12;
    resp = MILLL_gravar();
     switch (resp){
        case 1:
            chama_dezMil();
        break;
        default:
            system("cls");
            printf(" -> ARQUIVO DE 1000 NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
            Sleep(2000);
            Menu();
        break;
     }
}

void chama_dezMil(){
    int resp = -12;
    resp = dezMIl_gravar();
     switch (resp){
        case 1:
            chama_cemMil();
        break;
        default:
            system("cls");
            printf(" -> ARQUIVO DE 10 MIL NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
            Sleep(2000);
            Menu();
        break;
     }
}

void chama_cemMil(){

    int resp = -12;
    resp = cemMil_gravar();
     switch (resp){
        case 1:
            binario_verdadeiro();
        break;
        default:
            system("cls");
            printf(" -> ARQUIVO DE 100 MIL NUMEROS NAO ENCONTRADO!\n\n -> GERE-0 NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
            Sleep(2000);
            Menu();
        break;
     }

}

void zerar_arquivo_100(){
    FILE*arqq = fopen("100 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);
}

void zerar_arquivo_1000(){
    FILE*arqq = fopen("1000 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);
}

void zerar_arquivo_10000(){
    FILE*arqq = fopen("10000 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);
}

void zerar_arquivo_100000(){
    FILE*arqq = fopen("100000 numeros ordenados.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);
}
