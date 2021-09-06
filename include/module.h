#define CHECK_BIT(val,pos) ((val) & (1<<pos))
#define get_eventBitMap(val,pos) (val|=(1<<pos))
typedef void (*fnptr)();

void module(int);

void printModule1(int);
void printModule2(int);
void printModule3(int);
void printModule4(int);
void printModule5(int);

