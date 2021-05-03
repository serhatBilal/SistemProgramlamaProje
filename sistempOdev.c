
#include "fields.h"
#include <string.h>

int main()
{
	IS is;
	
	is = new_inputstruct(".kilit");
	
	while(get_line(is) >=0){
		for(int i=0;i<is->NF;i++)
            printf(" %s\n", is->fields[i]);

        
	}

	get_line(is);
	printf("İkinci kelime : %s\n",is->fields[1]);
	
	jettison_inputstruct(is);
}
