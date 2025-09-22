<img width="256" height="256" alt="image" src="https://github.com/user-attachments/assets/b2912544-fd12-47f8-b9dc-0b657f22babe" />

# Exercícios em C e um jogo de super Trunfo

## Informações sobre o repositório
**IDE/Editor de código:** ![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white) <br>
**Linguagem-Programação:** ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) <br>
**Versão:** 1.0 <br>
**Data versionamento:** 22/09/2025 <br> 
**Descrição do repositório:** Aqui neste repositório você irá encontrar duas pastas, a primeira é referente a uma lista de exercícios na linguagem C abordando os fundamentos da linguagem e suas estruturas. 
                              E na segunda pasta o código da primeira versão de um jogo referente ao super trunfo, ainda em sua primeira versão sem nenhuma validação de dados, apenas manipulação de variavéis e seus valores.
                              nas próximas versões haverão lógica de validação de dados e comparação de valores.

| Estruturas abordadas da linguagem C |
|-------------------------------------|
|Estrutura sequencial|
|Estrutura condicional|

# Requisitos para começar a brincadeira com a linguagem C

**Link para download do compilador:** https://www.mingw-w64.org/downloads/ -> após acessar esse site, selecione a seção **Pre-Built Toolchains**
### Selecione a opção na imagem abaixo: <br>
<img width="843" height="86" alt="image" src="https://github.com/user-attachments/assets/fcbaa770-f8e5-4ebb-bcbe-5fc8bcb59d73" />

### Próximo passo -> com o terminal do MinGW aberto, copie e execute o seguinte comando: <br>
- pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain <br>
**OBS.: irá aparecer algumas opções, apenas aperter o *ENTER* que é a opção padrão (Default)**

### Próximo passo  
-> Copiar esse caminho (C:\msys64\ucrt64\bin) que você instalou no seu computador, vá em variáveis de ambiente e inclue tal caminho na pasta *path* 

## E por fim para checar as versões e se o compilador foi instalado com sucesso
**gcc --version** <br>
**g++ --version** <br>
**gdb --version** <br>
