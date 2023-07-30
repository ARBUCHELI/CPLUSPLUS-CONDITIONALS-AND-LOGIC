/* This program will implement the popular game rock, paper, scissors, lizard, spock, just as seen in the famous tv show "The Big Bang Theory"
*/

#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
  int computer = rand() % 4 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";
  std::cout << "shoot! ";

  std::cin >> user;

  if (computer == 1) {
    std::cout << "Computer choose: ✊\n";
  }
  else if (computer == 2) {
    std::cout << "Computer choose: ✋\n";
  }
  else if (computer == 3) {
    std::cout << "Computer choose: ✌️\n";
  }
  else if (computer == 4) {
    std::cout << "Computer choose: 🦎\n";
  }
  else {
    std::cout << "Computer choose: 🖖\n";
  }

  if (user == 1) {
    std::cout << "You choose: ✊\n";
  }
  else if (user == 2) {
    std::cout << "You choose: ✋\n";
  }
  else if (user == 3) {
    std::cout << "You choose: ✌️\n";
  }
  else if (user == 4) {
    std::cout << "You choose: 🦎\n";
  }
  else {
    std::cout << "You choose: 🖖\n";
  }
  
  if (user == 3 && computer == 2) {
    std::cout << "You win!!!\n";
  }
  else if (user == 3 && computer == 4) {
    std::cout << "You win!!!\n";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "You win!!!\n";
  }
  else if (user == 2 && computer == 5) {
    std::cout << "You win!!!\n";
  }
  else if (user == 1 && computer == 4) {
    std::cout << "You win!!!\n";
  }
  else if (user == 4 && computer == 5) {
    std::cout << "You win!!!\n";
  }
  else if (user == 5 && computer == 3) {
    std::cout << "You win!!!\n";
  }
  else if (user == 4 && computer == 2) {
    std::cout << "You win!!!\n";
  }
  else if (user == 5 && computer == 1) {
    std::cout << "You win!!!\n";
  }
  else if (user == 1 && computer == 3) {
    std::cout << "You win!!!\n";
  }
  else if (user == computer) {
    std::cout << "This is a draw\n";
  }
  else {
    std::cout << "Computer wins...";
  }
}