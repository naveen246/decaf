
#ifndef SCAN_H_
#define SCAN_H_

#define MAX_STR_LEN 500


typedef enum{
    BOOLEANLITERAL, INTLITERAL, CHARLITERAL, STRINGLITERAL, IDENTIFIER, KEYWORD, OPERATOR, ERROR, DELIMITER, COMMENT_TOK, OTHER 
} TokenType;

typedef enum{
    START, END, INT, INT_DEC, INT_EXPECT_HEX, INT_HEX, CHAR, CHAR_EXPECT_QUOTE, ESCAPE_CHAR, STRING, STRING_ESCAPE_CHAR, ID, OP, COND_OP, COMMENT, DELIMIT
} StateType;

extern char *stateTypeStr[];


extern char *tokenTypeStr[];


extern char keyWordsStr[][50];


FILE *source;
extern int sourceEOF;
extern char *sourceFolder;
char sourceFileName[MAX_STR_LEN];

FILE *outputFile;
extern char *outputFolder;
extern char *referenceOutputFolder;

extern int lineNo, linePos;

extern char tokenString[MAX_STR_LEN];

//lineBuffer stores a line from the input file
extern char lineBuffer[MAX_STR_LEN];

#endif