#include <iostream>
#include <vector>
#include <map>




template<class T>
class Shape {
public:
	Shape(T width, T height) : _width(width), _height(height) { // конструктор + инициализация
		std::cout << "Constructor Shape()" << std::endl;
	}
	T calculateSquare() { //функция площади Shape
		return _width * _height;
	} 
private:
	T _width;
	T _height;
};

// наследуем мы public u protected, private наслоедовать нельзя

template <class T>
class Square : public Shape<T> {  //наследование шаблонного класса ( наследование публично - наследует public в public ) 
	public:                                                                // публичные методы Shape ( родителя ) будут публичными у наследника ( Square )
	Square(T width, T height) : Shape<T>(width, height), _width(width) { // вызывает конструктов класса Shape из класса Shape
		std::cout << "Constructor Square()" << std::endl;
	}                                                                     // здесь значение по умолчанию (  height = width ) + 

	T calculateSquare() { // здест мы переопределили функцию. Т.е. если мы у Shape вызываем функцию calculateSquare, то она вызывается с папаметрами  width * _width
		return _width * _width;
	}

	/*
	* protected:
	* наследование протектед это как приватный доступ, но его можно наследовать. 
	* */
private:
	T _width;
	T _height;
};





// Пачки параметров и свертки
// Variadic Template - вариабельные шаблоны
template<class...Args>
class myClass {
public:
	void(Args... arg);


	//способы вызова
	//f(); // OK, пачка не содержит аргументов
	//f(1); // OK, пачка  содержит один  аргумент: int
	//f(2); // OK, пачка  содержит аргументов: int, double

};



// патерны раскрытия
template<typename ...Types> void f(Types...args);








int main() {

	// Решение задачи с телефонной книгой ( PhoneBook)
	/*class Subscriber {
		Subscriber(const std::string& name, int number, const std::string& info) : _name(name), _number(number), _info(info) {}


	private:
		std::string _name;
		int _number;
		std::string _info;
	}

	class PhoneBook


	puvlic: 
	void printAllNumbers() {
	for*size_t = 0; i < subs.size();i++ {
	std::cout << subs[i].getNumber() << std::endl;
	}

	void addSubscriber ( const Subscriber &sub) {
	subs.push_back(sub);
 
private: std::vector<Subscriber> _ subs;}


int main() {
Subscriber ("Alex", 3434, "good person" ) S1;
PhoneBook p1;
p1.addSubscriber(S1);
}*/

	
	//Наследование шаблонных функций


	Square<int> s(2,2);
	std::cout << s.calculateSquare() << std::endl;
	


	// Пачки параметров и свертки





}