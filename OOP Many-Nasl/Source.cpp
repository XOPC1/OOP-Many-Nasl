#include <iostream>
#include <string>
//транспорт-моторный(двс,электро),Мускуль(велик,самокат)-электросамокат

class Transport {
public:  
    void setVelocity(int velocity) {
        velocity_ = velocity;
    }
    void setVelocity(int weight) {
        weight_ = weight;
    }
    void setVelocity(int capacity) {
        capacity_ = capacity;
    }
    void setVelocity(int carryingCapacity) {
        carryingCapacity_ = carryingCapacity;
    }
    int getVelocity() const {
        return velocity_;
    }
    int getWeight() const {
        return weight_;
    }
    int getCapacity() const {
        return capacity_;
    }
    int getCarryingCapacity() const {
        return carryingCapacity_;
    }
private:
    int velocity_;
    int weight_;
    int capacity_;//вместительность
    int carryingCapacity_;//грузоподьемность
};

class Motor :virtual public Transport {
public:
    void setPower(int power) {
        power_ = power;
    }
    void setDimensions(int dimensions) {
        dimensions_ = dimensions;
    }
    int getPower() const{
        return power_;
    }
    int getDimensions()const {
        return dimensions_;
    }
private:
    int power_;
    int dimensions_;
};

class ICE : public Motor {
public:
    void setCountPiston(int countPiston) {
        countPiston_ = countPiston;
    }
    void setfuel(int fuel) {
        fuel_ = fuel;
    }
    void setVolumeFuel(int volumeFuel) {
        volumeFuel_ = volumeFuel;
    }
    int getCountPiston() const {
        return countPiston_;
    }
    std::string getfuel() const {
        return fuel_;
    }
    int getvolumeFuel()const {
        return volumeFuel_;
    }
private:
    int countPiston_;
    std::string fuel_;
    int volumeFuel_;
};
class Electro : public Motor {
public:

private:

};

class Muscule :virtual public Transport {
public:

private:

};

class Bike : public Muscule {
public:

private:

};

class Scooter : public Muscule {
public:

private:

};

class ElectroBike : public Electro,  public Bike {
public:

private:

};


int main()
{

}