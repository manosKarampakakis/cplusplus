class CPerson {

protected:
	string name;
	string vorname;
	unsigned int alter;

public:
	string GetName();
	string GetVorname();
	unsigned int GetAlter();
	virtual void print() const = 0;
};