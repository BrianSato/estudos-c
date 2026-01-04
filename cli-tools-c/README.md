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
- 'data/arquivo.txt'  
  Arquivo de exemplo utilizado para testes.
---

## ⚙️ Compilação

Utilizando o **GCC**:

```bash
gcc src/main.c src/comandos.c -o ferramenta
```
## Execução
 - para contar a quantidade de linhas de um arquivo:
./ferramenta data/arquivo.txt -l
 - para contar a quantidade de palavras de um arquivo:
./ferramenta data/arquivo.txt -w
 - para contar a quantidade de caracteres de um arquivo:
./ferramenta data/arquivo.txt -c

## Saida esperada:
 - Quantidade de linhas: X
 - Quantidade de palavras: X
 - Quantidade de caracteres: X

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


