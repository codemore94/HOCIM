#include <ctype.h>
#include <stdio.h>

int lineno;
char* progname;
void warning(char* s, char* t){
  //fprintf("%s,%s",(FILE *__restrict)progname,(FILE*__restrict)t);
	if(t){ //C-style error checking, pointer t to char is NULL-->FALSE, otherwise true
	  //fprintf("%s",t);
	}		
	//fprintf(stderr,"%d\n",lineno);
			//C-style error checking, pointer t to char is NULL-->FALSE, otherwise true
}

void yyparse(){
	int lineno; //check if defined in correct place
	int c; //check if the type should be char

	if((c= getchar()) ==' ' || c== '\t'){
	
 	} //check if input is either empty or tab
	
	if(c == EOF){
		return 0;
	} //check if input is End-Of-File

	if(c == ' . '  || isdigit(c)){
		ungetc(c,stdin);
	} //check if input is either point or a digit 

		
	if(c == ' \n '){
		lineno++;
	} //check if input is either point or a digit 
	return c;
}

void yyerror(char* s){
	warning(s,(char*)0);
}

int main(int argc, char* argv[]){
    progname=argv[0];
    yyparse();
}
