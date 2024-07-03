#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
string haslo;
cout<<"Podaj slowo"<<endl;

 while(cin>>haslo)
 {

 if(haslo != "pumpernikiel")
        {


            cout<< "Podaj slowo: ";
        }

        else
        {
            cout<< "Udalo ci sie opuscic petle"<<endl;
            break;
        }
    }

    return 0;
}
