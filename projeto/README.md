# Sistema de Cadastro de Alunos (CRUD em C)

Este projeto é um sistema simples de cadastro de alunos desenvolvido em linguagem C, utilizando arquivos de texto para persistência de dados.

O objetivo principal é praticar conceitos fundamentais da linguagem C, como:
- structs
- manipulação de arquivos
- ponteiros
- modularização com '.h'e '.c'
- lógica de CRUD (Create, Read, Update, Delete)
----------------------------------------------------------------------------------------------
## 📌 Funcionalidades

O sistema permite:

- 📥 **Cadastrar alunos**
- 📄 **Listar alunos cadastrados**
- ✏️ **Editar dados de um aluno**
- 🗑️ **Remover um aluno**
- 💾 **Persistir os dados em arquivo de texto**

Cada aluno possui:
- Nome
- Idade
----------------------------------------------------------------------------------------------
## 🗂️ Estrutura do projeto

- 'main.c'  
  Controla o fluxo principal do programa.

- 'menu.c' 
  Responsável por exibir o menu e opções ao usuário.

- 'cadastro_aluno.h / funcoes_cadastro.c'  
  Contém a struct 'Aluno' e as funções de cadastro, listagem, edição e remoção.
----------------------------------------------------------------------------------------------
## Arquivo de dados

O arquivo `alunos.txt` é criado automaticamente pelo programa no primeiro cadastro de aluno.
Não é necessário criá-lo manualmente.
----------------------------------------------------------------------------------------------
## 💾 Formato do arquivo

Os dados são armazenados no arquivo 'alunos.txt', **uma linha por aluno**, no seguinte formato:
Exemplo:
Joana Dark;22
Victor Santos;20

Esse formato foi escolhido para:
- facilitar leitura e escrita
- permitir edição e remoção de registros
- evitar problemas com nomes que possuem espaços
------------------------------------------------------------------------------------------
## ▶️ Como executar

1. Compile os arquivos '.c':
```bash
gcc main_cadatro_aluno.c funcoes_cadastro.c menu.c -o cadastro
```
2. Execute o Programa:
   ./cadastro
3. Utilize o menu para interagir com o Sistema
-------------------------------------------------------------------------------------------
🧠 Conceitos praticados

- Durante o desenvolvimento deste projeto, foram praticados:
- Leitura e escrita em arquivos (fopen, fgets, fprintf)
- Uso de arquivo temporário para edição e remoção de dados
- Comparação de strings (strcmp)
- Manipulação segura de strings (fgets, strcspn)
- Separação de responsabilidades (modularização)
- Organização de projeto em C
--------------------------------------------------------------------------------------------
📚 Observações

Este projeto foi desenvolvido com foco em aprendizado.
Comentários foram mantidos no código para documentar o raciocínio e as decisões tomadas durante a implementação.
---------------------------------------------------------------------------------------------
👤 Autor

Projeto desenvolvido por Brian Sato como parte da jornada de aprendizado em programação em C.
