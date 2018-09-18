/*gcc -Wall -o teste grava_structs.c teste.c*/

  /* Mariana Medeiros Ruddy Santos	1611397	3wb */
  /* Nome_do_Aluno	Matricula	Turma */

#include <stdio.h>
#include <string.h>

int grava_structs (int nstructs, void *valores, char *campos, char ord, char *arquivo){
	int tam_campos = strlen(campos);  
	valores = fopen(arquivo, "w");
	if(!valores){
		printf("Erro na abertura do arquivo\n");
		return -1;
	}
	fprintf(valores, "%s %c %d", nstructs, ord, tam_campos);
	for(int i = 0; i < tam_campos; i++){
		
	}
	
	
	fclose(valores);
	return 0;
}

void dump_structs (char *arquivo){

}


