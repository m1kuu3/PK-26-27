
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    int wybor;
    cout << "Wybierz precyzję:"<< endl;
    cout << "[1] pojedyncza precyzja"<< endl;
    cout << "[2] podwójna precyzja" <<endl;
    cout << "Wybór: " << endl;
    cin >> wybor;

    if (wybor == 1){
          float a;
          float b;
          cout << "Podaj a: "<<endl;
          cin >>a;
          cout << "Podaj b: "<<endl;
          cin>> b;

          cout << fixed << setprecision(12) << "Suma: "<< a+b <<endl;
          cout << fixed << setprecision(12) << "Różnica: "<< a-b <<endl;
          cout << fixed << setprecision(12) << "Iloczyn: "<< a*b <<endl;
          cout << fixed << setprecision(12) << "Iloraz: "<< a/b <<endl;



    }
    else if(wybor==2){
        double a;
          double b;
          cout << "Podaj a: "<<endl;
          cin>> a;
          cout << "Podaj b: "<<endl;
          cin >>b;

          cout << fixed << setprecision(12) << "Suma: "<< a+b <<endl;
          cout << fixed << setprecision(12) << "Różnica: "<< a-b <<endl;
          cout << fixed << setprecision(12) << "Iloczyn: "<< a*b <<endl;
          cout << fixed << setprecision(12) << "Iloraz: "<< a/b <<endl;
    }
    else {
        cout<<"Niepoprawny wybór"<<endl;
    }
  


   

    return 0;

}

