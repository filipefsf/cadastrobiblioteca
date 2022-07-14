#include "../include/User.hpp"
#include "../include/Usuario.hpp"
#include "../include/Administrador.hpp"
#include"../include/Operacoes.hpp"
#include<fstream>
#include <iterator>

User::User(string nome, string matricula, EPerfil perfil, bool active){
    _nome = nome;
    _matricula = matricula;
    _perfil = perfil;
    _active = active;
}

User::User(string nome, string matricula, EPerfil perfil){
    _nome = nome;
    _matricula = matricula;
    _perfil = perfil;
    _active = true;

}

vector<User*> User::GetAllUsers(){
    vector<User*> usuariosSalvos;
    vector<Livro*> livrosSalvos;
    string conteudo = "";
    ifstream arq("Usuarios.txt");
    vector<string> value;
    if (arq.is_open())
    {
        while (getline(arq, conteudo)){
          Operacoes::split(conteudo.begin(),conteudo.end(),',', back_inserter(value));   
          cout << value.size(); 
          if (value.size() < 5)
          {
            Administrador* admin = new Administrador(value[0],value[1],static_cast<EPerfil>(1),value[3]=="1");
            usuariosSalvos.push_back(admin);
          } else {
            for (long unsigned int o = 4; o < value.size(); o++)
            {
                auto lv = Livro::GetById(stoi(value[o]));
                Livro* livro = new Livro(lv->GetId(),lv->GetName(), lv->GetGenre(),lv->GetStats());                        
                livrosSalvos.push_back(livro);                
            }
            Usuario* user = new Usuario(value[0],value[1],static_cast<EPerfil>(2),value[3]=="1");
            user->_meusLivros = livrosSalvos;
            usuariosSalvos.push_back(user);
          }
          livrosSalvos.clear();
          value.clear();
        }
        arq.close();
    }   
    return usuariosSalvos;
}

string User::GetStatusUser(){
    return _active == true? "1" : "0";
}

string User::GetMatricula(){
  return _matricula;
}

