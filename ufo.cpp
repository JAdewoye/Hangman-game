#include <iostream>
#include "ufo_functions.hpp"


int main() {
std::string codeword = "codeacademy";
std::string answer = "___________";
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;
int i;


Greet();


while (answer != codeword && misses < 7){

display_misses(misses);
display_status(incorrect, answer);

std::cout << "\n\nPlease enter your guess: ";
std::cin >> letter;

for (i=0; i < codeword.length(); i++){
  if (codeword[i]== letter){
    answer[i] = letter;
    guess = true;
  } 
}

if (guess == true){
 std::cout << "Correct!\n";
}
else{
  std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
  incorrect.push_back(letter);
  misses++;
}

guess = false;

}

end_game(answer, codeword);



}
