#include <iostream>
using namespace std;

   void TutorialMenu(char option) {
    if(option == '1') {
        cout << "General Rules: \n" << endl;
        cout << "The rules of blackjack are fairly simple and your only opponent in the game is the dealer. Each player is dealt a two cards ";
        cout << "face up while the dealer only has one card face up. The goal is to have your two cards added total to be higher than the dealer's two ";
        cout << "cards and under 21. If you go over 21 you \"bust\", or lose, or if the dealers two cards added together are higher than yours you also lose. ";
        cout << "If your two card total is equal to the dealers then it is a “push” or a tie. Cards values are usually face value, 2 is 2 and 10 is 10 " ;
        cout << ", while all face cards, jack/queen/king, are also 10. The only exception to this rule are Aces, they can take on the value of 1 or 11. ";
        cout << "To get your two cards total you simply add your two cards together. If you have any combination of an Ace or any card that is 10 ";
        cout << "points then you have what is called blackjack, 21 pts. Getting blackjack means you get paid more if you win. \n " << endl;
    } else if(option == '2') {
        cout << "Hit/Stay: \n" << endl;
        cout << "With all of that being said if you’re not satisfied with your two card total then you can take extra cards, called taking a hit ";
        cout << ", and for each hit you get you get one more card. The dealer does this as well but has a strict set of rules to follow on whether ";
        cout << "or not to take a hit. If a dealer’s hand is less than or equal to 16 or a “soft” 17, meaning they have an ace and a 6, they must take ";
        cout << "a hit. If it’s 17 or higher the dealer must stand.  A player may also stand if they are happy with their hand \n" << endl;
    } else if(option == '3') {
        cout << "Split/Double Down: \n" << endl;
        cout << "As stated in the Hit/Stand section you can take hits to increase your card total. ";
        cout << "You may also split your cards and double down. Splitting can be done when your first two cards are of equal value and can ";
        cout << "only be split from the original hand, split hands cannot be split, the bet has to be equal or greater than the original bet ";
        cout << "for each hand. For each time you split you will receive and additional card for that hand and then you play like regular blackjack. ";
        cout << "Users may also double down which consists of a user placing another bet of equal or lesser value when their first two cards total ";
        cout << "is equal to 9, 10, or 11 without aces. After doubling down you will only get one additional card. \n" << endl;
    } else if(option == '4') {
        cout << "Insurance: \n" << endl;
        cout << "You may have realized that if the dealer gets a blackjack or 21 you pretty much always lose, unless you yourself have blackjack. ";
        cout << "There is a way around this and it’s called insurance. If the dealer is dealt an ace face up then the dealer will ask if you want ";
        cout << "to take out insurance, equal to half of your original bet, to insure your hand if the dealer has blackjack and only when he ";
        cout << "has blackjack and helps insure you don’t lose money if he does have blackjack, insurance pays 2 to 1 so your insurance bet ";
        cout << "will cover the loss of your hand if you bet half. \n" << endl;
    }
}

void deal() {

}

int main() {
    char userOption;
    char tutorialOption;

    while(1) {
        cout << "Welcome to the BlackJack Tutorial. Please select an option from the menu: "<< endl;
        cout << "N - New Game" << endl;
        cout << "? - Help" << endl;
        cout << "Q - Quit" << endl;

        cin >> userOption;

        if(userOption == '?') {
            cout << "Please choose from the following options: \n" << endl;
            cout << "1 - General Rules for Blackjack" << endl;
            cout << "2 - Hit/Stand" << endl;
            cout << "3 - Double Down/Split" << endl;
            cout << "4 - Insurance" << endl;

            cin >> tutorialOption;
            TutorialMenu(tutorialOption);
        }

        if(userOption == 'N') {
            deal();
        }

        if(userOption == 'Q') {
                break;
        }
    }
    return 0;
}
