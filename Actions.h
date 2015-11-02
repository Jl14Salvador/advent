class Actions {
public: 
	Actions(); 
	~Actions(); 
	virtual void doAction() = 0; //pure virtual 

private: 
}


class Attack : public Actions {
public: 
	void doAction();
		
private: 

};

class Talk : public Actions {
public: 
	void doAction(); 

private: 

}

class Rest : public Actions {
public: 
	void doAction(); 

private: 

}

class Eat : public Actions {
public: 
	void doAction(); 

private: 

}

