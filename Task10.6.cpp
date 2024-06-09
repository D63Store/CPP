#include <iostream>
#include <array>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;


enum class Rank {
    Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
    Jack, Queen, King, Ace,
    MaxRanks
};


enum class Suit {
    Clubs, Diamonds, Hearts, Spades,
    MaxSuits
};


struct Card {
    Rank rank;
    Suit suit;
};


void printCard(const Card& card) {
    const char* rankCodes[] = { "2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A" };
    const char* suitCodes[] = { "C", "D", "H", "S" };

    cout << rankCodes[static_cast<int>(card.rank)] << suitCodes[static_cast<int>(card.suit)];
}


array<Card, 52> createDeck() {
    array<Card, 52> deck{};
    int cardIndex = 0;

    for (int suit = 0; suit < static_cast<int>(Suit::MaxSuits); ++suit) {
        for (int rank = 0; rank < static_cast<int>(Rank::MaxRanks); ++rank) {
            deck[cardIndex].suit = static_cast<Suit>(suit);
            deck[cardIndex].rank = static_cast<Rank>(rank);
            ++cardIndex;
        }
    }

    return deck;
}


void printDeck(const array<Card, 52>& deck) {
    for (const auto& card : deck) {
        printCard(card);
        cout << ' ';
    }
    cout << '\n';
}


void shuffleDeck(array<Card, 52>& deck) {
    static mt19937 mt{ static_cast<mt19937::result_type>(time(nullptr)) };
    shuffle(deck.begin(), deck.end(), mt);
}


int getCardValue(const Card& card) {
    switch (card.rank) {
    case Rank::Two:   return 2;
    case Rank::Three: return 3;
    case Rank::Four:  return 4;
    case Rank::Five:  return 5;
    case Rank::Six:   return 6;
    case Rank::Seven: return 7;
    case Rank::Eight: return 8;
    case Rank::Nine:  return 9;
    case Rank::Ten:
    case Rank::Jack:
    case Rank::Queen:
    case Rank::King:  return 10;
    case Rank::Ace:   return 11;
    default:          return 0;
    }
}


int main() {
    auto deck = createDeck();

    cout << "Original deck:\n";
    printDeck(deck);

    shuffleDeck(deck);

    cout << "\nShuffled deck:\n";
    printDeck(deck);

    Card exampleCard{ Rank::Ace, Suit::Spades };
    cout << "\nValue of card ";
    printCard(exampleCard);
    cout << ": " << getCardValue(exampleCard) << '\n';

}
