# Ferramenta de Linha de Comando em C

Este projeto é uma **ferramenta de linha de comando (CLI)** desenvolvida em **linguagem C**, com o objetivo de praticar:

- leitura de arquivos
- uso de argumentos de linha de comando ('argc' e 'argv')
- organização de código em múltiplos arquivos ('.c' e '.h')
- boas práticas básicas de estruturação em C

## Funcionalidades

- '-l' → Conta o número de linhas do arquivo
- '-w' → Conta o número de palavras
- '-c' → Conta o número de caracteres
- '-a' → Exibe linhas, palavras e caracteres do arquivo


---

## 📂 Estrutura do Projeto

- 'main.c'  
  Responsável por interpretar os argumentos passados pelo usuário e chamar as funções adequadas.
- 'comandos.c'  
  Contém a implementação das funcionalidades da ferramenta (ex: contagem de linhas).
- 'executa.c'  
  Contém a implementação da execução das funcionalidades da ferramenta.
- 'comandos.h'  
  Cabeçalho com as declarações das funções utilizadas no projeto.
- 'data/teste.txt'  
  Arquivo de exemplo utilizado para testes.
---

## ⚙️ Compilação

Utilizando o **GCC**:

```bash
gcc main.c comandos.c executa.c -o cli-tools
```
## Execução
```bash
 - para contar a quantidade de linhas de um arquivo:
   
./cli-tools teste.txt -l
 - para contar a quantidade de palavras de um arquivo:
   
./cli-tools teste.txt -w
 - para contar a quantidade de caracteres de um arquivo:
   
./cli-tools teste.txt -c
- para mostrar todos os valores de um arquivo:
  
./cli-tools teste.txt -a
```

## Saida esperada:
 - Quantidade de linhas: X
 - Quantidade de palavras: X
 - Quantidade de caracteres: X
 - Linha:X
   Palavras:X
   Caracteres:X

---
🧠 Conceitos Utilizados

 - Argumentos de linha de comando (argc, argv)
 - Manipulação de arquivos com FILE *
 - Leitura de arquivos com fgets
 - leitura de arquivos com getc
 - leitura de arquivos com sscanf
 - Comparação de strings com strcmp
 - Separação de responsabilidades entre arquivos .c e .h
---
🚀 Próximos Passos

Funcionalidades planejadas para futuras versões:
 - Tratamento mais robusto de erros
 - Suporte a múltiplos comandos simultâneos
---
📝 Observação
Este projeto faz parte do meu processo de aprendizado em limguagem C, com foco em desenvolvimento de 
ferramentas simples e organização de código para projetos maiores.


