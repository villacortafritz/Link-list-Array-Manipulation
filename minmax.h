#ifndef STAT_C
#define STAT_C

typedef enum {false, true} boolean;
typedef int listItem;
typedef struct node *nodeptr;
struct node {
	int item;
	nodeptr next;
};
typedef nodeptr MinMax;

MinMax create();
MinMax newMinMax();
void destroy(MinMax *m);
void add(MinMax m,int x); //adds the integer x in the collection
void display(MinMax m);
int findMin(MinMax m); //returns the smallest integer in the collection
int findMax(MinMax m); //returns the largest integer in the collection
void deleteMin(MinMax m); //removes the smallest integer in the collection
void deleteMax(MinMax m); //removes the largest integer in the collection
int isEmpty(MinMax m); //returns 1 if the collection is empty, returns 0 otherwise
void clear(MinMax m);//makes the collection empty

#endif
