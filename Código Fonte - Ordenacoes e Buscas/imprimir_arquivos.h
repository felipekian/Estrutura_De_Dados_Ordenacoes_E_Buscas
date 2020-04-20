#ifndef IMPRIMIR_ARQUIVOS_H_INCLUDED
#define IMPRIMIR_ARQUIVOS_H_INCLUDED
#endif // IMPRIMIR_ARQUIVOS_H_INCLUDED


void Imprimir_arquivos(){
    system("cls");
    char op;
    setbuf(stdin,NULL);
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" |-----------INFORMACOES IMPORTANTES-----------|\n\n");
    printf(" -> NECESSITA TER PERVIAMENTE GERADO TODOS OS ARQUIVOS NECESSARIOS:\n");
    printf(" -> DESORDENADOS SAO GERADOS NA PRIMEIRA OPCAO DO MENU PRINCIPAL.\n");
    printf(" -> ORDENADOS SAO GERADOS NA TERCEIRA OPCAO DO MENU PRINCIPAL,\n    DEPOIS EM BUSCA BINARIA SAO GERADOS.\n\n");
    printf(" 1 -> CASO JA TENHA GERADO O ARQUIVO...\n 0 -> VOLTAR AO MENU PRINCIPAL...\n\n");
    printf("OPCAO: ");
    scanf("%c",&op);
    setbuf(stdin,NULL);

    if(op=='1'){

        opcoes();

    }else if(op=='0'){

        Menu();

    }else{
        system("cls");
        printf("\n OPCAO INVALIDA!\n");
        Sleep(1500);
        Imprimir_arquivos();
    }
}

void opcoes(){
    system("cls");
    char op;
    int opcao=-1;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" 1 -> 100 ELEMENTOS DESORDENADOS\n");
    printf(" 2 -> 100 ELEMENTOS ORDENADOS CRESCENTE\n");
    printf(" 3 -> 100 ELEMENTOS ORDENADOS DECRESCENTE\n\n");

    printf(" 4 -> 1000 ELEMENTOS DESORDENADOS\n");
    printf(" 5 -> 1000 ELEMENTOS ORDENADOS CRESCENTE\n");
    printf(" 6 -> 1000 ELEMENTOS ORDENADOS DECRESCENTE\n\n");

    printf(" 7 -> 10 MIL ELEMENTOS DESORDENADOS\n");
    printf(" 8 -> 10 MIL ELEMENTOS ORDENADOS CRESCENTE\n");
    printf(" 9 -> 10 MIL ELEMENTOS ORDENADOS DECRESCENTE\n\n");

    printf(" 10 -> 100 MIL ELEMENTOS DESORDENADOS\n");
    printf(" 11 -> 100 MIL ELEMENTOS ORDENADOS CRESCENTE\n");
    printf(" 12 -> 100 MIL ELEMENTOS ORDENADOS DECRESCENTE\n\n");
    printf(" 0 -> VOLTAR AO MENU PRINCIPAL.\n\n");
    printf(" OPCAO: ");
    scanf("%d",&opcao);

    switch (opcao){

        case 0:
            Menu();
        break;
        case 1:
            imp_cem_desordenado();
        break;
        case 2:
            imp_cem_ordenado();
        break;
        case 3:
            imp_cem_ordenado_desc();
        break;
        case 4:
            imp_mil_desordenado();
        break;
        case 5:
            imp_mil_ordenado();
        break;
        case 6:
            imp_mil_ordenado_decres();
        break;
        case 7:
            imp_dez_mil_desordenado();
        break;
        case 8:
            imp_dez_mil_ordenado();
        break;
        case 9:
           imp_dez_mil_ordenado_decres();
        break;
        case 10:
            imp_cem_mil_desordenado();
        break;
        case 11:
            imp_cem_mil_ordenado();
        break;
        case 12:
            imp_cem_mil_ordenado_decres();
        break;
        default:
            system("cls");
            printf("\n OPCAO INVALIDA!\n");
            Sleep(3000);
            opcoes();
        break;

    }
}


void imp_cem_desordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 100 ELEMENTOS DESORDENADOS --\n\n");

    FILE*arquivo=fopen("100 numeros.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);

            }else{
                printf(" %d",aux);
                i++;

            }

         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}

void imp_cem_ordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 100 ELEMENTOS ORDENADOS CRESCENTE --\n\n");

    FILE*arquivo=fopen("100 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);
            }else{
                printf(" %d",aux);
                i++;
            }
         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
           printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}

void imp_cem_ordenado_desc(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 100 ELEMENTOS ORDENADOS DECRESCENTE --\n\n");

    FILE*arquivo=fopen("100 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){
            int vet[100];
            int tot = 0;
            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[tot] = aux;
            tot++;
         }
            fclose(arquivo);

        for(i=99;i>=0;i--){
            if(i!=99){
                printf(", %d",vet[i]);
            }else{
                printf(" %d",vet[i]);
            }
        }
            setbuf(stdin,NULL);
            printf(".\n\n");
           printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }

}

void imp_mil_desordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 1000 ELEMENTOS DESORDENADOS --\n\n");

    FILE*arquivo=fopen("1000 numeros.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);
            }else{
                printf(" %d",aux);
                i++;
            }
         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}

void imp_mil_ordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 1000 ELEMENTOS ORDENADOS CRESCENTE --\n\n");

    FILE*arquivo=fopen("1000 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);
            }else{
                printf(" %d",aux);
                i++;
            }
         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}

void imp_mil_ordenado_decres(){

    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 1000 ELEMENTOS ORDENADOS DECRESCENTE --\n\n");

    FILE*arquivo=fopen("1000 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int vet[1000];
            int tot = 0;
            int i = 0,aux=0;

         while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[tot] = aux;
            tot++;
            }

            for(i=999;i>=0;i--){
                if(i!=999){
                printf(", %d",vet[i]);
            }else{
                printf(" %d",vet[i]);
            }

            }



            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}
void imp_dez_mil_desordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 10 mil ELEMENTOS DESORDENADOS --\n\n");

    FILE*arquivo=fopen("10000 numeros.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);
            }else{
                printf(" %d",aux);
                i++;
            }
         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}

void imp_dez_mil_ordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 10 MIL ELEMENTOS ORDENADOS CRESCENTE --\n\n");

    FILE*arquivo=fopen("10000 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);
            }else{
                printf(" %d",aux);
                i++;
            }
         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}

void imp_dez_mil_ordenado_decres(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 10 MIL ELEMENTOS ORDENADOS DECRESCENTE --\n\n");

    FILE*arquivo=fopen("10000 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int vet[10000];
            int tot = 0;
            int i = 0,aux=0;

         while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[tot] = aux;
            tot++;
            }

            for(i=9999;i>=0;i--){
                if(i!=9999){
                    printf(", %d",vet[i]);
                }else{
                    printf(" %d",vet[i]);
                }

            }



            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}
void imp_cem_mil_desordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 100 MIL ELEMENTOS DESORDENADOS --\n\n");

    FILE*arquivo=fopen("100000 numeros.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);
            }else{
                printf(" %d",aux);
                i++;
            }
         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}

void mensagem(){
            system("cls");
            printf("\n --> ERRO AO ABRIR O ARQUIVO DE 100 MIL NUMEROS ORDENADOS!\n\n -> REDIRECIONANDO AO MENU PRINCIPAL...\n");
            Sleep(5000);
}

void imp_cem_mil_ordenado(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 100 MIL ELEMENTOS ORDENADOS CRESCENTE --\n\n");

    FILE*arquivo=fopen("100000 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int i = 0,aux=0;
         while(fscanf(arquivo,"%d ",&aux) != EOF){
            if(i!=0){
                printf(", %d",aux);
            }else{
                printf(" %d",aux);
                i++;
            }
         }
            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();

        }
}


void imp_cem_mil_ordenado_decres(){
    char op;
    system("cls");
    printf(" == IMPRIMIR ARQUIVO ==\n\n");
    printf(" -- 100 MIL ELEMENTOS ORDENADOS DECRESCENTE --\n\n");

    FILE*arquivo=fopen("100000 numeros ordenados.txt","r");
        if(arquivo==NULL){
            mensagem();
            Menu();

        }else if(arquivo!= NULL){

            int vet[100000];
            int tot = 0;
            int i = 0,aux=0;

         while(fscanf(arquivo,"%d ",&aux) != EOF){
            vet[tot] = aux;
            tot++;
            }

            for(i=99999;i>=0;i--){
                if(i!=99999){
                    printf(", %d",vet[i]);
                }else{
                    printf(" %d",vet[i]);
                }

            }



            fclose(arquivo);
            setbuf(stdin,NULL);
            printf(".\n\n");
            printf("PRESSIONE ENTER...");
            scanf("%c",&op);
            opcoes();
        }

}
