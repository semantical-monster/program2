#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>

//initialize array, global input, & global counter
char* Teams[10] = {"Wizards", "TuneSquad", "MonStars", "Angels", "Pirates", "Nuggets", "Penguins", "Blazers", "Rockets", "Shockers"};
int numberOfTeams;
int counter = 0;

//cheer functions 1-10 -- generate random int, print out 'Go' & corresponding array element random number of time, increment global counter
void *cheer1(void *threadid)
{
long tid;
tid = (long)threadid;
srand(time(NULL));
int a = 0;
int x = rand() % 10 + 1;
for(a; a < x; a++){
printf("Go %s \n", Teams[0]);
counter++;
}
}


void *cheer2(void *threadid2)
{
long tid;
tid = (long)threadid2;
int b = 0;
int x2 = rand() % 10 + 1;
for(b; b < x2; b++){
printf("Go %s \n", Teams[1]);
counter++;
}
}

void *cheer3(void *threadid3)
{
long tid;
tid = (long)threadid3;
int c = 0;
int x3 = rand() % 10 + 1;
for(c; c < x3; c++){
printf("Go %s \n", Teams[2]);
counter++;
}
}

void *cheer4(void *threadid4)
{
long tid;
tid = (long)threadid4;
int d = 0;
int x4 = rand() % 10 + 1;
for(d; d < x4; d++){
printf("Go %s \n", Teams[3]);
counter++;
}
}

void *cheer5(void *threadid5)
{
long tid;
tid = (long)threadid5;
int e = 0;
int x5 = rand() % 10 + 1;
for(e; e < x5; e++){
printf("Go %s \n", Teams[4]);
counter++;
}
}

void *cheer6(void *threadid6)
{
long tid;
tid = (long)threadid6;
int f = 0;
int x6 = rand() % 10 + 1;
for(f; f < x6; f++){
printf("Go %s \n", Teams[5]);
counter++;
}
}

void *cheer7(void *threadid7)
{
long tid;
tid = (long)threadid7;
int g = 0;
int x7 = rand() % 10 + 1;
for(g; g < x7; g++){
printf("Go %s \n", Teams[6]);
counter++;
}
}

void *cheer8(void *threadid8)
{
long tid;
tid = (long)threadid8;
int h = 0;
int x8 = rand() % 10 + 1;
for(h; h < x8; h++){
printf("Go %s \n", Teams[7]);
counter++;
}
}

void *cheer9(void *threadid9)
{
long tid;
tid = (long)threadid9;
int i = 0;
int x9 = rand() % 10 + 1;
for(i; i < x9; i++){
printf("Go %s \n", Teams[8]);
counter++;
}
}

void *cheer10(void *threadid10)
{
long tid;
tid = (long)threadid10;
int j = 0;
int x10 = rand() % 10 + 1;
for(j; j < x10; j++){
printf("Go %s \n", Teams[9]);
counter++;
}
}


int main(int argc, char *argv[])
{
//get user input -- how many teams to cheer for?
printf("cheer (1-10) ? ");
//store it in global variable
scanf("%d", &numberOfTeams);
srand(time(NULL));

//if loops -- create threads for each team, call corresponding cheer function, error check, &terminate thread
if(numberOfTeams==1){
int p1a;
pthread_t t1a;
p1a = pthread_create(&t1a, NULL, cheer1, NULL);
if(p1a) {printf("Error");}
pthread_join(t1a, NULL);
}

else if(numberOfTeams==2){
int p1b;
int p2a;
pthread_t t1b, t2a;
p1b = pthread_create(&t1b, NULL, cheer1, NULL);
if(p1b) {printf("Error");}
pthread_join(t1b, NULL);
p2a = pthread_create(&t2a, NULL, cheer2, NULL);
if(p2a) {printf("Error");}
pthread_join(t2a, NULL);
}

else if(numberOfTeams==3){
int p1c;
int p2b;
int p3a;
pthread_t t1c, t2b, t3a;
p1c = pthread_create(&t1c, NULL, cheer1, NULL);
if(p1c) {printf("Error");}
pthread_join(t1c, NULL);
p2b = pthread_create(&t2b, NULL, cheer2, NULL);
if(p2b) {printf("Error");}
pthread_join(t2b, NULL);
p3a = pthread_create(&t3a, NULL, cheer3, NULL);
if(p3a) {printf("Error");}
pthread_join(t3a, NULL);
}

else if(numberOfTeams==4){
int p1d;
int p2c;
int p3b;
int p4a;
pthread_t t1d, t2c, t3b, t4a;
p1d = pthread_create(&t1d, NULL, cheer1, NULL);
if(p1d) {printf("Error");}
pthread_join(t1d, NULL);
p2c = pthread_create(&t2c, NULL, cheer2, NULL);
if(p2c) {printf("Error");}
pthread_join(t2c, NULL);
p3b = pthread_create(&t3b, NULL, cheer3, NULL);
if(p3b) {printf("Error");}
pthread_join(t3b, NULL);
p4a = pthread_create(&t4a, NULL, cheer4, NULL);
if(p4a) {printf("Error");}
pthread_join(t4a, NULL);
}

else if(numberOfTeams==5){
int p1e;
int p2d;
int p3c;
int p4b;
int p5a;
pthread_t t1e, t2d, t3c, t4b, t5a;
p1e = pthread_create(&t1e, NULL, cheer1, NULL);
if(p1e) {printf("Error");}
pthread_join(t1e, NULL);
p2d = pthread_create(&t2d, NULL, cheer2, NULL);
if(p2d) {printf("Error");}
pthread_join(t2d, NULL);
p3c = pthread_create(&t3c, NULL, cheer3, NULL);
if(p3c) {printf("Error");}
pthread_join(t3c, NULL);
p4b = pthread_create(&t4b, NULL, cheer4, NULL);
if(p4b) {printf("Error");}
pthread_join(t4b, NULL);
p5a = pthread_create(&t5a, NULL, cheer5, NULL);
if(p5a) {printf("Error");}
pthread_join(t5a, NULL);
}

else if(numberOfTeams==6){
int p1f;
int p2e;
int p3d;
int p4c;
int p5b;
int p6a;
pthread_t t1f, t2e, t3d, t4c, t5b, t6a;
p1f = pthread_create(&t1f, NULL, cheer1, NULL);
if(p1f) {printf("Error");}
pthread_join(t1f, NULL);
p2e = pthread_create(&t2e, NULL, cheer2, NULL);
if(p2e) {printf("Error");}
pthread_join(t2e, NULL);
p3d = pthread_create(&t3d, NULL, cheer3, NULL);
if(p3d) {printf("Error");}
pthread_join(t3d, NULL);
p4c = pthread_create(&t4c, NULL, cheer4, NULL);
if(p4c) {printf("Error");}
pthread_join(t4c, NULL);
p5b = pthread_create(&t5b, NULL, cheer5, NULL);
if(p5b) {printf("Error");}
pthread_join(t5b, NULL);
p6a = pthread_create(&t6a, NULL, cheer6, NULL);
if(p6a) {printf("Error");}
pthread_join(t6a, NULL);
}

else if(numberOfTeams==7){
int p1g;
int p2f;
int p3e;
int p4d;
int p5c;
int p6b;
int p7a;
pthread_t t1g, t2f, t3e, t4d, t5c, t6b, t7a;
p1g = pthread_create(&t1g, NULL, cheer1, NULL);
if(p1g) {printf("Error");}
pthread_join(t1g, NULL);
p2f = pthread_create(&t2f, NULL, cheer2, NULL);
if(p2f) {printf("Error");}
pthread_join(t2f, NULL);
p3e = pthread_create(&t3e, NULL, cheer3, NULL);
if(p3e) {printf("Error");}
pthread_join(t3e, NULL);
p4d = pthread_create(&t4d, NULL, cheer4, NULL);
if(p4d) {printf("Error");}
pthread_join(t4d, NULL);
p5c = pthread_create(&t5c, NULL, cheer5, NULL);
if(p5c) {printf("Error");}
pthread_join(t5c, NULL);
p6b = pthread_create(&t6b, NULL, cheer6, NULL);
if(p6b) {printf("Error");}
pthread_join(t6b, NULL);
p7a = pthread_create(&t7a, NULL, cheer7, NULL);
if(p7a) {printf("Error");}
pthread_join(t7a, NULL);
}


else if(numberOfTeams==8){
int p1h;
int p2g;
int p3f;
int p4e;
int p5d;
int p6c;
int p7b;
int p8a;
pthread_t t1h, t2g, t3f, t4e, t5d, t6c, t7b, t8a;
p1h = pthread_create(&t1h, NULL, cheer1, NULL);
if(p1h) {printf("Error");}
pthread_join(t1h, NULL);
p2g = pthread_create(&t2g, NULL, cheer2, NULL);
if(p2g) {printf("Error");}
pthread_join(t2g, NULL);
p3f = pthread_create(&t3f, NULL, cheer3, NULL);
if(p3f) {printf("Error");}
pthread_join(t3f, NULL);
p4e = pthread_create(&t4e, NULL, cheer4, NULL);
if(p4e) {printf("Error");}
pthread_join(t4e, NULL);
p5d = pthread_create(&t5d, NULL, cheer5, NULL);
if(p5d) {printf("Error");}
pthread_join(t5d, NULL);
p6c = pthread_create(&t6c, NULL, cheer6, NULL);
if(p6c) {printf("Error");}
pthread_join(t6c, NULL);
p7b = pthread_create(&t7b, NULL, cheer7, NULL);
if(p7b) {printf("Error");}
pthread_join(t7b, NULL);
p8a = pthread_create(&t8a, NULL, cheer8, NULL);
if(p8a) {printf("Error");}
pthread_join(t8a, NULL);
}


else if(numberOfTeams==9){
int p1i;
int p2h;
int p3g;
int p4f;
int p5e;
int p6d;
int p7c;
int p8b;
int p9a;
pthread_t t1i, t2h, t3g, t4f, t5e, t6d, t7c, t8b, t9a;
p1i = pthread_create(&t1i, NULL, cheer1, NULL);
if(p1i) {printf("Error");}
pthread_join(t1i, NULL);
p2h = pthread_create(&t2h, NULL, cheer2, NULL);
if(p2h) {printf("Error");}
pthread_join(t2h, NULL);
p3g = pthread_create(&t3g, NULL, cheer3, NULL);
if(p3g) {printf("Error");}
pthread_join(t3g, NULL);
p4f = pthread_create(&t4f, NULL, cheer4, NULL);
if(p4f) {printf("Error");}
pthread_join(t4f, NULL);
p5e = pthread_create(&t5e, NULL, cheer5, NULL);
if(p5e) {printf("Error");}
pthread_join(t5e, NULL);
p6d = pthread_create(&t6d, NULL, cheer6, NULL);
if(p6d) {printf("Error");}
pthread_join(t6d, NULL);
p7c = pthread_create(&t7c, NULL, cheer7, NULL);
if(p7c) {printf("Error");}
pthread_join(t7c, NULL);
p8b = pthread_create(&t8b, NULL, cheer8, NULL);
if(p8b) {printf("Error");}
pthread_join(t8b, NULL);
p9a = pthread_create(&t9a, NULL, cheer9, NULL);
if(p9a) {printf("Error");}
pthread_join(t9a, NULL);
}

else if(numberOfTeams==10){
int p1j;
int p2i;
int p3h;
int p4g;
int p5f;
int p6e;
int p7d;
int p8c;
int p9b;
int p10a;
pthread_t t1j, t2i, t3h, t4g, t5f, t6e, t7d, t8c, t9b, t10a;
p1j = pthread_create(&t1j, NULL, cheer1, NULL);
if(p1j) {printf("Error");}
pthread_join(t1j, NULL);
p2i = pthread_create(&t2i, NULL, cheer2, NULL);
if(p2i) {printf("Error");}
pthread_join(t2i, NULL);
p3h = pthread_create(&t3h, NULL, cheer3, NULL);
if(p3h) {printf("Error");}
pthread_join(t3h, NULL);
p4g = pthread_create(&t4g, NULL, cheer4, NULL);
if(p4g) {printf("Error");}
pthread_join(t4g, NULL);
p5f = pthread_create(&t5f, NULL, cheer5, NULL);
if(p5f) {printf("Error");}
pthread_join(t5f, NULL);
p6e = pthread_create(&t6e, NULL, cheer6, NULL);
if(p6e) {printf("Error");}
pthread_join(t6e, NULL);
p7d = pthread_create(&t7d, NULL, cheer7, NULL);
if(p7d) {printf("Error");}
pthread_join(t7d, NULL);
p8c = pthread_create(&t8c, NULL, cheer8, NULL);
if(p8c) {printf("Error");}
pthread_join(t8c, NULL);
p9b = pthread_create(&t9b, NULL, cheer9, NULL);
if(p9b) {printf("Error");}
pthread_join(t9b, NULL);
p10a = pthread_create(&t10a, NULL, cheer10, NULL);
if(p10a) {printf("Error");}
pthread_join(t10a, NULL);
}

//display total number of cheers
printf("Number of cheers: %d\n", counter);
return 0;
}




