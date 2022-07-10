#pragma once

#include <iostream>

// exception
class OutOfRounds {};
class NotReady {};

class Gun {
public:
    Gun(const std::string& model="Beretta", int capacity=8);
    ~Gun(); // destructor

    int getAmount() const;
    int getCapacity() const;
    bool ready() const;
    const std::string& getModel() const;
    int getTotalShots() const;

    void prepare();
    void reload();
    void shoot();

private:
    int amount;
    int capacity;
    bool isReady;
    std::string model;
    int totalShots;
};

std::ostream& operator<<(std::ostream& out, const Gun& gun);
