 #include <iostream>
 using namespace std;
 
 class calcu{
    private: 
        int num1, num2;
    public:
        calcu(int n1, int n2);
        int sumar();
        int restar();
        void dividir(int n1,int n2);
        int multiplicar();
 };

calcu::calcu(int n1, int n2){
    num2=n2;
    num1=n1;
}
 int calcu::sumar(){
    return num1+num2;
 }
 int calcu::restar(){
    return num1-num2;
 }
 void calcu::dividir(int n1, int n2){

    try{
        if (n1==0){
            throw invalid_argument ("división por cero");
        }
        else {
            cout<< n1/n2;
        }
    }
    catch (const invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
    }
 }


 int calcu::multiplicar(){
    return num1*num2;
 }
