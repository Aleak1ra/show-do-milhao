#include<stdio.h>
#include<conio.h>
#include<conio.c>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>

char playername[20];
float score=0;


void salvar_score();
void show_record();
void ajuda();


int main(){
    
    
    FILE *f;
    f=fopen("score.txt", "w"); //criando arquivo txt para armazenar o score
    fclose(f);
     
     srand(time(NULL));
     setlocale(LC_ALL, "Portuguese");
     
     int cont3,r3,r2,r1,cont=0,cont2=0,x;
     char opcoes;
     
    
     mainhome:
     system("cls");
     printf("\n\n\n\n\n\t\t\t\t\t\t\t\t Trabalho de L�gica de Programa��o by: Alexandre Gon�alves\n");
     printf("\n\n\n\n");

printf("\t\t  :::::::::  :::::::::: ::::    ::::                            :::     ::: ::::::::::: ::::    ::: :::::::::   ::::::::  ");
printf("\n");
printf("\t\t  :+:    :+: :+:        +:+:+: :+:+:+                           :+:     :+:     :+:     :+:+:   :+: :+:    :+: :+:    :+: ");
printf("\n");
printf("\t\t  +:+    +:+ +:+        +:+ +:+:+ +:+                           +:+     +:+     +:+     :+:+:+  +:+ +:+    +:+ +:+    +:+ ");
printf("\n");
printf("\t\t  +#++:++#+  +#++:++#   +#+  +:+  +#+       +#++:++#++:++       +#+     +:+     +#+     +#+ +:+ +#+ +#+    +:+ +#+    +:+ ");
printf("\n");
printf("\t\t  +#+    +#+ +#+        +#+       +#+                            +#+   +#+      +#+     +#+  +#+#+# +#+    +#+ +#+    +#+ ");
printf("\n");
printf("\t\t  #+#    #+# #+#        #+#       #+#                             #+#+#+#       #+#     #+#   #+#+# #+#    #+# #+#    #+# ");
printf("\n");
printf("\t\t  #########  ########## ###       ###                               ###     ########### ###    #### #########   ########  ");
     
     printf("\n\n");
     
printf("\t\t\t\t\t\t\t\t      :::      ::::::::  ");
printf("\n");
printf("\t\t\t\t\t\t\t\t    :+: :+:   :+:    :+: ");
printf("\n");
printf("\t\t\t\t\t\t\t\t  +:+   +:+  +:+    +:+ ");
printf("\n");
printf("\t\t\t\t\t\t\t\t  +#++:++#++: +#+    +:+ ");
printf("\n");
printf("\t\t\t\t\t\t\t\t  +#+     +#+ +#+    +#+ ");
printf("\n");
printf("\t\t\t\t\t\t\t\t  #+#     #+# #+#    #+# ");
printf("\n");
printf("\t\t\t\t\t\t\t\t  ###     ###  ######## ");

    printf("\n\n"); 
     
printf("\t   ::::::::  :::    :::  ::::::::  :::       :::       :::::::::   ::::::::        ::::    ::::  ::::::::::: :::        :::    :::     :::      ::::::::  ");
printf("\n");
printf("\t   :+:    :+: :+:    :+: :+:    :+: :+:       :+:       :+:    :+: :+:    :+:       +:+:+: :+:+:+     :+:     :+:        :+:    :+:   :+: :+:   :+:    :+: ");
printf("\n");
printf("\t   +:+        +:+    +:+ +:+    +:+ +:+       +:+       +:+    +:+ +:+    +:+       +:+ +:+:+ +:+     +:+     +:+        +:+    +:+  +:+   +:+  +:+    +:+ ");
printf("\n");
printf("\t   +#++:++#++ +#++:++#++ +#+    +:+ +#+  +:+  +#+       +#+    +:+ +#+    +:+       +#+  +:+  +#+     +#+     +#+        +#++:++#++ +#++:++#++: +#+    +:+ ");
printf("\n");
printf("\t          +#+ +#+    +#+ +#+    +#+ +#+ +#+#+ +#+       +#+    +#+ +#+    +#+       +#+       +#+     +#+     +#+        +#+    +#+ +#+     +#+ +#+    +#+ ");
printf("\n");
printf("\t   #+#    #+# #+#    #+# #+#    #+#  #+#+# #+#+#        #+#    #+# #+#    #+#       #+#       #+#     #+#     #+#        #+#    #+# #+#     #+# #+#    #+# ");
printf("\n");
printf("\t    ########  ###    ###  ########    ###   ###         #########   ########        ###       ### ########### ########## ###    ### ###     ###  ########  ");


     printf("\n\n");
                                                                                                                                             
     printf("\n");
     
     
     printf("\n\t\t\t\t\t\t\t\t > Pressione S para INICIAR");
     printf("\n\t\t\t\t\t\t\t\t > press V para ver a �ltima PONTUA��O    ");
     printf("\n\t\t\t\t\t\t\t\t > pressione H para INSTRU��ES            ");
     printf("\n\t\t\t\t\t\t\t\t > press Q para sair            ");
    
     opcoes=toupper(getch());
    
    if (opcoes=='H')
	{
	ajuda();getch();
	goto mainhome;
	}
	
	else if (opcoes=='Q')
	exit(1);
	
    else if (opcoes=='V'){
	     show_record();
	     goto mainhome;
	}
         
    
    else if(opcoes=='S'){
     
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Digite seu nome:");
     gets(playername);

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t Silvio Santos:  Bem Vindo %s ao SHOW DO MILH�O!!!",playername);
    printf("\n\n\t\t\t\t\t Est�s s�o as regras do nosso SHOW DO MILH�O, leia atentamente antes de iniciar");
    printf("\n\t\t\t\t\t -------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t >> Voc� ter� 2 fases de teste antes de iniciar o SHOW DO MILH�O");
    printf("\n\t\t\t\t\t >> Nas fases de testes, voc� ser� solicitado a um total de 3 perguntas em cada teste para analisarmos seu");
    printf("\n\t\t\t\t\t conhecimento geral. Voc� � eleg�vel para jogar o SHOW DO MILH�O se voc� ACERTAR NO MINIMO 2 DE 3 QUEST�ES");
    printf("\n\t\t\t\t\t EM CADA FASE TESTE, caso contr�rio, voc� n�o poder� participar do SHOW DO MILH�O");
    printf("\n\t\t\t\t\t por n�o ter conhecimento suficiente.");
    printf("\n\t\t\t\t\t >> No SHOW DO MILH�O, voc� ser� solicitado a um total de 10 perguntas. ");
    printf("\n\t\t\t\t\t >> Cada resposta certa ser� premiado com  R$ 100.000 mil reais!");
    printf("\n\t\t\t\t\t >> Desta forma, voc� pode ganhar at� UM MILH�O de reais em ###BARRAS DE OURO###!!!!!.........");
    printf("\n\t\t\t\t\t >> Voc� ter� 4 op��es e voc� tem que pressionar A, B ,C ou D para selecionar");
    printf("\n\t\t\t\t\t a op��o correta!");
    printf("\n\t\t\t\t\t >> A partir do momento que selecionar uma resposta incorreta o jogador est� eliminado do jogo");
    printf("\n\t\t\t\t\t >> e levar� o pr�mio de acordo com as quest�es acertadas");
    printf("\n\n\t\t\t\t\t !!!!!!!!!!!!! BOA SORTE !!!!!!!!!!!!!");
    printf("\n\n\n\t\t\t\t\t Pressione Y para INICIAR!\n");
    printf("\n\t\t\t\t\t Pressione qualquer bot�o para retornar ao MENU!");
    if (toupper(getch())=='Y')
		{
		    goto test1;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     test1://teste 1
     system("cls");
     cont=0;
     for(int i=1;i<=3;i++){
     system("cls");
     
     r1=rand() % 6 + 1;
     
     switch(r1) //primeira rodada
		{
		case 1:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t 1-Qual bicho transmite Doen�a de Chagas?");
		printf("\n\n\t\t\t\t\t\t\t A.Besouro\n\n\t\t\t\t\t\t\t B.Barata\n\n\t\t\t\t\t\t\t C. Bicho-barbeiro\n\n\t\t\t\t\t\t\t D.Lacraia");
        if (toupper(getch())=='C'){
			    
printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
			    
                cont++;
			    getch();
			    break;
             }
		else
		       {
		           printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � C.Bicho-barbeiro");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t2-Qual fruto � conhecido no Norte e Nordeste como �jerimum�? ");
		printf("\n\n\t\t\t\t\t\t\t A.Acaraj�\n\n\t\t\t\t\t\t\t B.Goiaba\n\n\t\t\t\t\t\t\t C.Ab�bora moranga\n\n\t\t\t\t\t\t\t D.Tomate");
		if (toupper(getch())=='C'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont++;
		   getch();
		   break;
        }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � C.Ab�bora moranga");
		       getch();
		       break;
         }

        case 3:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t3-Qual � o coletivo de c�es?");
		printf("\n\n\t\t\t\t\t\t\t A.C�es\n\n\t\t\t\t\t\t\t B.Matilha\n\n\t\t\t\t\t\t\t C.Cachorros\n\n\t\t\t\t\t\t\t D.Grupo");
		if (toupper(getch())=='B'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
            cont++;
			getch();
			break;
        }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Matilha");
		       getch();
		       break;
         }

        case 4:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t 4-Qual � o tri�ngulo que tem todos os lados diferentes?");
		printf("\n\n\t\t\t\t\t\t\t A.Equil�tero\n\n\t\t\t\t\t\t\t B.Escaleno\n\n\t\t\t\t\t\t\t C.Is�sceles\n\n\t\t\t\t\t\t\t D.Ret�ngulo");
		if (toupper(getch())=='B'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
            cont++;
			getch();
		    break;
          }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Escaleno");
		       getch();
		       break;
         }

        case 5:
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t 5-Quem comp�s o Hino da Independ�ncia?");
        printf("\n\n\t\t\t\t\t\t\t A.Dom Pedro II do Brasil\n\n\t\t\t\t\t\t\t B.Dom Pedro I do Brasil\n\n\t\t\t\t\t\t\t C.Tiradentes\n\n\t\t\t\t\t\t\t D.Bolsonaro");
        if (toupper(getch())=='B'){
        
        printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
        
               cont++;
               getch();
                break;
        }
        else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Pedro I do Brasil");
		       getch();
		       break;
         }

        case 6:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t 6- O adjetivo ''venoso'' est� relacionado a:");
		printf("\n\n\t\t\t\t\t\t\t A.Veneno\n\n\t\t\t\t\t\t\t B.Velha\n\n\t\t\t\t\t\t\t C.Veia");
        if (toupper(getch())=='C' ){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont++;
		   getch();
		   break;
            }
		else{
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � D.Veia");
		       getch();
		       break;
         }
         }//final do switchcase
         }//final do la�o for

	if(cont>=2){
                   system("cls");
                   printf("\n\n\n\n\n\n");
                   
                   
printf("  :::     :::  ::::::::   ::::::::  ::::::::::       :::::::::     :::      ::::::::   ::::::::   ::::::::  :::    :::       ::: ");
printf("\n");
printf("  :+:     :+: :+:    :+: :+:    :+: :+:              :+:    :+:  :+: :+:   :+:    :+: :+:    :+: :+:    :+: :+:    :+:       :+: ");
printf("\n");
printf("  +:+     +:+ +:+    +:+ +:+        +:+              +:+    +:+ +:+   +:+  +:+        +:+        +:+    +:+ +:+    +:+       +:+ ");
printf("\n");
printf("  +#+     +:+ +#+    +:+ +#+        +#++:++#         +#++:++#+ +#++:++#++: +#++:++#++ +#++:++#++ +#+    +:+ +#+    +:+       +#+ ");
printf("\n");
printf("   +#+   +#+  +#+    +#+ +#+        +#+              +#+       +#+     +#+        +#+        +#+ +#+    +#+ +#+    +#+       +#+ ");
printf("\n");
printf("    #+#+#+#   #+#    #+# #+#    #+# #+#              #+#       #+#     #+# #+#    #+# #+#    #+# #+#    #+# #+#    #+#           ");
printf("\n");
printf("      ###      ########   ########  ##########       ###       ###     ###  ########   ########   ########   ########        ### ");


printf("\n\n\n\n\n\n");


printf("  :::::::::  :::::::::   ::::::::  :::    ::: ::::::::::: ::::    ::::      :::           ::::::::::   :::      ::::::::  ::::::::::        :::    ");
printf("\n");
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+:     :+:     +:+:+: :+:+:+   :+: :+:         :+:        :+: :+:   :+:    :+: :+:                :+:   ");
printf("\n");
printf("  +:+    +:+ +:+    +:+ +:+    +:+  +:+  +:+      +:+     +:+ +:+:+ +:+  +:+   +:+        +:+       +:+   +:+  +:+        +:+                 +:+  ");
printf("\n");
printf("  +#++:++#+  +#++:++#:  +#+    +:+   +#++:+       +#+     +#+  +:+  +#+ +#++:++#++:       :#::+::# +#++:++#++: +#++:++#++ +#++:++#             +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+  +#+  +#+      +#+     +#+       +#+ +#+     +#+       +#+      +#+     +#+        +#+ +#+                 +#+  ");
printf("\n");
printf("  #+#        #+#    #+# #+#    #+# #+#    #+#     #+#     #+#       #+# #+#     #+#       #+#      #+#     #+# #+#    #+# #+#                #+#   ");
printf("\n");
printf("  ###        ###    ###  ########  ###    ### ########### ###       ### ###     ###       ###      ###     ###  ########  ##########       ###  ");
                   
                   
                   
                   
                   
                   
                   printf("\n\n\n\n");
                   system("pause");
                   system("cls");
                   goto test2;
                   }//va para o teste 2
	
    if(cont<2){
	           system("cls");
	           printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t***N�O FOI POSS�VEL PASSAR PARA A PR�XIMA FASE, TENTE NOVAMENTE***");
	           printf("\n\n\t\t\t\t\t\t\t***PRESSIONE QUALQUER BOT�O PARA VOLTAR***");
	           getch();
	           goto mainhome;
	}
	
	test2://teste 1
     system("cls");
     cont2=0;
     for(int i=1;i<=3;i++){
             system("cls");
             r2=rand() % 6 + 1;
     


     switch(r2) //segunda rodada
		{
		case 1:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tQue nome se d� � purifica��o por meio da �gua?");
		printf("\n\n\t\t\t\t\t\t\t A.Ebuli��o\n\n\t\t\t\t\t\t\t B.Gasefica��o\n\n\t\t\t\t\t\t\t C. Ablu��o\n\n\t\t\t\t\t\t\t D.Solidifica��o");
		if (toupper(getch())=='C')
			{
			    
			    printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
			    
                cont2++;
			    getch();
			    break;
             }
		else{
		           printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � C.Ablu��o");
		           getch();
		       break;
           }

        case 2:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tQual montanha se localiza entre a fronteira do Tibet com o Nepal?");
		printf("\n\n\t\t\t\t\t\t\t A.Pico do agudo\n\n\t\t\t\t\t\t\t B.Monte Carlo\n\n\t\t\t\t\t\t\t C.Everest\n\n\t\t\t\t\t\t\t D.Corcovado");
		if (toupper(getch())=='C'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont2++;
		   getch();
		   break;
         }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � C.Everest");
             getch();
             break;
             }

        case 3:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEm que parte do corpo se encontra a epiglote?");
		printf("\n\n\t\t\t\t\t\t\t A.Pesco�o\n\n\t\t\t\t\t\t\t B.Laringe\n\n\t\t\t\t\t\t\t C.Estomago\n\n\t\t\t\t\t\t\t D.Garganta");
		if (toupper(getch())=='B'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
            cont2++;
			getch();
			break;
        }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Laringe");
             getch();
             break;
             }

        case 4:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tA compensa��o por perda � chamada de...");
		printf("\n\n\t\t\t\t\t\t\t A.Ganhar\n\n\t\t\t\t\t\t\t B.Indeniza��o\n\n\t\t\t\t\t\t\t C.Lucrar\n\n\t\t\t\t\t\t\t D.Perder");
		if (toupper(getch())=='B'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont2++;
		   getch();
	       break;
        }
		else{
                 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Indeniza��o");
		       getch();
		       break;
         }

        case 5:
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEm que per�odo da pr�-hist�ria o fogo foi descoberto?");
        printf("\n\n\t\t\t\t\t\t\t A.Neol�tico\n\n\t\t\t\t\t\t\t B.Paleol�tico\n\n\t\t\t\t\t\t\t C.Per�odo da Pedra Polida\n\n\t\t\t\t\t\t\t D.Idade M�dia");
        if (toupper(getch())=='B'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont2++;
           getch();
           break;
        }
        else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Paleol�tico");
	         getch();
	         break;
          }

        case 6:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tNormalmente, quantos litros de sangue uma pessoa tem?");
		printf("\n\n\t\t\t\t\t\t\t A.Tem 0,5 litros.\n\n\t\t\t\t\t\t\t B.Tem 7 litros.\n\n\t\t\t\t\t\t\t C.Tem entre 2 a 4 litros.\n\n\t\t\t\t\t\t\t D.Tem entre 4 a 6 litros.");
		if (toupper(getch())=='D' ){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont2++;
		   getch();
		   break;
         }
		else{
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � D.Tem entre 4 a 6 litros");
            getch();
            break;
            }
            }//final do switchcase
            }//final do la�o for

        if(cont2>=2){
                   system("cls");
                   goto aviso3;
        }//va para a tela de inicio de show do milhao
	
    else
	{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t***N�O FOI POSS�VEL PASSAR PARA A PR�XIMA FASE***");
	printf("\n\n\t\t\t\t\t\t\t***PRESSIONE QUALQUER BOT�O PARA VOLTAR***");
	getch();
	goto mainhome;
	}
     
     aviso3://tela teste 3 iniciar
     system("cls");


printf("  :::::::::     :::     :::::::::      :::     :::::::::  :::::::::: ::::    :::  ::::::::  ");
printf("\n");
printf("  :+:    :+:  :+: :+:   :+:    :+:   :+: :+:   :+:    :+: :+:        :+:+:   :+: :+:    :+: ");
printf("\n");
printf("  +:+    +:+ +:+   +:+  +:+    +:+  +:+   +:+  +:+    +:+ +:+        :+:+:+  +:+ +:+        ");
printf("\n");
printf("  +#++:++#+ +#++:++#++: +#++:++#:  +#++:++#++: +#++:++#+  +#++:++#   +#+ +:+ +#+ +#++:++#++ ");
printf("\n");
printf("  +#+       +#+     +#+ +#+    +#+ +#+     +#+ +#+    +#+ +#+        +#+  +#+#+#        +#+ ");
printf("\n");
printf("  #+#       #+#     #+# #+#    #+# #+#     #+# #+#    #+# #+#        #+#   #+#+# #+#    #+# ");
printf("\n");
printf("  ###       ###     ### ###    ### ###     ### #########  ########## ###    ####  ########");
printf("\n\n\n");

printf("   ::::::::        ::::::::  :::    :::  ::::::::  :::       :::  ");
printf("\n");                      
printf("  :+:    :+:      :+:    :+: :+:    :+: :+:    :+: :+:       :+:   ");
printf("\n");           
printf("  +:+    +:+      +:+        +:+    +:+ +:+    +:+ +:+       +:+    ");
printf("\n");     
printf("  +#+    +:+      +#++:++#++ +#++:++#++ +#+    +:+ +#+  +:+  +#+     ");
printf("\n");
printf("  +#+    +#+             +#+ +#+    +#+ +#+    +#+ +#+ +#+#+ +#+    ");
printf("\n");
printf("  #+#    #+#      #+#    #+# #+#    #+# #+#    #+#  #+#+# #+#+#   ");
printf("\n");
printf("   ########        ########  ###    ###  ########    ###   ###");
printf("\n\n");
printf("  :::::::::   ::::::::       ::::    ::::  ::::::::::: :::        :::    :::     :::      ::::::::  ");
printf("\n");
printf("  :+:    :+: :+:    :+:      +:+:+: :+:+:+     :+:     :+:        :+:    :+:   :+: :+:   :+:    :+: ");
printf("\n");
printf("  +:+    +:+ +:+    +:+      +:+ +:+:+ +:+     +:+     +:+        +:+    +:+  +:+   +:+  +:+    +:+ ");
printf("\n");
printf("  +#+    +:+ +#+    +:+      +#+  +:+  +#+     +#+     +#+        +#++:++#++ +#++:++#++: +#+    +:+ ");
printf("\n");
printf("  +#+    +#+ +#+    +#+      +#+       +#+     +#+     +#+        +#+    +#+ +#+     +#+ +#+    +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+#      #+#       #+#     #+#     #+#        #+#    #+# #+#     #+# #+#    #+# ");
printf("\n");
printf("  #########   ########       ###       ### ########### ########## ###    ### ###     ###  ########  ");

printf("\n\n\n");

printf("  :::     :::     :::     :::::::::::        ::::::::   ::::::::  ::::    ::::  :::::::::: ::::::::      :::     :::::::::  ");
printf("\n");
printf("  :+:     :+:   :+: :+:       :+:           :+:    :+: :+:    :+: +:+:+: :+:+:+ :+:       :+:    :+:   :+: :+:   :+:    :+: ");
printf("\n");
printf("  +:+     +:+  +:+   +:+      +:+           +:+        +:+    +:+ +:+ +:+:+ +:+ +:+       +:+         +:+   +:+  +:+    +:+ ");
printf("\n");
printf("  +#+     +:+ +#++:++#++:     +#+           +#+        +#+    +:+ +#+  +:+  +#+ +#++:++#  +#+        +#++:++#++: +#++:++#:  ");
printf("\n");
printf("   +#+   +#+  +#+     +#+     +#+           +#+        +#+    +#+ +#+       +#+ +#+       +#+        +#+     +#+ +#+    +#+ ");
printf("\n");
printf("    #+#+#+#   #+#     #+#     #+#           #+#    #+# #+#    #+# #+#       #+# #+#       #+#    #+# #+#     #+# #+#    #+# ");
printf("\n");
printf("      ###     ###     ### ###########        ########   ########  ###       ### ########## ########  ###     ### ###    ### ");


     printf("\n\n\t\t\t\t\t\t Pressione qualquer bot�o para come�ar o $how do Milh�o!");
     if(toupper(getch())=='p'){
     goto test3;
     }

     test3://teste 3
     cont3=0;
     for(x=1;x<=10;x++){
     system("cls");
     r3= rand() % 10 + 1;

     switch(r3)
		{
		case 1:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t De onde � a inven��o do chuveiro el�trico?");
		printf("\n\n\t\t\t\t\t\t\t A.R�ssia\n\n\t\t\t\t\t\t\t B.B�lgica\n\n\t\t\t\t\t\t\t C.Brasil\n\n\t\t\t\t\t\t\t D.EUA");
		if (toupper(getch())=='C'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
            cont3++;
		    break;
            getch();
           }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � D.Tem entre 4 a 6 litros C.Brasil");getch();
             goto score;
             break;
             }

		case 2:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Quais o menor e o maior pa�s do mundo?");
		printf("\n\n\t\t\t\t\t\t\t A.Vaticano e R�ssia.\n\n\t\t\t\t\t\t\t B.Vaticano e China\n\n\t\t\t\t\t\t\t C.Madagascar e R�ssia");
		if (toupper(getch())=='A'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont3++;
           getch();
	       break;
       }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � A.Vaticano e R�ssia");
             getch();
             goto score;
             break;
	       }

        case 3:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Qual o nome do presidente do Brasil que ficou conhecido como Jango?");
		printf("\n\n\t\t\t\t\t\t\t A.Juscelino Kubtschek\n\n\t\t\t\t\t\t\t B.Lula\n\n\t\t\t\t\t\t\t C.Jo�o Goulart.\n\n\t\t\t\t\t\t\t D.Bolsonaro");
		if (toupper(getch())=='C'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont3++;
           getch();
	       break;
       }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � C.Jo�o Goulart");
             getch();
             goto score;
             break;
             }

        case 4:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Qual o livro mais vendido no mundo a seguir � B�blia?");
		printf("\n\n\t\t\t\t\t\t\t A.Dom Quixote.\n\n\t\t\t\t\t\t\t B.Harry Potter\n\n\t\t\t\t\t\t\t C.Game of thrones\n\n\t\t\t\t\t\t\t D.Marley e Eu");
		if (toupper(getch())=='A'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont3++;
           getch();
	       break;
          }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � A.Dom Quixote");getch();
             goto score;
             break;
             }

        case 5:
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tQuantas casas decimais tem o n�mero pi?");
		printf("\n\n\t\t\t\t\t\t\t A.6 casas\n\n\t\t\t\t\t\t\t B.Infinitas.\n\n\t\t\t\t\t\t\t C.2 casas\n\n\t\t\t\t\t\t\t D.8 casas");
		if (toupper(getch())=='B'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont3++;
           getch(); 
           break;
           }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Infinitasr");
             getch();
             goto score;
             break;
             }

		case 6:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tAtualmente, quantos elementos qu�micos a tabela peri�dica possui?");
		printf("\n\n\t\t\t\t\t\t\t A.200\n\n\t\t\t\t\t\t\t B.118\n\n\t\t\t\t\t\t\t C.179\n\n\t\t\t\t\t\t\t D.30");
		if (toupper(getch())=='B' ){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont3++;
           getch();
	       break;
           }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.118");goto score;
             getch();
             break;
             }

        case 7:
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tQuais os pa�ses que t�m a maior e a menor expectativa de vida do mundo?");
		printf("\n\n\n\n\n\n\t\t\t\t\t\t\t A.Brasil e Argentina\n\n\t\t\t\t\t\t\t B.EUA e Africa do sul\n\n\t\t\t\t\t\t\t C.Jap�o e Africa\n\n\t\t\t\t\t\t\t D.Jap�o e Serra Leoa.");
		if (toupper(getch())=='D'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont3++;
           getch();
	       break;
        }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � D. Jap�o e Serra Leoa");getch();
             goto score;
             break;
             }

        case 8:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t O que a palavra legend significa em portugu�s?");
		printf("\n\n\t\t\t\t\t\t\t A.Lendario\n\n\t\t\t\t\t\t\t B.Lenda\n\n\t\t\t\t\t\t\t C.Mito\n\n\t\t\t\t\t\t\t D.Grandioso");
		if (toupper(getch())=='B'){
  
printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
  
           cont3++;
           getch();
           break;
           }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � B.Lenda");getch();
             goto score;
             break;
             }

        case 9:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Qual o n�mero m�nimo de jogadores em cada time numa partida de futebol?");
		printf("\n\n\t\t\t\t\t\t\t A.7 jogadores\n\n\t\t\t\t\t\t\t B.11 jogadores\n\n\t\t\t\t\t\t\t C.2 jogadores\n\n\t\t\t\t\t\t\t D.5 jogadores");
		if (toupper(getch())=='A'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
           cont3++;
           getch();
		   break;
         }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � A.7 jogadores");
             getch();
             goto score;
             break;
             }

        case 10:
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Quanto tempo a luz do Sol demora para chegar � Terra?");
		printf("\n\n\t\t\t\t\t\t\t A.12 minutos\n\n\t\t\t\t\t\t\t B.1 dia\n\n\t\t\t\t\t\t\t C.12 horas\n\n\t\t\t\t\t\t\t D.8 minutos");
		if (toupper(getch())=='A'){
           
           printf("\n\n\n\n");			    
			    
printf("   ::::::::   ::::::::  :::::::::  :::::::::  :::::::::: ::::::::::: ::::::::  ::: ::: :::");
printf("\n"); 
printf("  :+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:            :+:    :+:    :+: :+: :+: :+: ");
printf("\n");
printf("  +:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+            +:+    +:+    +:+ +:+ +:+ +:+ ");
printf("\n");
printf("  +#+        +#+    +:+ +#++:++#:  +#++:++#:  +#++:++#       +#+    +#+    +:+ +#+ +#+ +#+ ");
printf("\n");
printf("  +#+        +#+    +#+ +#+    +#+ +#+    +#+ +#+            +#+    +#+    +#+ +#+ +#+ +#+ ");
printf("\n");
printf("  #+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#            #+#    #+#    #+#             ");
printf("\n");
printf("   ########   ########  ###    ### ###    ### ##########     ###     ########  ### ### ### ");
           
            cont3++;
            getch();
            break;
            }
		else{
             printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Errado!!! A resposta correta � A.Greg�rio de Matos, Bento Teixeira e Manuel Botelho de Oliveira");getch();
             break;
             goto score;
             }
  
         }//final do switchcase
         }//final do la�o for
	
    score:
    system("cls");
	score=(float)cont3*100000;
	if(score>0.00 && score<1000000){
printf("\n\n\n");                  
printf("\t\t\t\t\t  :::::::::     :::     :::::::::      :::     :::::::::  :::::::::: ::::    :::  ::::::::  ");//PARABENS FINAL
printf("\n");
printf("\t\t\t\t\t  :+:    :+:  :+: :+:   :+:    :+:   :+: :+:   :+:    :+: :+:        :+:+:   :+: :+:    :+: ");
printf("\n");
printf("\t\t\t\t\t  +:+    +:+ +:+   +:+  +:+    +:+  +:+   +:+  +:+    +:+ +:+        :+:+:+  +:+ +:+        ");
printf("\n");
printf("\t\t\t\t\t  +#++:++#+ +#++:++#++: +#++:++#:  +#++:++#++: +#++:++#+  +#++:++#   +#+ +:+ +#+ +#++:++#++ ");
printf("\n");
printf("\t\t\t\t\t  +#+       +#+     +#+ +#+    +#+ +#+     +#+ +#+    +#+ +#+        +#+  +#+#+#        +#+ ");
printf("\n");
printf("\t\t\t\t\t  #+#       #+#     #+# #+#    #+# #+#     #+# #+#    #+# #+#        #+#   #+#+# #+#    #+# ");
printf("\n");
printf("\t\t\t\t\t  ###       ###     ### ###    ### ###     ### #########  ########## ###    ####  ########");
printf("\n\n\n");
	     printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t **VOC� GANHOU $%.2f DE REAIS**",score);
         goto fim;
         }

	 else if(score==1000000.00){
	    printf("\n\n\n");                  
printf("\t\t\t\t\t  :::::::::     :::     :::::::::      :::     :::::::::  :::::::::: ::::    :::  ::::::::  ");//PARABENS FINAL
printf("\n");
printf("\t\t\t\t\t  :+:    :+:  :+: :+:   :+:    :+:   :+: :+:   :+:    :+: :+:        :+:+:   :+: :+:    :+: ");
printf("\n");
printf("\t\t\t\t\t  +:+    +:+ +:+   +:+  +:+    +:+  +:+   +:+  +:+    +:+ +:+        :+:+:+  +:+ +:+        ");
printf("\n");
printf("\t\t\t\t\t  +#++:++#+ +#++:++#++: +#++:++#:  +#++:++#++: +#++:++#+  +#++:++#   +#+ +:+ +#+ +#++:++#++ ");
printf("\n");
printf("\t\t\t\t\t  +#+       +#+     +#+ +#+    +#+ +#+     +#+ +#+    +#+ +#+        +#+  +#+#+#        +#+ ");
printf("\n");
printf("\t\t\t\t\t  #+#       #+#     #+# #+#    #+# #+#     #+# #+#    #+# #+#        #+#   #+#+# #+#    #+# ");
printf("\n");
printf("\t\t\t\t\t  ###       ###     ### ###    ### ###     ### #########  ########## ###    ####  ########");
printf("\n\n\n");


printf("\t\t  :::     :::  ::::::::   ::::::::  ::::::::::       ::::::::  ::::::::::      ::::::::::: ::::::::  :::::::::  ::::    :::  ::::::::  :::    ::: ");
printf("\n");
printf("\t\t  :+:     :+: :+:    :+: :+:    :+: :+:             :+:    :+: :+:                 :+:    :+:    :+: :+:    :+: :+:+:   :+: :+:    :+: :+:    :+: ");
printf("\n");
printf("\t\t  +:+     +:+ +:+    +:+ +:+        +:+             +:+        +:+                 +:+    +:+    +:+ +:+    +:+ :+:+:+  +:+ +:+    +:+ +:+    +:+ ");
printf("\n");
printf("\t\t  +#+     +:+ +#+    +:+ +#+        +#++:++#        +#++:++#++ +#++:++#            +#+    +#+    +:+ +#++:++#:  +#+ +:+ +#+ +#+    +:+ +#+    +:+ ");
printf("\n");
printf("\t\t   +#+   +#+  +#+    +#+ +#+        +#+                    +#+ +#+                 +#+    +#+    +#+ +#+    +#+ +#+  +#+#+# +#+    +#+ +#+    +#+ ");
printf("\n");
printf("\t\t    #+#+#+#   #+#    #+# #+#    #+# #+#             #+#    #+# #+#                 #+#    #+#    #+# #+#    #+# #+#   #+#+# #+#    #+# #+#    #+# ");
printf("\n");
printf("\t\t     ###      ########   ########  ##########       ########  ##########          ###     ########  ###    ### ###    ####  ########   ########  ");
printf("\n\n");
	    
        
printf("\t\t\t  ::::    ::::  ::::::::::: :::        ::::::::::: ::::::::  ::::    :::     :::     :::::::::  ::::::::::: ::::::::");
printf("\n");
printf("\t\t\t  +:+:+: :+:+:+     :+:     :+:            :+:    :+:    :+: :+:+:   :+:   :+: :+:   :+:    :+:     :+:    :+:    :+:");
printf("\n");
printf("\t\t\t  +:+ +:+:+ +:+     +:+     +:+            +:+    +:+    +:+ :+:+:+  +:+  +:+   +:+  +:+    +:+     +:+    +:+    +:+");
printf("\n");
printf("\t\t\t  +#+  +:+  +#+     +#+     +#+            +#+    +#+    +:+ +#+ +:+ +#+ +#++:++#++: +#++:++#:      +#+    +#+    +:+ ");
printf("\n");
printf("\t\t\t  +#+       +#+     +#+     +#+            +#+    +#+    +#+ +#+  +#+#+# +#+     +#+ +#+    +#+     +#+    +#+    +#+");
printf("\n");
printf("\t\t\t  #+#       #+#     #+#     #+#            #+#    #+#    #+# #+#   #+#+# #+#     #+# #+#    #+#     #+#    #+#    #+#");
printf("\n");
printf("\t\t\t  ###       ### ########### ########## ########### ########  ###    #### ###     ### ###    ### ########### ######## ");
        
        
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t VOCE GANHOU $%.2f DE REAIS EM BARRAS DE OURO!!!",score);
	    
	    }
	 else{
	 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t ******** VOCE N�O GANHOU NENHUM DINHEIRO ********");
	    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t OBRIGADO POR PARTICIPAR");
	    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t TENTE NOVAMENTE");
        goto fim;
        }

	fim:
	puts("\n\n\t\t\t\t\t\t\t\t PRESSIONE Y PARA COME�AR UMA NOVA PARTIDA");
	puts("\n\n\t\t\t\t\t\t\t\t PRESSIONE QUALQUER BOT�O PARA VOLTAR AO MENU");
	if (toupper(getch())=='Y')
		goto test1;
	else{
		goto mainhome;
    }
    }
    
    f=fopen("score.txt", "r+");
    fscanf(f,"%s :", playername);
    fscanf(f,"%.2f", score);
    
     
     fclose(f);
     getch();
}// fim do int main


void ajuda(){
     
     system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t Silvio Santos:  Bem Vindo %s ao SHOW DO MILH�O!!!",playername);
    printf("\n\n\t\t\t\t\t Est�s s�o as regras do nosso SHOW DO MILH�O, leia atentamente antes de iniciar");
    printf("\n\t\t\t\t\t -------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t >> Voc� ter� 2 fases de teste antes de iniciar o SHOW DO MILH�O");
    printf("\n\t\t\t\t\t >> Nas fases de testes, voc� ser� solicitado a um total de 3 perguntas em cada teste para analisarmos seu");
    printf("\n\t\t\t\t\t conhecimento geral. Voc� � eleg�vel para jogar o SHOW DO MILH�O se voc� ACERTAR NO MINIMO 2 DE 3 QUEST�ES");
    printf("\n\t\t\t\t\t EM CADA FASE TESTE, caso contr�rio, voc� n�o poder� participar do SHOW DO MILH�O");
    printf("\n\t\t\t\t\t por n�o ter conhecimento suficiente.");
    printf("\n\t\t\t\t\t >> No SHOW DO MILH�O, voc� ser� solicitado a um total de 10 perguntas. ");
    printf("\n\t\t\t\t\t >> Cada resposta certa ser� premiado com  R$ 100.000 mil reais!");
    printf("\n\t\t\t\t\t >> Desta forma, voc� pode ganhar at� UM MILH�O de reais em ###BARRAS DE OURO###!!!!!.........");
    printf("\n\t\t\t\t\t >> Voc� ter� 4 op��es e voc� tem que pressionar A, B ,C ou D para selecionar");
    printf("\n\t\t\t\t\t a op��o correta!");
    printf("\n\t\t\t\t\t >> A partir do momento que selecionar uma resposta incorreta o jogador est� eliminado do jogo");
    printf("\n\t\t\t\t\t >> e levar� o pr�mio de acordo com as quest�es acertadas");
    printf("\n\n\t\t\t\t\t !!!!!!!!!!!!! BOA SORTE !!!!!!!!!!!!!");
    printf("\n\t\t\t\t\t Pressione qualquer bot�o para retornar ao MENU!");
}

void show_record(){
     
     system("cls");
     
	
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&playername,&score);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t *************************************************************");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t %s foi a �ltima pessoa que jogou e ganhou: R$%0.2f reais",playername,score);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t *************************************************************");
	
    fclose(f);
	getch();
}

