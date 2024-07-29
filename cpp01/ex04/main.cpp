#include "header.hpp"

void replace( std::string& file, size_t pos, const std::string& s1, const std::string& s2 )
{
    file.erase(pos, s1.length());
    file.insert(pos, s2);
}

int main( int ac, char **av )
{
	 if (ac != 4)
	 {
        std::cerr << "Usage: " << av[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    };
	
	std::ifstream file(av[1]);
	if (!file.is_open())
	{
        std::cerr << "Error: Could not open file " << av[1] << std::endl;
        return 1;
    }
	std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	file.close();

	std::string s1 = av[2];
	std::string s2 = av[3];

	size_t pos = 0;
	while ((pos = fileContent.find(s1, pos)) != std::string::npos)
	{
		replace(fileContent, pos, s1, s2);
		pos += s2.length();
	}
	std::string filename = std::string(av[1]) + ".replace";
	std::ofstream outFile(filename.c_str());
	if (!outFile.is_open())
	{
        std::cerr << "Error: Could not create output file " << filename << std::endl;
        return 1;
    }
	outFile << fileContent;
	outFile.close();
	    std::cout << "Replacement complete. Output written to " << filename << std::endl;
}
