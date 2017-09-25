#include <iostream>
#include <string>
using namespace std;

int main(void)
{


   int rok_urodzenia;
   int aktualny_rok =2017;

  cout<< "Podaj rok urodzenia"<<endl;
  cin>> rok_urodzenia;
  cout<<" Twoj rok urodzenia to: " <<rok_urodzenia<<endl;
  int wiek =aktualny_rok - rok_urodzenia;
  cout<<" Aktualnie masz:"<< wiek<<" "<<"lat"<<endl;


    return 0;
}
