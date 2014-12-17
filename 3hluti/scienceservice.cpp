#include "scienceservice.h"

ScienceService::ScienceService() {
    sqlscientist = SqlScientist();
    sqlcomputer = SqlComputer();
}

ScienceService::~ScienceService() {
}

void ScienceService::addScientist(Scientist scientist) {
    sqlscientist.addScientist(scientist);
}

std::list<Scientist> ScienceService::getAllScientists() {
    return sqlscientist.list();
}

std::list<Scientist> ScienceService::getScientistsOrderedBy(std::string col, std::string mod) {
    return sqlscientist.list(col,mod);
}

std::list<Scientist> ScienceService::searchScientist(std::string searchTerm) {
    return sqlscientist.searchScientist(searchTerm);
}

void ScienceService::open(){
    sqlscientist.openDatabase();
}

void ScienceService::addComputer(Computer computer) {
    sqlcomputer.addComputer(computer);
}

std::list<Computer> ScienceService::getAllComputers(){
    return sqlcomputer.list();
}

std::list<Computer> ScienceService::getComputersOrderedBy(std::string col, std::string mod){
    return sqlcomputer.list(col, mod);
}

std::list<Computer>  ScienceService::searchComputer(std::string searchTerm){
   return sqlcomputer.searchComputer(searchTerm);
}

void ScienceService::connect(std::string sID, std::string cID){
    return sqlcomputer.connect(sID,cID);
}

void ScienceService::deleteComputer(std::string id){
    sqlcomputer.deleteComputer(id);
}

void ScienceService::deleteScientist(std::string id){
    sqlscientist.deleteScientist(id);
}
std::list<Computer> ScienceService::showconnection(){
    return sqlcomputer.showconnection();
}



void ScienceService::deleteconnectionS(std::string id){
    sqlscientist.deleteconnectionS(id);
}

void ScienceService::deleteconnectionC(std::string id){
    sqlcomputer.deleteconnectionC(id);
}

void ScienceService::deleteconnection(std::string cid ,std::string sid){

    sqlcomputer.deleteconnection(cid, sid);
}

