#include <iostream>
#include <fstream>


int main(){
	
	
	
	
	//startup	
	std::string array [] = {"Q", "q"," W", "w", "E", "e", "R", "r", "T", "t", "Y", "y", "U", "u", "I", "i", "O", "o", "P", "p", "A", "a", "S", "s", "D", "d", "F", "f", "G", "g", "H", "h", "J", "j", "K", "k", "L", "l", "Z", "z", "X", "x", "C", "c", "V", "v", "B"," ", "b", "N", "n", "M", "m", "Q", "q", ",", ".", "!", "?"};
	char content;
	std::ifstream original("original.txt");

	std::string encryption;	
	//get 1 letter from input file	
	while(original.get(content)){
	std::string strContent;
	strContent += content;
	for(int i = 0; i <= 64; i++){
		if(array[i] == strContent){
			encryption += array[i + 2];
		}
	}
	
	}

	std::cout << encryption << std::endl;

	original.close();
	
	std::ofstream Encryption("encryption.txt");

	Encryption << encryption;
}



