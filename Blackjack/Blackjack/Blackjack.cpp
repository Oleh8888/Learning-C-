#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
std::string Suits[4] = { "Clubs", "Diamonds", " Hearts", "Spades" };


class Card
{
public:
	int m_num;
	std::string m_suit;

public:
	Card(int num, std::string suit) :
		 m_num(num),  m_suit(suit){};
	int getNumber()
	{

	}

	std::string getSuit()
	{

	}

	Card cardChoice()
	{

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
	std::cout << " press enter to play" << "\n";
	int a;
	std::cin >> a;

	 int decknum = 52;
	std::vector<Card> deck;


	for (int i = 0; i < 4; i++)
	{
		for (int g = 2; g < 15; g++)
		{
			Card newCard = Card(g, Suits[i]);
			deck.push_back(newCard);
			std::cout << newCard.m_num << " " << newCard.m_suit << "\n";
		}
	}

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
