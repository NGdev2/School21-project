#ifndef CONVERS_HPP
# define CONVERS_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <climits>

class Convers
{
	public:
		Convers();
		Convers(std::string str);
		Convers(const Convers &x);
		Convers &operator=(const Convers &x);
		~Convers();
		std::string getStr() const;
		void printChar();
		void printInt();
		void printFloat();
		void printDouble();
	private:
		std::string _str;
};

#endif
