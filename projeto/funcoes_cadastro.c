#include "cadastro_alunos.h"
#include<string.h>
#include<stdio.h>

//LISTA DE FUNÇÕES UTILIZADAS EM CADASTRO_ALUNOS.C

//MENU PRINCIPAL MOSTRADO NO CONSOLE.
void menu() {
    printf("===== MENU =====\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    fflush(stdout);
}
//CADASTRAR ALUNO
void cadastrarAluno() {
    struct Aluno aluno;
    printf("Digite o nome do aluno:");
    fflush(stdout);
    fgets(aluno.nome,sizeof aluno.nome,stdin);
    aluno.nome[strcspn(aluno.nome,"\n")] = '\0';

    printf("Digite a idade do aluno: ");
    fflush(stdout);
    scanf("%d", &aluno.idade);
    getchar();

    salvarAluno(aluno);
    printf("Aluno cadastrado!\n");
}

//SALVAR CADASTRO DO ALUNO EM ARQUIVO
void salvarAluno(struct Aluno aluno) {
    FILE *arquivo = fopen("alunos.txt", "a");
    if (!arquivo) {
        printf("Erro ao abrir arquivo.\n");
        return;
	}
    fprintf(arquivo,"%s;%d\n", aluno.nome, aluno.idade);
    fclose(arquivo);
}

//LISTAR OS ALUNOS CADASTRADOS NO CONSOLE.
void listarAlunos() {
	char linha[200];
    FILE *arquivo = fopen("alunos.txt", "r");
    if (!arquivo) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("\n======LISTA DE ALUNOS======\n");
    while (fgets(linha,sizeof(linha),arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
}
//FUNÇÃO DE REMOVER ALUNO
void removerAluno(){
	FILE* arquivo;
	FILE* arq_temp;
	char linha[300];
	char del_nome[50];
	int encontrado = 0;
	struct Aluno aluno;
	//PERGUNTA AO USUÁRIO QUAL O ALUNO A SER APAGADO
	printf("Informe o nome do aluno:");
	fflush(stdout);
	fgets(del_nome,sizeof del_nome ,stdin);
	del_nome[strcspn(del_nome,"\n")] = '\0';
	//ABRE O ARQUIVO CONTENDO OS TODOS OS ALUNOS E UM ARQUIVO TEMPORÁRIO
	arquivo = fopen("alunos.txt", "r");
	arq_temp = fopen("arq_temp.txt", "a");
	//VERIFICA SE AMBOS OS ARQUIVOS EXISTEM
	if(arquivo == NULL || arq_temp == NULL){
		printf("Arquivo não encontrado");
		return;
	}
	/*
	 PERCORRE TODO O ARQUIVO ATÉ O FIM E DURANTE A LEITURA VAI COPIANDO OS DADOS NO ARQUIVO TEMPORÁRIO
	 SE O CAMPO ALUNO.NOME E DEL_ALUNO NÃO FOREM IGUAIS.
	 CASO AJA ALGUM ALUNO COM O MESMO CAMPO EM ALUNO.NOME E DEL_ALUNO, ELE IGNORA A LINHA DE CÓPIA E
	 TORNA A VARIÁVEL ENCONTRADO SENDO 1.
	 */
	while(fgets(linha,sizeof linha ,arquivo)!= NULL){//FGETS LÊ LINHA POR LINHA DO ARQUIVO
		sscanf(linha,"%49[^\n0123456789;]%d",aluno.nome,&aluno.idade);//SSCANF SEPARA OS DADOS DA LINHA
		aluno.nome[strcspn(aluno.nome,"\n")] = '\0';
	/*
	COMPARA O NOME INFORMADO COM O CAMPO ALUNO.NOME DENTRO DO ARQUIVO
	SENDO QUE != 0 SIGNIFICA NÃO IGUAIS, DENTRO DA CONDIÇÃO SE AMBOS OS CAMPOS ALUNO.NOME E DEL_ALUNO
	FOREM DIFERENTES ELE COPIA A LINHA TODA DENTRO DO ARQ_TEMP QUE SERIA O
	ARQUIVO TEMPORÁRIO.
	*/
		if(strcmp(aluno.nome, del_nome) != 0){
			fputs(linha,arq_temp);
		}else{
			encontrado = 1;
		}
	}
	/*
	DEPOIS DE TER FEITO TODA A LEITURA DO ARQUIVO, SE ENCONTRADO FOR TRUE QUE SIGNIFICA NUMERO 1,
	ELE MOTRA NA TELA DO CONSOLE "ALUNO REMOVIDO COM SUCESSO".
	SE ELE COPIOU TODO O ARQUIVO E NÃO ENCONTROU NENHUM DADO DE ALUNO.NOME SENDO IGUAL A DEL_ALUNO,
	A VARIAVEL SE ENCONTRA DA MESMA MANEIRA , SENDO 0, FAZENDO COM O QUE A VERIFICAÇÃO VÁ PARA O ELSE
	QUE MOSTRA NO CONSOLE A MENSAGEN "ALUNO NÃO ENCONTRADO".
	 */
	if(encontrado){
		printf("Nome removido com sucesso!\n");
	}else{
		printf("Nome não encontrado!\n");
	}
	/*NESTE MOMENTO TODOS OS DADOS , RETIRANDO O DADO ALUNO.NOME QUE SEJA IGUAL A DEL_ALUNO FOI
	 COPIADO PARA O ARQUIVO TEMPORÁRIO(ARQ_TEMP).
	 COMO BOA PRÁTICA, AMBOS OS ARQUIVOS SÃO FECHADOS.
	 */
	fclose(arquivo);
	fclose(arq_temp);
	//NÃO TENDO MAIS NECESSIDADE DE TER O ARQUIVO ANTIGO, NO CASO "ALUNOS.TXT" O MESMO É REMOVIDO.
	remove("alunos.txt");
	/*PARA CONTINUAR COM O MESMO NOME DE ARQUIVO, BASTA RENOMEAR O ARQUIVO TEMPORÁRO COM O NOME DO
	  ARQUIVO QUE FOR O NOME PADRÃO, NO CASO "ALUNO.TXT".
	 */
	rename("arq_temp.txt","alunos.txt");

}

