Player* Enemy::giveItem(Player* who){
	if(_item =! NULL){
		who->addItem(_item)
		_item = 0; 
	}
	else {
		std::cout << name << " has no item to give." << endl; 
	}
	return who; 
}