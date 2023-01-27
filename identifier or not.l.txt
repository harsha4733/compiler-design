
%{
#include<stdio.h>
%}

%%
[\t ]+ ;
[a-zA-Z][a-zA-Z0-9]+ { printf("\n%s is IDENTIFIER", yytext);}
.+ { printf("\n%s is NOT AAN IDENTIFIER",yytext);}
\n { ECHO;}
%%

int main()
{
	while( yylex());
}

int yywrap( )
{
	return 1;
}
