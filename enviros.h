class Enviros {
	public: 
		virtual void setup() = 0; 

	private:

};

class Cave : public Enviros {
	public: 
		virtual void setup(); 

	private:

};

class Forest : public Enviros {
	public: 
		virtual void setup(); 

	private:

};

class Castle : public Enviros {
	public: 
		virtual void setup(); 

	private:

};

class Village : public Enviros {
	public: 
		virtual void setup(); 

	private:

};