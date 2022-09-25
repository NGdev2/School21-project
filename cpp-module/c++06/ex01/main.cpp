#include <iostream>

struct Data
{
	std::string name;
};

uintptr_t serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main()
{
	Data data = {"apple"};
	uintptr_t test;
	Data *data1;

	std::cout << "\n------------ VALUE ----------------" << std::endl;
	std::cout << "Value: " << data.name << " | Adress: " << &data << std::endl;

	test = serialize(&data);

	std::cout << "------------ SERIALIZE ----------------" << std::endl;
	std::cout << "Adress(uintptr): " << test << std::endl;

	std::cout << "-------------DESERIALIZE-----------------" << std::endl;
	data1 = deserialize(test);
	std::cout << "Value: " << data1->name << " | Adress: " << data1 << "\n" << std::endl;

}
