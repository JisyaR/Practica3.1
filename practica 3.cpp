#include <iostream>
using namespace std;

int main(){
    
float num ;
float num2;
float num3;
/*Determine cual de los tres numeros es mayor*/
cout << "Ingrese un numero ";
cin >> num;
cout << "Ingrese un segundo numero ";
cin >> num2;
cout << "Ingrese un tercer numero ";
cin >> num3;
   if (num>num2 and num>num3){
        cout<< "El numero mayor es "<< num<<endl;
        
    } else if (num<num2 and num<num3)
    {
        cout << "El numero menor es "<<num<<endl;
    }else if (num2>num and num2 >num3)
    {
        cout <<"El numero mayor es "<<num2<<endl;
    }else if (num2<num and num2<num3)
    {
         cout << "El numero menor es "<<num2<<endl;
    }else if (num3>num and num3>num2)
    {
    cout<< "El numero mayor es "<< num3<<endl;
    }else
    {
        cout<<"el numero menor es "<<num3<<endl;

    }
    
    

   

    return 0;
}
