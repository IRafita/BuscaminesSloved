/*
pensat per a fer un 30*16 = 480, minim 9 bits
*/
struct relativePointer
{
	short int rp;
};

/*
Nomes es per a facilitar un return
- KnowPointMatrix (x, y)
*/
struct mineWhere
{
	int mines; /* 0 fins a 8 |4 bits|*/
	char where; /* indica a on estan les caselles sense mirar */
};

/*
Estructures per apuntar dins la llista
*/
struct srp /* struct relative pointer */
{
	struct relativePointer begin;
	struct relativePointer end;
};


/* ========== INIT ======== */
void InitStructRelativePointer (struct srp *, struct relativePointer);
