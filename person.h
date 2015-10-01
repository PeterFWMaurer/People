// person.h
//

#include <string>

class Person
{
public:
  Person(std::string firstname, std::string lastname);
  virtual ~Person(){};

private:
  std::string _first_name;
  std::string _last_name;
};
