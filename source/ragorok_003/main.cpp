#include<iostream>
#include "boost/multi_array.hpp" //for entity inventory
#include "common_inclusions.h"

int main(void) {
    /*
    file_io * File = new file_io("test.txt");                   //creates object and handles save file "test.txt"

    File->file_load();                                          //first load file to use
    File->file_find("player", "", '0');                         //find the appropriate line
    File->file_write("player", '!', 'y', 0, 0, 0, 0, 0, 0, 0);  //zero out stats
    File->file_write("player", 'a', 'n', 255);                  //sets attack to 255
    std::cout << "Values At 0: " << File->values.at(1);         //returns location values is an vector storing temp stats
    File->values.clear();                                       //clears stats for next usage
    File->file_load();            //                              //loads another instance of test.txt
    entity * Entityzzz = new entity("hello");
    delete File;                                                //destructs the object
*/


    overlord Overlord;  //For global items ; must
    entity * hellos = new entity("player");
    entity * TEST = new entity("test000");

    TEST->add_currency(1000, 100, 100);
    TEST->update_curreny();

    Overlord.new_entity(hellos); //add hellos entity to vector
    Overlord.entity_list.at(0).set_attack(99); //set attack on entity 0 in vector
    Overlord.new_item(100, "swordss", 20, false, 100, 100, 100, 100, 100, 100, 100);
    std::cout << "name: " << Overlord.return_item_name(100, overlord::name) << std::endl;
    std::cout << "attack: " << Overlord.return_item_value(100, overlord::attack) << std::endl;
    std::cout << Overlord.entity_list.at(0).rtrn_attack(); //return 0's attack





return 0;

}
