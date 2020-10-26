#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Deck
{

public:
	std::string Suits[4] = { "Clubs", "Diamonds", " Hearts", "Spades" };
	std::vector<Deck> deck;
	int decknum = 52;

public:
	void makeDeck(deck[g, i])
	{
		for (int i = 0; i < 4; i++)
		{
			for (int g = 2; g < 14; g++)
			{
				std::cout << "card rank " << deck.g << " " << "card suit " << deck.i << "\n";
			}
		}
	}
	friend class Card;
};


class Card
{
public:
	int m_num;
	std::string m_suit;

public:
	Card(int num, std::string suit) :
		m_num(num), m_suit(suit) {};

	Card getCard()
	{
		Card newCard = (deck[m_num], Suits[m_suit]);
		deck.push_back(newCard);
		std::cout << newCard.m_num << " " << newCard.m_suit << "\n";
	}
};



int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить только один раз
	// Равномерно распределяем вычисление значения из нашего диапазона
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

int main()
{
	srand(NULL);
	rand();
	std::cout << " press enter to play" << "\n";
	int a;
	std::cin >> a;

	Deck makeDeck(deck);

	int counter = 0;
	int dillerCounter = 0;
	while (true)
		{
		static_cast<unsigned int>(time(0));
		std::cout << "press 1 to contn\n";
		int b;
		std::cin >> b;
		rand();
		if (b == 1)
		{
			int cardnum = getRandomNumber(0, decknum);
			counter += deck[cardnum].m_num;
			deck.erase(deck.begin() + cardnum);
			decknum--;
			if (counter > 21)
			{
				return 0;
			}
		}
		else if (b == 2)
		{
			while (dillerCounter < 18)
			{
				int cardnum = getRandomNumber(0, decknum);
				counter += deck[cardnum].m_num;
				deck.erase(deck.begin() + cardnum);
				decknum--;
			}

		}
		std::cout << "your number is " << counter << " " << " diller number is " << dillerCounter;

	}

	std::cin >> a;
	return 0;
}
