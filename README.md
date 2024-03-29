# 📚 SISTEMA DE CADASTRO BIBLIOTECÁRIO 📚
Projeto final de PDSII visando o sistema de cadastro de livros em uma biblioteca com variações de funcionamento (administrador e usuário).

![Capturar](https://user-images.githubusercontent.com/107284442/177864815-aff5a1d0-0366-4677-b426-63b4d12db82c.JPG)

## ⚠️ USER STORIES:

1) **Descrição: Como um usuário comum, eu quero selecionar um livro para realizar o empréstimo dele.**

   Critérios de aceitação:

   a) Visualizar títulos emprestados ao usuário;

   b) Verificar se usuário está ativo;

   c) Verificar se o livro está disponível;
   
2) **Descrição: Como um usuário administrador, eu preciso bloquear um usuário para impedi-lo de solicitar empréstimos.**

   Critérios de aceitação:
  
   a) Exibir a lista de usuários bloqueados;
  
   b) Emitir alerta de proibição de empréstimo para usuários bloqueados;
  
3) **Descrição: Como um usuário administrador, eu preciso adicionar um usuário para que ele tenha acesso à biblioteca.**

   Critérios de aceitação:
   
   a) Acessar a lista de usuários ativos;
   
   b) Exibir retorno do programa com as inscrições "Usuário adicionado";
   
4) **Descrição: Como um usuário comum, eu quero ver os livros disponíveis para poder escolher um título para empréstimo.**

   Critérios de aceitação:
   
   a) Exibir a lista de livros disponíveis;
   
   b) Exibir se a disponibilidade (ou indisponibilidade) do livro;
   
   c) Solicitar confirmação de empréstimo ao usuário;
   
5) **Descrição: Como um novo livro, eu preciso ser cadastrado no sistema para ser armazenado na biblioteca.**

   Critérios de aceitação:
   
   a) Ver a lista de livros disponíveis;
   
   b) Exibir retorno do programa com os dizeres "Título adicionado com sucesso!"
   
   c) Impedir que o título seja cadastrado mais de uma vez no sistema;
   
 6) **Descrição: Como um usuário comum, eu quero devolver um livro para ser desbloqueado da biblioteca.**
     
    Critérios de aceitação:
    
    a) Desbloquear o acesso do usuário;
    
    b) Exibiir lista de usuários bloqueados;
    
    c) Exibir aviso de "Usuário desbloqueado com sucesso!"
    
    d) Exibir lista de livros devolvidos.
    
 ## 💻 QUERO FAZER USO DO SISTEMA, POR ONDE COMEÇAR❓
 *Para fazer uso do repositório, você precisa preencher as requisições abaixo:*
 
 ### Requisitos iniciais:
 1) Possuir um compilador C++ instalado (recomendamos o Visual Studio Code);
 2) Ter um sistema operacional LINUX ou uma interface com este.
 3) Instalar a extensão "cmake" no seu compilador;
 4) Possuir o git instalado e devidamente logado na IDE em questão;
 5) Possuir a IDE configurada para uso em WSL;

*Uma vez que os requisitos iniciais foram preenchidos, partiremos para a instalação do sistema:*
### Instalação:
*Faça os seguintes procedimentos no terminal da sua IDE (considerando o uso em WSL):*

1) Clone o repositório:

   ```sh
   git clone https://github.com/filipefsf/cadastrobiblioteca.git
   ```
   
2) Acesse o diretório do repositório:

   ```sh
   cd cadastrobiblioteca
   ```

3) Execute o comando "make":

   ```sh
   make
   ```
   
4) Para rodar o programa, digite o seguinte comando:

   ```sh
   ./main
   ```
  

  
## Com o sistema aberto 👩🏽‍💻
![image](https://user-images.githubusercontent.com/83346689/179424051-a79e3622-b52f-4d85-9d00-b4fbe99c7987.png)

1) Utilize o console na maior resolução possivel para ter uma melhor experiencia

2) Utilize os Usuarios existentes no banco para seu primeiro acesso!


| Nome  |  Perfil  | Matricula |
| ------------------- | ------------------- | ------------------- |
|  Israel Jhonatas |  Administrador |  2270129 |
|  STEVE ROGERS |  Usuario |  001 |
|  TONY STARK |  Administrador |  002 |
|  BRUCE BANNER |  Usuario |  003 |
|  Thor |  Usuario |  004 |
| NATASHA ROMANOFF | Usuario |  005 |
| CLINT BARTON |  Usuario |  006 |
|  STEPHEN STRANGE |  Usuario |  007 |
|  ROCKET |  Usuario |  008 |
|  CAROL DANVERS |  Usuario |  009 |
|  SCOTT LANG |  Usuario |  010 |
|  Wanda Maximoff |  Usuario |  W01 |

