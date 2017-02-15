#include "inventory.h"
#include <iostream>

using namespace std;

void Inventory::addItem(std::string object, int val){
for(map<std::string, int>::iterator it = begin();
    it != end(); ++it)
{
    if(it->first == object){
      it->second = it->second + val;
      return;
    }
}
   insert(std::pair<std::string,int>(object, val));
}

void Inventory::removeItem(std::string object){
   erase(object);
}

int Inventory::getNumItems(std::string object){
   return find(object)->second;
}

void Inventory::printAllItems(){
   for(map<std::string, int>::const_iterator it = begin();
    it != end(); ++it)
{
    std::cout << it->first << " " << it->second << std::endl;
}
}

Inventory::Inventory(){}
