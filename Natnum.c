#include <stdio.h>
#define INT_MAX 10000
#include <stdbool.h>

struct Natnum
{
    /* data */
    int (*zero)(void);
    int (*successor)(int);
    bool (*is_zero)(void);
    bool (*is_equal)(int,int);
    int (*add)(int,int);
    int (*sub)(int,int);
};
int zero(){
    return 0;
}
int successor(x){
    if (x==INT_MAX)return x;
    else return x+1;
}
bool is_zero(x){
    if(x) return false;
    else return true;
}
bool is_equal(x,y){
    if(x==y) return true;
    else return false;
}
int add(x,y){
    if(x+y<=INT_MAX) return x+y;
    else return INT_MAX;
}
int sub(x,y){
    if(x<y) return 0;
    else return x-y;
}
int main(int argc, char const *argv[])
{
    
    return 0;
}




