#include <stdio.h>
#include <stdlib.h>
#include "module.h"
#include "event_manager.h"

void printModule1(int eventno){
    printf("\nIn Module 1,event %d is performing ",eventno);
}

void printModule2(int eventno){
    printf("\nIn Module 2,event %d is performing ",eventno);
}

void printModule3(int eventno){
    printf("\nIn Module 3,event %d is performing ",eventno);
}

void printModule4(int eventno){
    printf("\nIn Module 4,event %d is performing ",eventno);
}

void printModule5(int eventno){
    printf("\nIn Module 5,event %d is performing ",eventno);
}

void printModule6(int eventno){
    printf("\nIn Module 6,event %d is performing ",eventno);
}

void printModule7(int eventno){
    printf("\nIn Module 7,event %d is performing ",eventno);
}

void printModule8(int eventno){
    printf("\nIn Module 8,event %d is performing ",eventno);
}

void printModule9(int eventno){
    printf("\nIn Module 9,event %d is performing ",eventno);
}

void printModule10(int eventno){
    printf("\nIn Module 10,event %d is performing ",eventno);
}


void (*printModule[10])()={printModule1,printModule2,printModule3,printModule4,printModule5,printModule6,printModule7,printModule8,printModule9,printModule10};

void module(int event_count){
    int eventno;
    int bit_map=0;
    int module_max;
    printf("Enter No of Modules:");
    scanf("%d",&module_max);
    for(int moduleno=1;moduleno<=module_max;moduleno++){
        printf("Enter the events Module %d is interested in\n ",moduleno);
        scanf("%d",&eventno);
	register_event(moduleno,get_eventBitMap(bit_map,eventno),printModule[moduleno-1]);
        bit_map=0;
    }
}

