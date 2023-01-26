%{
int vow_count=0;
int const_count=0;
%}

%%

[aeiouAEIOU] {vow_count++;}

[a-zA-Z] {const_count++;}

%%

int yywrap(){}
int main()
{
printf("enter the string of vowels and consonents:");
yylex();
printf("number of vowels are:%d\n",vow_count);
printf("number of consonaents are:%d\n",const_count);
return 0;
}
