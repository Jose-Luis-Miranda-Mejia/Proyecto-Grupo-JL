/*aqui hare servicios de kjardineria donde hare
un costeo por m^2 y te dare la posibilidad de que me
ingeses la cantidad de m^2 a cortar y te arroje un valor final*/
#include <string>
#include <sstream>

using namespace std;


class Servicios_jardin {
  public:
    Servicios_Hidro()
    string Tipo_de_Servicio;   
    string costo;
    int tiempo;
};

int main() {
  // Creamos los atributos de los servicios
  Servicios_jardin Serv1;
  Serv1.Tipo_de_Servicio = "Lavado de coche";
  Serv1.costo = "$90";
  Serv1.tiempo = 30;

  // Create another object of Car
   Servicios_jardin Serv2;
  Serv2.Tipo_de_Servicio = "Lavado de Suv";
  Serv2.costo = "$90";
  Serv2.tiempo = 35;
  
    // Create another object of Car
   Servicios_jardin Serv3;
  Serv3.Tipo_de_Servicio = "Lavado de Pick-Up";
  Serv3.costo = "$110";
  Serv3.tiempo = 40;

     // Create another object of Car
   Servicios_jardin Serv4;
  Serv4.Tipo_de_Servicio = "Lavado de Mini-ban";
  Serv4.costo = "$120";
  Serv4.tiempo = 45;

  // Print attribute values
  cout << Serv1.Tipo_de_Servicio << " " << Serv1.costo << " " << Serv1.tiempo << "\n";
  cout << Serv2.Tipo_de_Servicio << " " << Serv2.costo << " " << Serv2.tiempo << "\n";
  cout << Serv3.Tipo_de_Servicio << " " << Serv3.costo << " " << Serv3.tiempo << "\n";
  cout << Serv4.Tipo_de_Servicio << " " << Serv4.costo << " " << Serv4.tiempo << "\n";
  return 0;
}

