int searchDocData(Index* Index, doc_data* document);
int searchTerm(char* word, Index* Index);
void printDocumentData(doc_data* document);
void wordToLower(char* word);
char* DateHour();
void burbbleSortDocument(document* new);
int searchDoc(document* current,int ID);
void printDocuments(term* current);
void displayResults(Ranking *r, int TopK, Code *statusCode);
Ranking* query(Index *i, StopWords *sw, char* text, Code *statusCode);