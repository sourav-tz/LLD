#include<iostream>
using namespace std;

class car{
    private:
    int totalTravaled;
    float speed;
    int geerLevel;
    void setSpeed(float speed){
        this->speed = speed;
        this->geerLevel = 0;
    }
    void setTravel(){
        if(geerLevel==1)totalTravaled+=1;
        if(geerLevel==2)totalTravaled+=3;
        if(geerLevel==3)totalTravaled+=5;
        if(geerLevel==4)totalTravaled+=10;
    }

    public:
    car(){
        this->speed = 0;
        this->totalTravaled = 0;
    }
    
    void getTotal(){
        cout<<"totalTraveled < "<<totalTravaled<<" KM >"<<endl;
    }

    void start(){
        cout<<"Broom Broom...Car is neutral"<<endl;
    }

    void geerUp(){
        this->geerLevel++;
        setTravel();
        cout<<"Geer is "<<geerLevel<<endl;
    }

    void geerDown(){
        if(geerLevel>0){
            this->geerLevel--;
            setTravel();
        }
        if(geerLevel == 0)cout<<"Car is neutral"<<endl;
        else cout<<"Geer is "<<geerLevel<<endl;
    }

};


int main(){
    car* audi = new car();
    audi->start();
    audi->geerDown();
    audi->getTotal();
    audi->geerUp();
    audi->geerUp();
    audi->geerUp();
    audi->geerDown();
    audi->getTotal();
}