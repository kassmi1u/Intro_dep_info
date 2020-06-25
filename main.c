#include<stdio.h>
#include"date.h"

int main(){

Date* d1= creer_date(24,05,2020); 
printf(" la date d'aujoud'hui est %d/%d/%d\n ", d1->j,d1->m,d1->a);
}

