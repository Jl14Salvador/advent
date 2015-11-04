class Actions {
public: 
	Actions() {}; 
	~Actions() {}; 
	virtual void doAction() = 0; //pure virtual 

private: 
}


class Attack : public Actions {
public: 
	Attack() {};
	~Attack() {};
	void doAction();
		
private: 

};

class Talk : public Actions {
public: 
	Talk() {}; 
	~Talk() {}; 
	void doAction(); 

private: 

}

class Open : public Actions {
public: 
	Open() {};
	~Open() {};
	void doAction(); 

private: 

}

class Eat : public Actions {
public: 
	Eat() {}; 
	~Open() {}; 
	void doAction(); 

private: 

}

