#include <iostream>
#include <cstring>
using namespace std;

class peyzaj {
private:
double kenar1;
public:
void degerata(double kenar);
float alan();
float cevre();
};
void peyzaj::degerata(double kenar){
kenar1=kenar;
}
float peyzaj::alan(){
return kenar1*kenar1;
}

float peyzaj::cevre(){
return kenar1*4;
}

int main(){
    double kenar;
    cout<<"Kenar Uzunlugunu Giriniz: ";
    cin>>kenar;
peyzaj peyzaj1;
peyzaj1.degerata(kenar);
cout<<"Karenin Alani: "<<peyzaj1.alan()<<endl;
cout<<"Karenin Cevresi: "<<peyzaj1.cevre()<<endl;

}
