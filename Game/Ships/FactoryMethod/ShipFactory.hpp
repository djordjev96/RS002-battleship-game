#ifndef SHIPFACTORY_HPP
#define SHIPFACTORY_HPP

#include "Game/Ships/IShip.hpp"
#include <QVector>
#include "Game/Board/Position.hpp"


class ShipFactory
{
public:
    ShipFactory();

    IShip* CreateShip(ShipType shipType, QVector<Position*> shipCoordinates);
};


#endif // SHIPFACTORY_HPP
