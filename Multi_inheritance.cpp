#include <iostream>

class animal {
public:
	const std::string ability;
	const std::string heart;
	const std::string eye;
	const std::string mouth;
	const std::string ears;

	animal() : ability("can breath,eat,drink,live,move"), heart("heart"), eye(",eye"), mouth(",mouth"), ears(",ears"){
		std::cout << "animal class constructor" << std::endl;
		display();
	}

	virtual void display() {
		std::cout << ability << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << std::endl;
		std::cout << std::endl;
	}

	virtual ~animal() {
		std::cout << "animal class destructor" << std::endl;
	}
};

class fish : virtual public animal {
public:
	const std::string FishAbility;
	const std::string gills;
	const std::string scale;
	const std::string slime;
	const std::string caviar;

	fish() : animal(), FishAbility(",live in water longer,swim faster,breath under water"), gills(",gills"), scale(",scale"), slime(",slime"), caviar(",caviar") {
		std::cout << "fish class constructor" << std::endl;
		display();
	}

	void display() override {
		std::cout << ability << FishAbility << std::endl;
		std::cout << "parts of body: " << gills << scale << caviar << std::endl;
		std::cout << std::endl;
	}

	~fish() override {
		std::cout << "fish class destructor" << std::endl;
	}
};

class LandDweller : virtual public animal {
public:
	const std::string LandDwellerAbility;
	const std::string teeth;
	const std::string legs;
	const std::string hand;
	const std::string hair;

	LandDweller() : animal(), LandDwellerAbility(",walk better,more flexible,smarter,wilder"), teeth(",teeth"), legs(",legs"), hand(",hand"), hair(",hair") {
		std::cout << "LandDweller class constructor" << std::endl;
		display();
	}

	void display() override {
		std::cout << ability << LandDwellerAbility << std::endl;
		std::cout << "parts of body: " << heart << eye << mouth << ears << teeth << legs << hand << hair << std::endl;
		std::cout << std::endl;
	}

	~LandDweller() override {
		std::cout << "LandDweller class destructor" << std::endl;
	}
};

class frog : public LandDweller, public fish{
public:
	std::string name;

	frog() : LandDweller(),fish(), name("frog") {
		std::cout << "frog class constructor" << std::endl;
		display();
	}
	void display() override {
		std::cout << name << std::endl;
		std::cout << std::endl;
	}
	~frog() override {
		std::cout << "frog class destructor" << std::endl;
	}
};

int main() {
	frog f;
}