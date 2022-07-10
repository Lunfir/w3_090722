#include "Gun.h"


Gun::Gun(const std::string& model, int capacity)
{
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}

Gun::~Gun()
{

}

int Gun::getAmount() const
{
    return this->amount;
}

int Gun::getCapacity() const
{
    return this->capacity;
}

bool Gun::ready() const
{
    return this->isReady;
}

const std::string& Gun::getModel() const
{
    return this->model;
}

int Gun::getTotalShots() const
{
    return this->totalShots;
}

void Gun::prepare()
{
    isReady = !isReady;
}

void Gun::reload()
{
    amount = capacity;
}

void Gun::shoot()
{
    if (!this->isReady)
    {
        throw NotReady();
    }

    if (amount == 0)
    {
        throw OutOfRounds();
    }

    std::cout << "Bang!" << std::endl;
    this->totalShots += 1;
    this->amount -= 1;

    // if (this->amount == 0)
    // {
    //     this->prepare();
    // }
}

std::ostream& operator<<(std::ostream& out, const Gun& gun)
{
    out     << "model: " << gun.getModel() << std::endl
            << "capacity: " << gun.getCapacity() << std::endl
            << "amount: " << gun.getAmount() << std::endl
            << "shots: " << gun.getTotalShots() << std::endl
            << "ready: " << (gun.ready() ? "true" : "false") << std::endl
            << std::endl;

    return out;
}
