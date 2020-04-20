#ifndef ORDENADORES_H_INCLUDED
#define ORDENADORES_H_INCLUDED
#endif // ORDENADORES_H_INCLUDED

unsigned  tot_comparacoes = 0 , tot_trocas = 0;
char Nome_pega[30];

void zerar_nome(){
    strcpy(Nome_pega,"");
}

void zerar_arquivo(){
    FILE*arqq = fopen("visualizar.txt","w");
        fseek(arqq, -1, SEEK_CUR);
    fclose(arqq);
}

void Ordenadores(){
    system("cls");
    int op = -1;

    zerar_arquivo();

    printf(" == ORDENACAO ==\n\n");
    printf(" -- SEQUENCIA DE EXECUCAO --\n");
    printf(" 1 -> BUBBLE SORT\n");
    printf(" 2 -> SELECTION SORT\n");
    printf(" 3 -> INSERTION SORT\n");
    printf(" 4 -> QUICK SORT\n");
    printf(" 5 -> MERGE SORT\n");
    printf(" 6 -> HEAP SORT\n");
    printf(" 7 -> RADIX SORT\n");
    printf("comeca em alguns segundos...");
    Sleep(4000);



    Bubble();
    selection();
    insertion();
    QuickSort();
    mergesort();
    heap();
    Radix();

    system("cls");
    printf("ORDENACOES CONCLUIDAS!\n\n");
    printf("REDIRECIONANDO AO MENU PRINCIPAL...");
    Sleep(4000);
    Menu();
}

void Imprimir_testes(){
    printf("COMPARACOES:.%u.\n",tot_comparacoes);
    printf("TROCAS:......%u.\n",tot_trocas);
    printf("ORDENADO COM SUCESSO: OK\n\n");

       gravar();

    strcpy(Nome_pega,"");
    tot_comparacoes = 0;
    tot_trocas = 0;
    Sleep(5000);
}

void gravar(){
    FILE* f = fopen("visualizar.txt","a");

        fprintf(f,"%s %u %u\n",Nome_pega,tot_comparacoes,tot_trocas);

    fclose(f);

}


void Bubble(){
    char op;

    //--------------------------------------------------------------------------
    system("cls");
    printf("1.1 -> BUBBLE SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"BUBBLESORT_100");

    printf("TAMANHO: 100 ELEMENTOS.\n");
    FILE*arquivo = fopen("100 numeros.txt ","r");

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

        int resp = BubbleSort(vet , 100);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("1.2 -> BUBBLE SORT\n\n");
    printf("TAMANHO: 1000 ELEMENTOS.\n");

    zerar_nome();
    strcpy(Nome_pega,"BubbleSort_1000");

    FILE * arq = fopen("1000 numeros.txt","r");

    if(arq == NULL){
        erro_leitura();
    }else if(arq != NULL){
       int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arq,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arq);

        int resp = BubbleSort(vet , 1000);

        if(resp==1){
                char nome[] = "BUBBLESORT";
            Imprimir_testes(nome);

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("1.3 -> BUBBLE SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"BUBBLESORT_10MIL");


    printf("TAMANHO: 10 MIL ELEMENTOS.\n");
    FILE * arqu = fopen("10000 numeros.txt","r");

    if(arqu == NULL){
        erro_leitura();
    }else if(arqu != NULL){
       int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arqu,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqu);

        int resp = BubbleSort(vet , 10000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("1.4 -> BUBBLE SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"BUBBLESORT_100MIL");


    printf("TAMANHO: 100 MIL ELEMENTOS.\n");
    FILE*arqui = fopen("100000 numeros.txt","r");

    if(arqui == NULL){
        erro_leitura();
    }else if(arqui != NULL){
       int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arqui,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqui);

        int resp = BubbleSort(vet , 100000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }
}

int BubbleSort(int vet[] , int tam){
    int trocado , i ,aux=0;
    tot_comparacoes = 0;
    tot_trocas = 0;
    do{
        trocado = 0;
        for(i=0; i < tam -1 ; i++){
            tot_comparacoes++;
            if(vet[i] > vet[i+1]){

                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;

                trocado = 1;
                tot_trocas++;

            }
        }

    }while(trocado);

    return 1;
}

void selection(){

    char op;

    //--------------------------------------------------------------------------
    system("cls");
    printf("2.1 -> SELECTION SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"SELECTIONSORT_100");


    printf("TAMANHO: 100 ELEMENTOS.\n");
    FILE*arquivo = fopen("100 numeros.txt ","r");

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

        int resp = SelectionSort(vet , 100);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("2.2 -> SELECTION SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"SELECTIONSORT_1000");


    printf("TAMANHO: 1000 ELEMENTOS.\n");
    FILE * arq = fopen("1000 numeros.txt","r");

    if(arq == NULL){
        erro_leitura();
    }else if(arq != NULL){
       int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arq,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arq);

        int resp = SelectionSort(vet , 1000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("2.3 -> SELECTION SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"SELECTIONSORT_10MIL");


    printf("TAMANHO: 10 MIL ELEMENTOS.\n");
    FILE * arqu = fopen("10000 numeros.txt","r");

    if(arqu == NULL){
        erro_leitura();
    }else if(arqu != NULL){
       int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arqu,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqu);

        int resp = SelectionSort(vet , 10000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("2.4 -> SELECTION SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"SELECTIONSORT_100MIL");


    printf("TAMANHO: 100 MIL ELEMENTOS.\n");
    FILE*arqui = fopen("100000 numeros.txt","r");

    if(arqui == NULL){
        erro_leitura();
    }else if(arqui != NULL){
       int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arqui,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqui);

        int resp = SelectionSort(vet , 100000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }
}

int SelectionSort(int num[], int tam){
  int i, j, menor, aux;

  tot_comparacoes = 0;
  tot_trocas = 0;

  for (i = 0; i < (tam-1); i++){

     menor = i;

     for (j = (i+1); j < tam; j++) {
        tot_comparacoes++;
       if(num[j] < num[menor]){
         menor = j;
       }
     }

     if (i != menor) {

       aux = num[i];
       num[i] = num[menor];
       num[menor] = aux;

        tot_trocas++;

     }
  }
  return 1;
}

void insertion(){
    char op;

    //--------------------------------------------------------------------------
    system("cls");
    printf("3.1 -> INSERTION SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"INSERTIONSORT_100");


    printf("TAMANHO: 100 ELEMENTOS.\n");
    FILE*arquivo = fopen("100 numeros.txt ","r");

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

        int resp = insertionSort(vet , 100);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENDAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("3.2 -> INSERTION SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"INSERTIONSORT_1000");


    printf("TAMANHO: 1000 ELEMENTOS.\n");
    FILE * arq = fopen("1000 numeros.txt","r");

    if(arq == NULL){
        erro_leitura();
    }else if(arq != NULL){
       int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arq,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arq);

        int resp = insertionSort(vet , 1000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("3.3 -> INSERTION SORT \n\n");

    zerar_nome();
    strcpy(Nome_pega,"INSERTIONSORT_10MIL");


    printf("TAMANHO: 10 MIL ELEMENTOS.\n");
    FILE * arqu = fopen("10000 numeros.txt","r");

    if(arqu == NULL){
        erro_leitura();
    }else if(arqu != NULL){
       int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arqu,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqu);

        int resp = insertionSort(vet , 10000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("3.4 -> INSERTION SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"INSERTIONSORT_100MIL");


    printf("TAMANHO: 100 MIL ELEMENTOS.\n");
    FILE*arqui = fopen("100000 numeros.txt","r");

    if(arqui == NULL){
        erro_leitura();
    }else if(arqui != NULL){
       int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arqui,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqui);

        int resp = insertionSort(vet , 100000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }
}

int insertionSort(int original[], int length) {
	int i, j, atual;

    tot_comparacoes = 0;
    tot_trocas = 0;

	for (i = 1; i < length; i++) {
		atual = original[i];
        tot_trocas++;
		j = i - 1;
        tot_comparacoes++;
		while ((j >= 0) && (atual < original[j])) {

			original[j + 1] = original[j];
			j = j - 1;
			tot_trocas++;
            tot_comparacoes++;
		}

		original[j + 1] = atual;
		tot_trocas++;
	}

	return 1;
}

void QuickSort(){
     char op;

    //--------------------------------------------------------------------------
    system("cls");
    printf("4.1 -> QUICK SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"QUICKSORT_100");


    printf("TAMANHO: 100 ELEMENTOS.\n");
    FILE*arquivo = fopen("100 numeros.txt ","r");

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

        int resp = quick(vet ,0, 100);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("4.2 -> QUICK SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"QUICKSORT_1000");


    printf("TAMANHO: 1000 ELEMENTOS.\n");
    FILE * arq = fopen("1000 numeros.txt","r");

    if(arq == NULL){
        erro_leitura();
    }else if(arq != NULL){
       int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arq,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arq);

        int resp = quick(vet ,0, 1000);

        if(resp==1){
           Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("4.3 -> QUICK SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"QUICKSORT_10MIL");


    printf("TAMANHO: 10 MIL ELEMENTOS.\n");
    FILE * arqu = fopen("10000 numeros.txt","r");

    if(arqu == NULL){
        erro_leitura();
    }else if(arqu != NULL){
       int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arqu,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqu);

        int resp = quick(vet ,0, 10000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("4.4 -> QUICK SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"QUICKSORT_100MIL");


    printf("TAMANHO: 100 MIL ELEMENTOS.\n");
    FILE*arqui = fopen("100000 numeros.txt","r");

    if(arqui == NULL){
        erro_leitura();
    }else if(arqui != NULL){
       int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arqui,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqui);

        int resp = quick(vet ,0, 100000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }
}

int quick(int vet[], int esq, int dir){

    int pivo = esq, i,ch,j;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia
    for(i=esq+1;i<=dir;i++){        //Percorre todos os espaços do vetor

        j = i;
        tot_comparacoes++;                   //atribuição de valor
        if(vet[j] < vet[pivo]){    //verifica se o vetor da posição pivo é maior que de outra posição

         ch = vet[j];               //ch recebe o valor que é menor
         tot_trocas++;

        tot_comparacoes++;
         while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0

            vet[j] = vet[j-1];      //reorganiza a posição de vetores
            j--;                    //decremento para a organização

         tot_trocas++;


         }
         vet[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
         tot_trocas++;
         pivo++;                    // aumenta a posição do pivo em uma unidade
        }
    }
    if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
            tot_comparacoes++;
        quick(vet,esq,pivo-1);      //final da execursão da função
    }
    if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
        tot_comparacoes++;
        quick(vet,pivo+1,dir);      //chama a função para eecutar novamente
    }
    return 1;
 }

 void mergesort(){
    char op;

    //--------------------------------------------------------------------------
    system("cls");
    printf("5.1 -> MERGE SORT \n\n");


    zerar_nome();
    strcpy(Nome_pega,"MERGESORT_100");


    printf("TAMANHO: 100 ELEMENTOS.\n");
    FILE*arquivo = fopen("100 numeros.txt ","r");

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

        int resp = mergeSort(vet ,0, 100);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("5.2 -> MERGE SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"MERGESORT_1000");


    printf("TAMANHO: 1000 ELEMENTOS.\n");
    FILE * arq = fopen("1000 numeros.txt","r");

    if(arq == NULL){
        erro_leitura();
    }else if(arq != NULL){
       int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arq,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arq);

        int resp = mergeSort(vet ,0, 1000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("5.3 -> MERGE SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"MERGESORT_10MIL");


    printf("TAMANHO: 10 MIL ELEMENTOS.\n");
    FILE * arqu = fopen("10000 numeros.txt","r");

    if(arqu == NULL){
        erro_leitura();
    }else if(arqu != NULL){
       int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arqu,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqu);

        int resp = mergeSort(vet ,0, 10000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("5.4 -> MERGE SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"MERGESORT_100MIL");


    printf("TAMANHO: 100 MIL ELEMENTOS.\n");
    FILE*arqui = fopen("100000 numeros.txt","r");

    if(arqui == NULL){
        erro_leitura();
    }else if(arqui != NULL){
       int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arqui,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqui);

        int resp = mergeSort(vet ,0, 100000);

        if(resp==1){
            Imprimir_testes();

        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

 }

 int mergeSort(int vetor[] , int posicaoInicio, int posicaoFim) {
    int i, j, k, metadeTamanho, *vetorTemp;

    tot_comparacoes = 0;
    tot_trocas = 0;

    if(posicaoInicio == posicaoFim) return;

    // ordenacao recursiva das duas metades
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2;
    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    // intercalacao no vetor temporario t
    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
        tot_comparacoes++;
        if (i == metadeTamanho + 1 ) {
             // i passou do final da primeira metade, pegar v[j]
            vetorTemp[k] = vetor[j];
            j++;
            k++;

            tot_trocas++;
        }
        else {
            tot_comparacoes++;
            if (j == posicaoFim + 1) { // j passou do final da segunda metade, pegar v[i]

                vetorTemp[k] = vetor[i];
                i++;
                k++;

                tot_trocas++;

            }
            else {
                    tot_comparacoes++;
                if (vetor[i] < vetor[j]) {

                    vetorTemp[k] = vetor[i];
                    tot_trocas++;
                    i++;
                    k++;
                }
                else {

                    vetorTemp[k] = vetor[j];
                    tot_trocas++;
                    j++;
                    k++;
                }
            }
        }

    }
    // copia vetor intercalado para o vetor original
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
        tot_trocas++;

    }
    free(vetorTemp);

    return 1;
}

void heap(){

    char op;

    //--------------------------------------------------------------------------
    system("cls");
    printf("6.1 -> HEAP SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"HEAPSORT_100");


    printf("TAMANHO: 100 ELEMENTOS.\n");
    FILE*arquivo = fopen("100 numeros.txt ","r");

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

        int resp = heapsort(vet , 100);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("6.2 -> HEAP SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"HEAPSORT_1000");


    printf("TAMANHO: 1000 ELEMENTOS.\n");
    FILE * arq = fopen("1000 numeros.txt","r");

    if(arq == NULL){
        erro_leitura();
    }else if(arq != NULL){
       int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arq,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arq);

        int resp = heapsort(vet , 1000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("6.3 -> HEAP SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"HEAPSORT_10MIL");


    printf("TAMANHO: 10 MIL ELEMENTOS.\n");
    FILE * arqu = fopen("10000 numeros.txt","r");

    if(arqu == NULL){
        erro_leitura();
    }else if(arqu != NULL){
       int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arqu,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqu);

        int resp = heapsort(vet , 10000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("6.4 -> HEAP SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"HEAPSORT_100MIL");


    printf("TAMANHO: 100 MIL ELEMENTOS.\n");
    FILE*arqui = fopen("100000 numeros.txt","r");

    if(arqui == NULL){
        erro_leitura();
    }else if(arqui != NULL){
       int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arqui,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqui);

        int resp = heapsort(vet , 100000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }
}

int heapsort(int vet[] , int N){
    int i , aux;

    tot_comparacoes = 0;
    tot_trocas = 0;

    for(i=(N-1)/2 ; i>=0 ; i--){
        criaHeap(vet,i,N-1);

    }

    for(i= N-1; i>=1 ; i--){

        aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;

        tot_trocas++;

        criaHeap(vet , 0 , i-1);
    }
    return 1;
}

void criaHeap(int vet[], int i , int f){
    int aux = vet[i];
    tot_trocas++;
    int j = i*2+1;

    while(j<=f){
        tot_comparacoes++;
        if(j< f){
             tot_comparacoes++;
            if(vet[j]<vet[j+1]){

                j+=1;
            }
        }
        tot_comparacoes++;
        if(aux < vet[j]){

            vet[i] = vet[j];
            tot_trocas++;
            i = j;
            j = 2*i+1;
        }else{
            j = f+1;
        }
    }
    vet[i]=aux;
    tot_trocas++;
}

void Radix(){
    char op;

    //--------------------------------------------------------------------------
    system("cls");
    printf("7.1 -> RADIX SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"RADIXSORT_100");


    printf("TAMANHO: 100 ELEMENTOS.\n");
    FILE*arquivo = fopen("100 numeros.txt ","r");

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

        int resp = radixsort(vet , 100);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("7.2 -> RADIX SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"RADIXSORT_1000");


    printf("TAMANHO: 1000 ELEMENTOS.\n");
    FILE * arq = fopen("1000 numeros.txt","r");

    if(arq == NULL){
        erro_leitura();
    }else if(arq != NULL){
       int i=0 ,aux = 0;
        int vet[1000];

        while(fscanf(arq,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arq);

        int resp = radixsort(vet , 1000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("7.3 -> RADIX SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"RADIXSORT_10MIL");


    printf("TAMANHO: 10 MIL ELEMENTOS.\n");
    FILE * arqu = fopen("10000 numeros.txt","r");

    if(arqu == NULL){
        erro_leitura();
    }else if(arqu != NULL){
       int i=0 ,aux = 0;
        int vet[10000];

        while(fscanf(arqu,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqu);

        int resp = radixsort(vet , 10000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

    //-----------------------------------------------------------------------------
    system("cls");
    printf("7.4 -> RADIX SORT\n\n");

    zerar_nome();
    strcpy(Nome_pega,"RADIXSORT_100MIL");


    printf("TAMANHO: 100 MIL ELEMENTOS.\n");
    FILE*arqui = fopen("100000 numeros.txt","r");

    if(arqui == NULL){
        erro_leitura();
    }else if(arqui != NULL){
       int i=0 ,aux = 0;
        int vet[100000];

        while(fscanf(arqui,"%d ",&aux) != EOF){
            vet[i] = aux;
            i++;
         }
         fclose(arqui);

        int resp = radixsort(vet , 100000);

        if(resp==1){
            Imprimir_testes();
        }else{
            printf("ERRO, NAO FOI POSSIVEL ORDENAR...\n");
            scanf("%c",&op);
            Menu();
        }
    }

}

void radixsort(int vetor[], int tamanho) {

    tot_comparacoes = 0;
    tot_trocas = 0;

    int i;
    int *b;
    int maior = vetor[0];
    int exp = 1;

    b = (int *)calloc(tamanho, sizeof(int));

    for (i = 0; i < tamanho; i++) {
        tot_comparacoes++;
        if (vetor[i] > maior)
    	    maior = vetor[i];
    	    tot_trocas++;

    }

    while (maior/exp > 0) {
        int bucket[10] = { 0 };

    	for (i = 0; i < tamanho; i++){
    	    bucket[(vetor[i] / exp) % 10]++;

    	}
    	for (i = 1; i < 10; i++){
    	    bucket[i] += bucket[i - 1];
    	}
    	for (i = tamanho - 1; i >= 0; i--){
    	    b[--bucket[(vetor[i] / exp) % 10]] = vetor[i];
    	    tot_trocas++;
    	}
    	for (i = 0; i < tamanho; i++){
    	    vetor[i] = b[i];
    	    tot_trocas++;
    	}
    	exp *= 10;
    }

    free(b);
    return 1;
}
