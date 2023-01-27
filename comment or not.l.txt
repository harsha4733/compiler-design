%{
#include<stdio.h>
%}

/* Rules Section */
%%
[\t ]+ ;

#.* { printf("\n%s is COMMENT", yytext);}
.+ { printf("\n %s is NOT A COMMENT",yytext);}
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
