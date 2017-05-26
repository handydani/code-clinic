//hello world

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

bool readFile(std::string name);

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    std::cout << "Please enter the year, month, and date " << std::endl;
    std::cin >> year;
    std::cin >> month;
    std::cin >> day;
    std::string fileName = "Environmental_Data_Deep_Moor_";


    switch(year)
    {
        case 2012:
            fileName = "Environmental_Data_Deep_Moor_2012.txt";
            std::cout <<"test"<<std::endl;
            break;
        case 2013:
            fileName = "Environmental_Data_Deep_Moor_2013.txt";
            break;
        case 2014:
            fileName = "Environmental_Data_Deep_Moor_2014.txt";
            break;
        case 2015:
            fileName = "Environmental_Data_Deep_Moor_2015.txt";
            break;
        default:
            std::cout << "failed to find file"<< std::endl;
            break;
    }


	if(!readFile(fileName))
	{
        std::cout << "failed to read file correctly" << std::endl;
        return 1;
	}

    std::ifstream file(fileName);
    std::cout << "everything went okay" <<std::endl;





    file.close();
    return 0;
}
bool readFile(std::string name)
{
  bool doesFileExist = false;
  std::ifstream file(name);

  if(file)
  {
    doesFileExist = true;
  }
  file.close();
  return doesFileExist;
}
