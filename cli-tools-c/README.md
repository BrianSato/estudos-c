# Ferramenta de Linha de Comando em C

Este projeto é uma **ferramenta de linha de comando (CLI)** desenvolvida em **linguagem C**, com o objetivo de praticar e consolidar conceitos fundamentais da linguagem, como:

- Leitura de arquivos
- Uso de argumentos de linha de comando (`argc` e `argv`)
- Organização de código em múltiplos arquivos (`.c` e `.h`)
- Boas práticas básicas de estruturação em C
- Criação de programas CLI simples e funcionais

---

## ⚙️ Funcionalidades

A ferramenta recebe um **arquivo de texto** e um **comando**, realizando as seguintes operações:

- `-l` → Conta o número de linhas do arquivo
- `-w` → Conta o número de palavras
- `-c` → Conta o número de caracteres
- `-a` → Exibe linhas, palavras e caracteres do arquivo
- `--help` → Exibe instruções de uso do programa

---

## 📂 Estrutura do Projeto

```text
CLI-TOOLS-C/
├── main.c        # Interpreta os argumentos e controla o fluxo do programa
├── comandos.c    # Implementação das funções de contagem
├── executa.c     # Funções responsáveis por executar os comandos
├── comandos.h    # Declarações das funções utilizadas
├── README.md
```

---

## ⚙️ Compilação

Usando GCC diretamente:
```bash
gcc main.c comandos.c executa.c -o cli-tools
```
Usando Makefile:
```bash
mingw32-make
```

---

## ▶️ Execução

Exibir ajuda:
```bash
./cli-tools --help
```
Contar Linhas:
```bash
./cli-tools teste.txt -l
```
Conta Palavras:
```bash
./cli-tools teste.txt -w
```
Conta Caracteres:
```bash
./cli-tools teste.txt -c
```
Exibir todas as contagens:
```bash
./cli-tools teste.txt -a
```

---

## 📌 Saída Esperada

Linhas: 10

Palavras: 120

Caracteres: 845

---

## 🧠 Conceitos Utilizados

- Uso de argumentos de linha de comando (`argc` e `argv`)
- Comparação de strings com `strcmp`
- Organização de código em múltiplos arquivos (`.c` e `.h`)
- Abertura e leitura de arquivos de texto
- Contagem de linhas, palavras e caracteres
- Criação de funções para modularizar o código
- Validação de argumentos para evitar uso incorreto
- Uso de Makefile para automatizar a compilação

---

🚀 Próximos Passos

 - Possíveis melhorias futuras:
 - Tratamento de erros mais robusto
 - Suporte a múltiplos comandos simultâneos
 - Otimização da leitura de arquivos
 - Expansão da ferramenta com novos comandos

---

📝 Observação

Este projeto faz parte do meu processo de aprendizado em linguagem C, com foco no desenvolvimento de ferramentas simples, uso de linha de comando e organização de código para projetos maiores.


