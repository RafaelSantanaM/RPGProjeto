#ifndef PERSONAGEM_H // Este comando previne inclusões múltiplas do mesmo arquivo
#define PERSONAGEM_H // Define o símbolo PERSONAGEM_H para indicar que o arquivo foi incluído

#include <string> // Inclui a biblioteca string para usar std::string

class Personagem { // Declara a classe Personagem
    protected: // Membros protegidos, acessíveis por classes derivadas
        std::string nome; // Atributo para armazenar o nome do personagem
        int vida; // Atributo para armazenar a vida do personagem

    public: // Membros públicos, acessíveis de qualquer lugar
        Personagem(const std::string& nome, int vida); // Construtor da classe
        /*const foi usado para garantir que o objeto `std::string nome` não seja modificado.
        Já o & foi usado como uma referência ao objeto `std::string nome`. Para que 
        não haja cópias desnecessárias feitas do objeto nome.*/
        virtual ~Personagem();/* o termo virtual antes do destrutor (~Personagem()) 
        garante que, ao destruir um objeto derivado de Personagem usando um ponteiro 
        para a classe base, o destrutor correto da classe derivada será chamado.
        O símbolo ~ indica que a função é um destrutor. O destrutor é chamado 
        automaticamente quando o objeto é destruído, servindo para liberar recursos 
        ou fazer limpeza.
        */
       virtual void atacar() = 0; // Método virtual puro para ataque (classe abstrata)

       std::string getNome() const; // Método para obter o nome do personagem
       int getVida() const; // Método para obter a vida do personagem 
        };

#endif // Fim da diretiva de inclusão múltipla
/* O uso de `#ifndef` e `#endif` se dão para que não aconteçam múltiplas 
inclusões do mesmo arquivo de cabeçalho. 
`#ifndef PERSONAGEM_H` significa `se PERSONAGEM_H não foi definido`.
`#define PERSONAGEM_H` define o simbolo `PERGONAGEM_H`.
O código entre `#ifndef` e `#endif` só será incluído se PERSONAGEM_H ainda não estiver definido,*/