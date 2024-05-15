
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct link
{
char data;
struct link *next;
};
typedef struct link node;
void push(char);
void pop(char *);
char topelement();
node *top = NULL;
void infixtopostfix();
int F(char symbol);
int G(char symbol);
char infix[20], postfix[20];
void main()
{
printf("\nenter a valid infix expression");
scanf("%s",infix);
printf("\nThe entered infix expression is %s",infix);
infixtopostfix();
printf("\nThe postfix expression is %s",postfix);
}
void push(char d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
temp->data = d;
temp->next=top;
top=temp;
}
void pop(char *e)
{
if(top==NULL)
printf("stack is empty\n");
else
{
node *temp=top;
top=top->next;
*e = temp->data ;
free(temp);
}
}
char topelement()
{
if(top==NULL)
printf("stack is empty\n");
else
return(top->data);
}
//stack precedence function F
int F(char symbol)
{
switch(symbol)
{
case '+':
case '-': return 2;
case '*':
case '/': return 4;
case '^':
case '$': return 5;
case '(': return 0;
case '#': return -1;
default : return 8;
}
}
//input precedence function G
int G(char symbol)
{
switch(symbol)
{
case '+':
case '-': return 1;
case '*':
case '/': return 3;
case '^':
case '$': return 6;
case '(': return 9;
case ')': return 0;
default : return 7;
}
}
void infixtopostfix()
{
int i,j=0;
char s,p;
push('#');
for(i=0;i<strlen(infix);i++)
{ s = infix[i]; //scan next symbol from infix expression
 //if stack symbol precedence is greater than input symbol precedence
 // pop the symbol from stack and place it into postfix expression
 while(F(topelement()) > G(s))
{ 
pop(&p);
postfix[j++] = p;
}
if( F(topelement())!= G(s))
push(s);
else
pop(&p);
 }
//pop remaining symbols and place them in postfix expression
 while( topelement() != '#')
{
 pop(&p);
 postfix[j++] = p;
 }
 postfix[j] = '\0';}
 

