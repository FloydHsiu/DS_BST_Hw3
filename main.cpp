#include <iostream>
#include <string>
#include <sstream>
#include "BST.h"

int main(){
	BST mpq;
	int temp, option;
	std::string input;
	bool erro;
	std::cout << "Please enter several number seperated by space and press enter to end it up.\n";
	getline( std::cin, input);
	std::stringstream ss(input);
	while( ss ){
		ss >> temp;
		mpq.Push(temp);
	}
	do{
		std::cout << "======================================================================\n";
		std::cout << "Menu:\n";
		std::cout << "\t(1)Insert a new number.\n";
		std::cout << "\t(2)Delete a number.\n";
		std::cout << "\t(3)Computerize the total of elements in subtree(inclusive).\n";
		std::cout << "\t(4)Exit\n";
		std::cout << "======================================================================\n";
		std::cout << "What do you want to do :";
		std::cin >> option;
		switch (option){
			case 1:
				std::cout << "What number you want to insert: ";
				std::cin >> temp;
				erro = mpq.Push(temp);
				if(erro){
					std::cout << "Complete.\n";
					mpq.printInLevel();
				}
				else{
					std::cout << "Error : \"Number is exist\"\n";
					mpq.printInLevel();
				}
				break;
			case 2:
				std::cout << "Delete the Max priority\n";
				erro = mpq.Pop();
				if(erro){
					std::cout << "Complete.\n";
					mpq.printInLevel();
				}
				else{
					std::cout << "Error : \"Tree is Empty!\n";
					mpq.printInLevel();
				}
				break;
			case 3:
				std::cout << "What number you want to computerize it subtree: ";
				std::cin >> temp;
				mpq.computerize(temp);
				mpq.printInLevel();
				break;
			case 4:
				mpq.printInLevel();
				std::cout << "Exit\n";
				break;
		}
	}while( option != 4);
}