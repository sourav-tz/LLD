#include<iostream>
using namespace std;

//abstraction to hiding unneecessary implementation >>

class Car{
    public:
    //interface >>
    virtual void startEng()=0;
    virtual void brake()=0;



    virtual ~Car(){};

};

class SportCar:public Car{
    string model;
    string brand;
    public:

    SportCar(string model,string brand){
        this->model = model;
        this->brand = brand;
    }
    void startEng() override{
        cout<<"Car is started"<<endl;
    }
    void brake() override{
        cout<<"Car is stopped"<<endl;
    }
};

int main(){
    Car * myCar = new SportCar("a","b");
    myCar->startEng();
}