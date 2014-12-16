#ifndef SQLCOMPUTER_H
#define SQLCOMPUTER_H
#include <computer.h>
#include <QtSql>
#include <stdexcept>

class SqlComputer
{
public:
    SqlComputer();
    std::list<Computer> list();
    std::list<Computer> list(std::string col, std::string mod);
    void addComputer(Computer c);
    std::list<Computer> searchComputer(std::string searchTerm);
    void connect(std::string scientist, std::string computer);
    void deleteComputer(std::string id);
    std::list<Computer> showconnection();


};
#endif // SQLCOMPUTER_H
