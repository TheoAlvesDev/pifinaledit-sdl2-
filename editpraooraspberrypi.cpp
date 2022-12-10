#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
void regras();
void limparTela();
void menu();
void jogarsemImagens();
void jogoFacil();
void jogoNormal();
void jogoDificil();
void jogoImagens();
void bemVindo();
void sair();
void saberJogo();
int main(int argc, char **argv){
    bemVindo();
    return 0;
}
void menu(){
    int op;
    limparTela();
    printf("\nMenu principal do jogo");
    printf("\n(1)Jogo sem Imagens");
    printf("\n(2)Saber sobre o jogo");
    printf("\n(3)Regras");
    printf("\n(4)Sair\n");
    scanf("%d", &op);
    switch(op){
    case 1:{
    jogarsemImagens();
    break;
    }
    case 2:{
        saberJogo();
        getch();
        menu();
        break;
    }
    case 3:{
        regras();
        menu();
        break;
    }
    case 4:{
        sair();
        break;
    }
}

}
void jogarsemImagens(){
 int op;
 limparTela();
 printf("\nDificuldade do Jogo sem imagens");
 printf("\n(1) Facil");
 printf("\n(2) Normal");
 printf("\n(3) Dificil");
 printf("\n(4) Voltar\n");
 scanf("%i", &op);
 switch (op)
 {
 case 1:{
    jogoFacil();
    break;
 }
   case 2 :{
    jogoNormal();
    break;
   }
   case 3: {
    jogoDificil();
    break;
   }
   case 4:{
    menu();
    break;
   }
 }
}
void limparTela(){
#ifdef __linux__
system ("clear");
#elif _WIN32
system("cls");
#else
#endif

}
void bemVindo(){
     printf("******************************************************************************\n\n\n");
     printf("                         Bem Vindo a o jogo Descomplica Portas\n\n\n");
     printf("******************************************************************************\n");
     getch();
     menu();

}
void sair(){
   limparTela();
   printf("Obrigado por jogar o nosso jogo\n");
   getch();
   exit (0);
}
void saberJogo(){
    setlocale(LC_ALL,"");
    limparTela();
    printf("Este presente jogo foi confeccionado para auxiliar no ensinamento sobre portas lógicas, assunto recorrente no estudo da computação. Por meio de uma didática simples e objetiva, esperamos que o aluno aprenda de forma definitiva sobre o assunto.\n");
    getch();
    printf("Jogo confeccionado por alunos do 1° Semestre do curso Engenharia de Computação, Unisal Lorena-SP. Todos os direitos reservados ©");
    getch();
    menu();
}
void regras(){
    limparTela();
    printf(" O jogo será no modo 1x1 e ganhará o jogador que acertar mais questões. Para isso, o jogo terá 15 questões, sendo 13 sobre portas logicas (8 em que o jogador terá que correlacionar a imagem da porta logica com sua respectiva expressão booleana e 5 sobre assuntos ligados a portas logicas) e 2 sobre tabela da verdade, em que o jogador terá que completar, ou até mesmo montar a respectiva tabela. Vale ressaltar que a dificuldade do jogo irá aumentar à medida que o jogador acerte as questões. Por fim, o resultado aparecerá no final do jogo e mostrará as questões que foram acertadas ou erradas pelo jogador.");
    getch();
    menu();
}
void jogoFacil(){
    setlocale(LC_ALL,"");
    char x[999];
    int acerto=0, erro=0;
    limparTela();
    printf("1- Sabemos que podemos correlacionar as portas Lógicas com circuitos elétricos. Portanto, para uma porta e (and), sua equivalência será:\n");
    printf("(A) Circuito em paralelo\n");
    printf("(B) Circuito em série\n");
    printf("(C) Circuito misto\n");
    fflush(stdin);
    scanf("%s", x);
    if (strcmp(x,"B") == 0 || strcmp(x,"b") == 0){
        acerto++;
    }
    else{
        erro++;
    }
    limparTela();
    getch();
    printf("2- Sabemos que podemos correlacionar as portas lógicas com circuitos elétricos. Portanto, para uma porta ou (or), sua equivalência será:\n");
    printf("(A) Circuito em paralelo\n");
    printf("(B) Circuito em série\n");
    printf("(C) Circuito misto\n");
    fflush(stdin);
    scanf("%s", x);
    if (strcmp(x,"A") == 0 ||strcmp(x,"a") == 0 ){
        acerto++;
    }
    else{
        erro++;
    }
    limparTela();
    getch();
    printf("3- Na álgebra de Boole, há somente dois estados (valores ou símbolos) permitidos, 0 e 1. Tais estados representam, respectivamente:\n");
    printf("(A) Ausência e Presença de tensão, respectivamente\n");
    printf("(B) Presença e Ausência de tensão, respectivamente\n");
    printf("(C) Presença e Curto circuito, respectivamente\n");
    fflush(stdin);
    scanf("%s", x);
    if (strcmp(x,"A") == 0 || strcmp(x,"a") == 0){
        acerto++;
    }
    else{
        erro++;
    }
    limparTela();
    printf("4- Em uma porta lógica NÃO E (NAND), sua saída será igual a 0 quando:\n");
    printf("(A) Quando apenas uma entrada for igual a 1 \n");
    printf("(B) Quando todas as entradas forem igual a 0 \n");
    printf("(C) Quando todas as entradas forem igual a 1\n");
    fflush(stdin);
    scanf("%s", x);
    if (strcmp(x,"C") == 0 || strcmp(x,"c") == 0){
        acerto++;
    }
    else{
        erro++;
    }
    limparTela();
    printf("5- Na álgebra de Boole, a tabela da verdade nos auxilia em diversas situações. Analise as afirmativas a seguir:\n");
    printf("I. Inverter o valor da entrada de uma expressão booleana qualquer \n");
    printf("II. Colocar todas as possíveis interpretações (situações), com seus respectivos resultados, de uma expressão booleana qualquer \n");
    printf("III. Obter uma expressão booleana a partir da tabela verdade\n");
    printf("(A) Somente as afirmativas I e II são verdadeiras\n");
    printf("(B) Somente as afirmativas II e III são verdadeiras\n");
    printf("(C) Todas as afirmativas são verdadeiras\n");
    fflush(stdin);
    scanf("%s", x);
    if (strcmp(x,"B") == 0 || strcmp(x,"b") == 0){
        acerto++;
    }
    else{
        erro++;
    }
    getch();
    limparTela();
    const int MAX_VALUE = 4;
    int y[5];
    int MBIN[4][2] = {{0}}; // tabela verdade
    printf("6-Monte uma tabela verdade para a porta logica ou (OR)\n");
    printf("Use a Matriz abaixo como exemplo\n");
    for (int i = 0; i < MAX_VALUE; i++) {
     MBIN[i][0] =   i & 0x1;
     MBIN[i][1] =  (i >> 1) & 0x1;
   }
   // Mostrando os valores da matriz
    for (int i = 0; i < MAX_VALUE; i++) {
        printf("\n");
    for (int j = 0; j < 2; j++) {
        printf("%d\t", MBIN[i][j]);
     }
   }
   printf("\nQuais são os valores de A?\n");
   printf("Quais são os valores de B?\n");
   printf("Quais são os valores de S(saída)?\n");
   scanf("%i %i %i", &y[0], &y[1], &y[2]);
   if(y[0] == 0011 && y[1] == 0101 && y[2] == 0111){
       acerto++;
   }
   else {
       erro++;
   }
   limparTela();
    printf("7-Monte uma tabela verdade para a porta logica ou (AND)\n");
    printf("Use a Matriz abaixo como exemplo\n");
    for (int i = 0; i < MAX_VALUE; i++) {
     MBIN[i][0] = i & 0x1;
     MBIN[i][0] = i & 0x1;
   }
   // Mostrando os valores da matriz
    for (int i = 0; i < MAX_VALUE; i++) {
        printf("\n");
    for (int j = 0; j < 2; j++) {
        printf("%d\t", MBIN[i][j]);
     }
   }
   printf("\nQuais são os valores de A?\n");
   printf("Quais são os valores de B?\n");
   printf("Quais são os valores de S(saída)?\n");
   scanf("%i %i %i", &y[3], &y[4], &y[5]);
   if(y[3] == 0011 && y[4] == 0101 && y[5] == 0001){
       acerto++;
   }
   else{
      erro++;
   }
   limparTela();
   printf("Respostas Certas:\n 1-B||b\n 2-A ||a\n 3-A||a\n 4-C||c\n 5-B||b\n 6-0011 && 0101 && 010101\n 7- 0011 && 0101 && 0001\n");
   printf("Acertos %i\n", acerto);
   printf("Erros %i\n", erro);
   getch();
   limparTela();
   char z[999];
   printf("Você deseja jogar novamente?\n");
   scanf("%s", &z);
   if (strcmp(z,"Sim")==0 || strcmp(z,"sim")==0 || strcmp(z,"S")==0 || strcmp(z,"s")==0){
        menu();
   }
   else{
        sair();
   }

}
void jogoNormal(){
      setlocale(LC_ALL,"");
    const int MAX_VALUE = 8;
    int MBIN[8][3] = {{0}};
    int acerto=0, erro=0, y[10]; char x[999];
    limparTela();
    printf("1-Use a matriz abaixo para fazer uma tabela verdade com três variáveis, porta lógica(NAND).");
    for (int i = 0; i < MAX_VALUE; i++) {
     MBIN[i][0] = (i >> 3) & 0x1;
     MBIN[i][1] = (i >> 2) & 0x1;
     MBIN[i][2] = (i >> 1) & 0x1;
   }

   // Mostrando os valores da matriz
    for (int i = 0; i < MAX_VALUE; i++) {
        printf("\n");
    for (int j = 0; j < 3; j++) {
        printf("%d\t", MBIN[i][j]);
     }
   }
   printf("\nQuais são os valores de A?");
   printf("\nQuais são os valores de B?");
   printf("\nQuais são os valores de C?");
   printf("\nQuais são os valores de S(saída)?");
   printf("\nQual e a expressao boleana?");
   printf("\nTip: Quando a variável for negada utilize aspas simples\n");
   scanf("%i %i %i %i %s", &y[0], &y[1], &y[2], &y[3], &x);
   if (y[0]== 00001111 && y[1] == 00110011 && y[2] == 01010101 && y[3]== 11111110 && strcmp(x,"A'B'C'+A'B'C+A'BC'+A'BC+AB'C'+AB'C+ABC'+ABC")==0 || strcmp(x,"a'b'c'+a'b'c+a'bc'+a'bc+ab'c'+ab'c+abc'+abc")==0 ){
    acerto++;
   }
   else{
    erro++;
   }
   limparTela();
    printf("2-Use a matriz abaixo para fazer uma tabela verdade com três variáveis, porta lógica(NOR).");
    for (int i = 0; i < MAX_VALUE; i++) {
     MBIN[i][0] = (i >> 3) & 0x1;
     MBIN[i][1] = (i >> 2) & 0x1;
     MBIN[i][2] = (i >> 1) & 0x1;
   }

   // Mostrando os valores da matriz
    for (int i = 0; i < MAX_VALUE; i++) {
        printf("\n");
    for (int j = 0; j < 3; j++) {
        printf("%d\t", MBIN[i][j]);
     }
   }
   printf("\nQuais são os valores de S(saída)?");
   printf("\nQual e a expressao boleana?");
   printf("\nTip: Quando a variável for negada utilize aspas simples\n");
   fflush(stdin);
   scanf("%i %s", &y[4], &x);
   if (y[4]== 10000000 && strcmp(x,"A'B'C'")==0 || strcmp(x,"a'b'c'")==0 ){
    acerto++;
   }
   else{
    erro++;
   }
   printf("3-Dada a expressão A'.B'.C', responda as seguintes perguntas:\n");
   printf("Qual porta lógica é essa?\n");
   printf("Quantas variaveis tem?\n");
   printf("Como vai ficar a tabela verdade em funcão do A\n");
   printf("Como vai ficar a saida dessa tabela verdade\n");
   printf("Faça a prova real para ver se estar certo a expressão\n");
   scanf("%s %i %i %i %s", &x, &y[5], &y[6], &y[7], &x);
   if(strcmp(x, "NOR") == 0 || strcmp(x, "nor") == 0 && y[5] == 3 && y[6] == 00001111 && y[7] == 10000000 && strcmp(x, "A'B'C'") == 0 || strcmp(x, "a'b'c'") == 0){
    acerto++;
   }
   else{
    erro++;
   }
   limparTela();
   printf("Rspostas certas:\n 1- 00001111 && 00110011 && 01010101 && 11111110 && A'B'C'+A'B'C+A'BC'+A'BC+AB'C'+AB'C+ABC'+ABC a'b'c'+a'b'c+a'bc'+a'bc+ab'c'+ab'c+abc'+abc\n 2- 10000000 && A'B'C' || a'b'c'\n 3- NOR || nor &&  3 &&   00001111 &&  10000000 && A'B'C' || a'b'c'\n");
     printf("Acertos %i ", acerto);
   printf("Erros %i", erro);
   getch();
   char z[999];
   printf("Você deseja jogar novamente?\n");
   scanf("%s", &z);
   if (strcmp(z,"Sim")==0 || strcmp(z,"sim")==0 || strcmp(z,"S")==0 || strcmp(z,"s")==0){
        menu();
   }
   else{
        sair();
   }
}
void jogoDificil(){
     setlocale(LC_ALL,"");
    const int MAX_VALUE = 14;
    char x[999];
    int acerto=0, erro=0, y[10];
    int MBIN[14][4] = {{0}}; // tabela verdade
    limparTela();
    printf("\nMontem uma tabela verdade para a porta logica ou (XNOR) usando 4 variáveis\n");
    printf("Use a Matriz abaixo como exemplo\n");
    printf("Tip: Para porta logíca XNOR use (+) para expressão boleana\n");
    for (int i = 0; i < MAX_VALUE; i++) {
     MBIN[i][0] = (i >> 3) & 0x1;
     MBIN[i][1] = (i >> 2) & 0x1;
     MBIN[i][2] = (i >> 1) & 0x1;
     MBIN[i][3] = i & 0x1;
   }

   // Mostrando os valores da matriz
    for (int i = 0; i < MAX_VALUE; i++) {
        printf("\n");
    for (int j = 0; j < 4; j++) {
        printf("%d\t", MBIN[i][j]);
     }
   }
   printf("\nQual é a expressão dessa porta?\n");
   printf("Qual é a saida dessa porta?\n");
   printf("Como vai ficar a tabela verdade em funcão do D\n");
   printf("No mapa de karnaugh quantos pares tem?\n");
   printf("Quais são esses pares?\n");
   scanf("%s %i %i %i %i", &x, &y[0], &y[1], &y[2], &y[3]);
   if(strcmp(x,"A'B'C'D(+)A'B'CD(+)A'BC'D'(+)A'BCD(+)AB'C'D'(+)ABCD'")==0 || strcmp(x,"a'b'c'd(+)a'b'cd(+)a'bc'd'(+)a'bcd(+)ab'c'd'(+)abcd'") == 0 && y[0] == 01101001100010 && y[1] == 01010101011001 && y[2] == 3 && y[4] == 111111){
        acerto++;
   }
   else{
    erro++;
   }
   limparTela();
    printf("\nCom essa tabela verdade responda as seguintes perguntas:\n");
    printf("Tip: Para porta logíca NAND use (') para expressão boleana\n");
    printf("TipII: Caso não tenha expressão/pares coloque o valor (0)\n");
    for (int i = 0; i < MAX_VALUE; i++) {
     MBIN[i][0] = (i >> 2) & 0x1;
     MBIN[i][1] = (i >> 1) & 0x1;
     MBIN[i][2] = (i >> 3) & 0x1;
     MBIN[i][3] = i & 0x1;
   }

   // Mostrando os valores da matriz
    for (int i = 0; i < MAX_VALUE; i++) {
        printf("\n");
    for (int j = 0; j < 4; j++) {
        printf("%d\t", MBIN[i][j]);
     }
   }
   printf("\nQual é expressão booleanada dessa tabela?(usando a porta nand)");
   printf("\nQuantos pares tem?(Tera que usar o mapa de karnaugh");
   printf("\nQuais são os pares?\n");
   scanf("%i %i %i", &y[4], &y[5], &y[6]);
   if(y[4] == 0 && y[5] == 0 && y[6] == 0 ){
       acerto ++;
   }
   else{
       erro++;
   }
   limparTela();
   printf("\n Faça uma tabela usando 4 variáveis (ABCD) e responda as seguintes perguntas:");
   printf("\n Qual sera o valor de A'?");
   printf("\n Qual sera o valor de A+B");
   printf("\n Qual sera o valor D'?");
   printf("\n Qual sera a S(saida) em função da expressão A.B+D'?\n");
   scanf("%i %i %i", &y[7], &y[8], &y[9]);
   if(y[7] == 1111111100000000 && y[8] == 0000000000001111 && y[9] == 0000101010101010){
    acerto++;
   }
   else{
    erro++;
   }
   limparTela();
   printf("Respostas certas:\n 1-A'B'C'D(+)A'B'CD(+)A'BC'D'(+)A'BCD(+)AB'C'D'(+)ABCD' || a'b'c'd(+)a'b'cd(+)a'bc'd'(+)a'bcd(+)ab'c'd'(+)abcd' &&  01101001100010 &&  01010101011001 && 3 && 111111\n 2 - 0 &&  0 &&  0\n 3- 1111111100000000 && 0000000000001111 && 0000101010101010\n");
   printf("Acertos %i ", acerto);
   printf("Erros %i", erro);
   getch();
   limparTela();
   char z[999];
   printf("Você deseja jogar novamente?\n");
   scanf("%s", &z);
   if (strcmp(z,"Sim")==0 || strcmp(z,"sim")==0 || strcmp(z,"S")==0 || strcmp(z,"s")==0){
        menu();
   }
   else{
        sair();
   }

}


