
#include <iostream>
#include <string>

enum class Monstrtype
{
	ogre,
	goblin,
	skeleton,
	ork,
	troll
};
enum class Monstrname
{
	ogra,
	gobla,
	skela,
	orka,
	trolla
};
enum class  Monstrhealth
{
	big,
	med,
	small
};

struct Monstrcombine
{
	 Monstrtype type;
     Monstrname name;
	 Monstrhealth health;
};

std::string getMonsterTypeString(Monstrcombine monster)
{
	if (monster.type == Monstrtype::ogre)
		return "ogre";
	if (monster.type == Monstrtype::goblin)
		return "goblin";
	if (monster.type == Monstrtype::skeleton)
		return "skeleton";
	if (monster.type == Monstrtype::ork)
		return "ork";
	if (monster.type == Monstrtype::troll)
		return "troll";

	return "Unknown";
}

std::string getMonsterNameString(Monstrcombine monster)
{
	if (monster.name == Monstrname::ogra)
		return "ogra";
	if (monster.name == Monstrname::gobla)
		return "gobla";
	if (monster.name == Monstrname::skela)
		return "skela";
	if (monster.name == Monstrname::orka)
		return "orka";
	if (monster.name == Monstrname::trolla)
		return "trolla";

	return "Unknown";
}

std::string getMonsterHealthString(Monstrcombine monster)
{
	if (monster.health == Monstrhealth::big)
		return "big ";
	if (monster.health == Monstrhealth::small)
		return "small ";
	if (monster.health == Monstrhealth::small)
		return "small";
	if (monster.health == Monstrhealth::med)
		return "med ";
	if (monster.health == Monstrhealth::big)
		return "big";

	return "Unknown";
}

	

	std::string printMonstrcombine(Monstrcombine monster)
	{
		using namespace std;
		cout << " Your type is " << getMonsterTypeString(monster) << "\n";
		cout << " Your name is " << getMonsterNameString(monster) << "\n";
		cout << " Your health is " << getMonsterHealthString(monster) << "\n";
	}
	
	std::string getMonstr (Monstrcombine monstrName)
	{
		std::string monstrName;
		if (std::getline(std::cin, monstrName) == Monstrcombine ogre)
			return monstrName = Monstrcombine ogre;


	}

	int main()
	{
		using namespace std;
		cout << "choose your monstr look \n";
		Monstrcombine ogre = { Monstrtype::ogre, Monstrname::ogra, Monstrhealth::big };
		Monstrcombine goblin = { Monstrtype::goblin, Monstrname::gobla, Monstrhealth::small };
		Monstrcombine skeleton = { Monstrtype::skeleton, Monstrname::skela, Monstrhealth::small };
		Monstrcombine ork = { Monstrtype::ork, Monstrname::orka, Monstrhealth::med };
		Monstrcombine troll = { Monstrtype::troll, Monstrname::trolla, Monstrhealth::big };
		getMonstr (monstrName);
		printMonstrcombine(monstrName);
		return 0;
	}
