#include <stdio.h>
#include <ctype.h>
int charClass;
char lexeme[100];
char nextChar;
int lexLen;
int token;
int pointer=0;
int nextToken;
char input[100]="(a*b)+c/d";
void addChar();
void getChar();
void getNonBlank();
void lex();
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99
#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26
int lookup(char ch) {
 switch (ch) {
 case '(':
 addChar();
 nextToken = LEFT_PAREN;
 break;
 case ')':
 addChar();
 nextToken = RIGHT_PAREN;
 break;
 case '+':
 addChar();
 nextToken = ADD_OP;
 break;
 case '-':
 addChar();
 nextToken = SUB_OP;
 break;
 case '*':
 addChar();
 nextToken = MULT_OP;
 break;
 case '/':
 addChar();
 nextToken = DIV_OP;
 break;
 default:
 addChar();
 nextToken = EOF;
 break;
 }
 return nextToken;
}
void factor() {
 printf("Enter <factor>\n");
/* Determine which RHS */
 if (nextToken == IDENT || nextToken == INT_LIT)
/* Get the next token */
 lex();
/* If the RHS is ( <expr>), call lex to pass over the
 Left parenthesis, call expr, and check for the right
 Parenthesis */
 else {
 if (nextToken == LEFT_PAREN) {
 lex();
 expr();
 if (nextToken == RIGHT_PAREN)
 lex();
 else
 printf("Error!!");
 } /* End of if (nextToken == … */
/* It was not an id, an integer literal, or a left
 Parenthesis */
 else
  printf("Error!!");
 } /* End of else */
 printf("Exit <factor>\n");
}
void term() {
 printf("Enter <term>\n");
/* Parse the first factor */
 factor();
/* As long as the next token is * or /, get the
 Next token and parse the next factor */
 while (nextToken == MULT_OP || nextToken == DIV_OP) {
 lex();
 factor();
 }
 printf("Exit <term>\n");
}
void expr() {
 printf("Enter <expr>\n");
/* Parse the first term */
 term();
/* As long as the next token is + or -, get
 The next token and parse the next term */
 while (nextToken == ADD_OP || nextToken == SUB_OP) {
 lex();
 term();
 }
 printf("Exit <expr>\n");
}
void addChar() {
 if (lexLen <= 98) {
 lexeme[lexLen++] = nextChar;
 lexeme[lexLen] = 0;
 }
 else
 printf("Error – lexeme is too long \n");
}
void getChar() {
 if ((nextChar = input[pointer]) !=0) {
     pointer++;
 if (isalpha(nextChar))
 charClass = LETTER;
 else if (isdigit(nextChar))
 charClass = DIGIT;
 else charClass = UNKNOWN;
 }
 else
 charClass = EOF;
}
void getNonBlank() {
 while (isspace(nextChar))
 getChar();
}
void lex() {
 lexLen = 0;
 getNonBlank();
 switch (charClass) {
/* Parse identifiers */
 case LETTER:
 addChar();
 getChar();
 while (charClass == LETTER || charClass == DIGIT) {
 addChar();
 getChar();
 }
 nextToken = IDENT;
 break;
/* Parse integer literals */
 case DIGIT:
 addChar();
 getChar();
 while (charClass == DIGIT) {
 addChar();
 getChar();
 }
 nextToken = INT_LIT;
 break;
/* Parentheses and operators */
 case UNKNOWN:
 lookup(nextChar);
 getChar();
 break;
/* EOF */
 case EOF:
 nextToken = EOF;
 lexeme[0] = 'E';
 lexeme[1] = 'O';
 lexeme[2] = 'F';
 lexeme[3] = 0;
 break;
 } /* End of switch */
 printf("Next token is: %d, Next lexeme is %s\n",
 nextToken, lexeme);
 return;
}
//driver code
int main()
{
    getChar();
    lex();
    expr();
    return 0;
}