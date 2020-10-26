
#include <iostream>
#include <string>
#include <cstdlib> // для rand() и srand()
#include <ctime>
	

	class Monster
	{
	public:
		enum MonsterType
		{
			Dragon,
			Goblin,
			Ogre,
			Orc,
			Skeleton,
			Troll,
			Vampire,
			Zombie,
			MAX_MONSTER_TYPES
		};

	private:
		MonsterType m_type;
		std::string m_name;
		int m_hp;

	public:
		Monster(MonsterType type, std::string name, int hp) :
			m_type(type), m_name(name), m_hp(hp)
		{

		}

		void print() const
		{
			std::cout << "Jack is the" << getTypestring() << "that has" <<  m_hp << "health";
		}
		std::string getTypestring() const
		{
			switch (m_type)
			{
			case Dragon: return "dragon";
			case Goblin: return "goblin";
			case Ogre: return "ogre";
			case Orc: return "orc";
			case Skeleton: return "skeleton";
			case Troll: return "troll";
			case Vampire: return "vampire";
			case Zombie: return "zombie";
			}

			return "Error!";

		}

		
	};
	class MonsterGenerator
	{
	public:
		static int getRandomNumber(int min, int max)
		{
			static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить только один раз
			// Равномерно распределяем вычисление значения из нашего диапазона
			return static_cast<int>(rand() * fraction * (max - min + 1) + min);
		}

		static Monster generateMonster()
		{
			Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES));
			int hp = getRandomNumber(0, 100);
			static std::string s_names[6]{ "John", "Brad", "Alex", "Thor", "Hulk", "Asnee" };
			return Monster(type, s_names[getRandomNumber(0, 5)], hp);
		}
	};


	int main()
	{
		srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
		rand(); // пользователям Visual Studio: делаем сброс первого случайного числа

		Monster m = MonsterGenerator::generateMonster();
		m.print();

		return 0;
	}