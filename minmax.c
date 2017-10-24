#include <stdio.h>
#include <stdlib.h>
#include "minmax.h"

MinMax create(int item){
	MinMax p;
	p = (MinMax)malloc(sizeof(struct node));
	p->item = item;
	p->next = NULL;
	return p;
}
MinMax newMinMax(){
	MinMax m;
	m = create(0);
	return m;
}
void destroy(MinMax *m){
	free(*m);
	*m = NULL;
}
void add(MinMax m,int x){
	MinMax temp = create(x);
	temp->next=m->next;
	m->next = temp;
}
void display(MinMax m){
	MinMax d = m->next;
	printf("[");
	while(d!=NULL){
		printf("%d ", d->item);
		d = d->next;
	}
	printf("]");
}
int findMin(MinMax m){
	MinMax d = m->next;
	int small = d->item;
	d=d->next;
	while(d!=NULL){
		if(d->item<small){
			small = d->item;
		}
		d=d->next;
	}
	return small;
}
int findMax(MinMax m){
	MinMax d = m->next;
	int big = d->item;
	d=d->next;
	while(d!=NULL){
		if(d->item>big){
			big = d->item;
		}
		d=d->next;
	}
	return big;
} 
void deleteMin(MinMax m){
	int min = findMin(m);
	nodeptr d = m->next;
	nodeptr prev = m;
	while(d!=NULL){
		if(min==d->item){
			break;
		}
		prev=prev->next;
		d=d->next;
	}
	prev->next=d->next;
	free(d);
} 
void deleteMax(MinMax m){
	int max = findMax(m);
	nodeptr d = m->next;
	nodeptr prev = m;
	while(d!=NULL){
		if(max==d->item){
			break;
		}
		prev=prev->next;
		d=d->next;
	}
	prev->next=d->next;
	free(d);
}
int isEmpty(MinMax m){
	return (m->next==0 ? 1:0);
}
void clear(MinMax m){
	while(m->next!=NULL){
		nodeptr d = m->next;
		if(d!=NULL){
			m->next = d->next;
			free(d);
		}
	}
}
