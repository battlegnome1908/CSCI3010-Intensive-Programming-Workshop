/* Created by Austin McCutcheon
 * I think I covered everything here.
 */
#ifndef _SUIT_H_ // this is the header guard
#define _SUIT_H_

// Create an enum class, Suit to represent the suit in a deck of cards
enum class Suit {
    Hearts,
    Diamonds,
    Clubs,
    Spades
};


// Create a struct, Card, to represent a card in a deck of cards.  You must
// use your Suit enum.  You may use any other values that you choose.
struct Card {
    Suit suit;
    int rank;  // from 1 to 13 (King)

    // Override operator== in your Card struct.
    bool operator==(const Card& other) const {
        return (suit == other.suit) && (rank == other.rank);
    }
};

// Design a class, Deck.  Write down the fields and methods that this class should have.  
// Don’t implement them!
class Deck{
public: 
    Deck(){
        // InitDeck. for loop moving through hearts->spades and through 1-13 rank
        // shuffle after initialized?
    }
    
    void shuffle(); 
    Card draw(); // draw 1
    std::vector<Card> draw(int num_cards); // draw num_cards

    int getsize() const {int size_; } // how many cards are in deck
    int setsize(); // put cards back into the deck
    
    void reset(); // reset deck size and shuffle

private:
    std::vector<Card> cards;
    int size_; // number of cards in deck

}


#endif // _SUIT_H_
