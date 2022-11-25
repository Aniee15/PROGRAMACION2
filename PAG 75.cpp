#include <iostream>
#include <string>

enum ItemType
{
	itemtype_sword,
	itemtype_torch,
	itemtype_potion	
};

std::string getItemName(ItemType itemType)
{
	if (itemType == itemtype_sword)
		return "Sword";
	if (itemType == itemtype_torch)
		return "Torch";
	if (itemType == itemtype_potion)
		return "potion";
		
	return "???";
}

int main()
{
	ItemType itemType{ itemtype_torch };
	
	std::cout << "You are carrying a " << getItemName(itemType) << '\n';
	
	return 0;
}