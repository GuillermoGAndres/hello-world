/*
 * libstdc++-
 * What is libstdc++? 
 * The GNU Standard C++ Library v3 is an ongoing project to implement the ISO 14882 C++ Standard Library.
 * All of the standard classes and functions from C++98/C++03, C++11 and C++14 (such as string, vector<>, iostreams, algorithms
 * etc.) are freely available and attempt to be fully compliant. Work is ongoing to complete support for the current revision 
 * of the ISO C++ Standard.
 * libstdc++-devel
 * DEVEL stands for Developer file.
 */

#include <iostream>
using namespace std;
/*
 * argc - Numero total de parametros
 * argv - Contenido de los parametros, es un vector de de punteros que apuntar a una caracter,
 * que a su vez puede ser una (cadena de carateres) argv[0] -> ['M']['a']['r']['i']['o']
 */

int main(int argc, char* argv[]){
    
    while( !(argc > 1) ){
        cout << "You must input your name like parameter for excute command." << endl;
        return  1;
    }

    cout << "Hello world :D " << endl;
    cout << "and hello " << argv[1] << endl;

    return 0;
}

