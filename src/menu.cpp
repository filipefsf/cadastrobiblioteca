#include "../include/menu.hpp"

#include <algorithm>

void menu::Titulo(){

cout<<" ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  " << endl;
cout<<"████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗ " << endl;
cout<<"╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝ " << endl;
cout<<"████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗ " << endl;
cout<<"╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝ " << endl;
cout<<" ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  " << endl;
cout<<" ██╗ ██╗     ███████╗██╗███████╗████████╗     ██████╗ █████╗ ██████╗  █████╗ ███████╗████████╗██████╗  ██████╗         ██╗ ██╗ " << endl;
cout<<"████████╗    ██╔════╝██║██╔════╝╚══██╔══╝    ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝╚══██╔══╝██╔══██╗██╔═══██╗       ████████╗" << endl;
cout<<"╚██╔═██╔╝    ███████╗██║███████╗   ██║       ██║     ███████║██║  ██║███████║███████╗   ██║   ██████╔╝██║   ██║       ╚██╔═██╔╝" << endl;
cout<<"████████╗    ╚════██║██║╚════██║   ██║       ██║     ██╔══██║██║  ██║██╔══██║╚════██║   ██║   ██╔══██╗██║   ██║       ████████╗" << endl;
cout<<"╚██╔═██╔╝    ███████║██║███████║   ██║██╗    ╚██████╗██║  ██║██████╔╝██║  ██║███████║   ██║   ██║  ██║╚██████╔╝       ╚██╔═██╔╝" << endl;
cout<<" ╚═╝ ╚═╝     ╚══════╝╚═╝╚══════╝   ╚═╝╚═╝     ╚═════╝╚═╝  ╚═╝╚═════╝ ╚═╝  ╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝         ╚═╝ ╚═╝ " << endl;
cout<<" ██╗ ██╗     ██████╗ ███████╗    ██████╗ ██╗██████╗ ██╗     ██╗ ██████╗ ████████╗███████╗ ██████╗ █████╗               ██╗ ██╗ " << endl;
cout<<"████████╗    ██╔══██╗██╔════╝    ██╔══██╗██║██╔══██╗██║     ██║██╔═══██╗╚══██╔══╝██╔════╝██╔════╝██╔══██╗             ████████╗" << endl;
cout<<"╚██╔═██╔╝    ██║  ██║█████╗      ██████╔╝██║██████╔╝██║     ██║██║   ██║   ██║   █████╗  ██║     ███████║             ╚██╔═██╔╝" << endl;
cout<<"████████╗    ██║  ██║██╔══╝      ██╔══██╗██║██╔══██╗██║     ██║██║   ██║   ██║   ██╔══╝  ██║     ██╔══██║             ████████╗" << endl;
cout<<"╚██╔═██╔╝    ██████╔╝███████╗    ██████╔╝██║██████╔╝███████╗██║╚██████╔╝   ██║   ███████╗╚██████╗██║  ██║             ╚██╔═██╔╝" << endl;
cout<<" ╚═╝ ╚═╝     ╚═════╝ ╚══════╝    ╚═════╝ ╚═╝╚═════╝ ╚══════╝╚═╝ ╚═════╝    ╚═╝   ╚══════╝ ╚═════╝╚═╝  ╚═╝              ╚═╝ ╚═╝ " << endl;
cout<<" ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  ██╗ ██╗  " << endl;
cout<<"████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗ " << endl;
cout<<"╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝ " << endl;
cout<<"████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗████████╗ " << endl;
cout<<"╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝╚██╔═██╔╝ " << endl;
cout<<" ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝" << endl;    
}

void menu::LimparTela()
{
     system("clear||cls");
     return;
}

void menu::SaltarLinhas( int linhas)
{
    for(int i = 0; i< linhas; i++){
        cout << endl;
    }
}

bool menu::TelaPrincipal()
{
    string resposta="";
    std::vector<string> principal = { "0", "1", "9" };
    cout << "Selecione uma das opcoes a seguir:" << endl;
    SaltarLinhas(3);
    cout<< "[0] Login como Administrador" << endl;
    cout<< "[1] Login como Usuario" << endl;
    cout<< "[9] fechar programa" << endl;

    cin >> resposta;
    
    if(resposta == "9")
        return false;

    if(std::find(principal.begin(), principal.end(), resposta) == principal.end()){
        LimparTela();
        cout << "*************opcao invalida*********************" << endl;
        TelaPrincipal();
    }

    if(resposta == "1")
        UsuarioComun();
    else
        Admin();

    return true;
}

bool menu::Run(){

    if(!TelaPrincipal())
        return false;
        
    return true;
}

bool menu::UsuarioComun()
{
    if(!GetUsuario())
        return false;
}

bool menu::GetUsuario()
{
    string matricula;
    LimparTela();
    cout << "Digite o numero da sua matricula cadastrada" << endl;
    SaltarLinhas(3);
    cin >> matricula;
    
}
