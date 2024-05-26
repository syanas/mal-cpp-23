#include <iostream>
#include <string>

namespace
{

std::string read(const std::string & line)
{
	return line;
}

std::string eval(const std::string & line)
{
	return line;
}

std::string print(const std::string & line)
{
	return line;
}

std::string rep(const std::string & line)
{
	return print(eval(read(line)));
}

} // namespace



int main() {
	const std::string prompt = "user> ";
	std::string user_input{};

	while(!std::cin.eof())
	{
		std::cout << prompt;
		std::getline(std::cin, user_input);
		std::cout << rep(user_input) << std::endl;
	}

	return 0;
}
