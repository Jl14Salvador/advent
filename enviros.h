#ifndef ENVIROS_H
#define ENVIROS_H

class Enviros {
	public: 
		Enviros();
		~Enviros(); 
		virtual void run() = 0; 

	private:

};

class Forest : public Enviros {
	public: 
		Forest();
		~Forest(); 
		virtual void run(); 

	private:

};

class Cave : public Enviros {
	public: 
		Cave(); 
		~Cave(); 
		virtual void run(); 

	private:

};

class Castle : public Enviros {
	public: 
		Castle(); 
		~Castle(); 
		virtual void run(); 

	private:

};

class Village : public Enviros {
	public: 
		Village(); 
		~Village() ; 
		virtual void run(); 

	private:

};

#endif