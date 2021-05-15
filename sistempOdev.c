#include "fields.h"
#include <string.h>
#include <stdio.h>

int main()
{
	IS is;
	
	char * kelime;
	char * sayi;
	//char delims[]=":,\"{}";
	
	is = new_inputstruct(".kilit");
   
	while(get_line(is)>=0){
		
	    kelime=strtok(is->fields[0],":\"}");
        sayi=strtok(is->fields[1],",\"}");
		while(kelime!=NULL&&sayi!=NULL){
			
			printf(" %s %s\n", kelime,sayi);
			
			sayi=strtok(NULL,",\"");
		kelime=strtok(NULL,":\"");
			
		}
		
		
	}

	get_line(is);
	
	
	jettison_inputstruct(is);
}
