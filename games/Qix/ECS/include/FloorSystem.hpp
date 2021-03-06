/*
** EPITECH PROJECT, 2023
** OOP_arcade_2019
** File description:
** Created by jfournier,
*/
#ifndef OOP_ARCADE_2019_FLOORSYSTEM_HPP
#define OOP_ARCADE_2019_FLOORSYSTEM_HPP

#include "ECSEntity.hpp"
#include "Components.hpp"
#include "Storage.hpp"

class FloorSystem {
    public:
    FloorSystem();
    ~FloorSystem();
    void update(Storage<Position> *positionStorage, Storage<Velocity> *velocityStorage, Storage<Collider> *colliderStorage, Storage<Walkable> *walkableStorage) const;
    protected:
    private:
    void process(Storage<Position> *positionStorage, Storage<Velocity> *velocityStorage, Storage<Collider> *colliderStorage, Storage<Walkable> *walkableStorage, unsigned long long int entityID) const;
};
#endif //OOP_ARCADE_2019_FLOORSYSTEM_HPP
