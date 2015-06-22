#include<iostream>
#include<cstdlib>
#include<ctime>
#include"MinoL.h"
#include<new>
using namespace std;
void handle()
{
 cerr<<"No memory"<<endl;
 exit(1);
}
int main()
{
 set_new_handler(handle);
 Mino*mino_ptr;
 srandom(time(NULL));
 mino_ptr=new MinoL[500000000000];
 return 0;
}
