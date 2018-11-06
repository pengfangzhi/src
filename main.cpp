#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
    srand((unsigned int)time(NULL));
    int red[6]={0};
    int tmp, i = 0;
    while(i < 6)
    {
        switch (i) {
        case 0:
            tmp = rand()%33+1;
            red[i] = tmp;
            ++i;
            break;
        case 1:
            tmp=rand()%33+1;
            if(tmp == red[i-1])
            {
                tmp=rand()%33+1;
            }
            else
            {
                red[i]=tmp;
                ++i;
            }
            break;
        case 2:
            if(tmp == red[i-1]||tmp == red[i-2])
            {
                tmp=rand()%33+1;
            }
            else
            {
                red[i]=tmp;
                ++i;
            }
            break;
        case 3:
            if(tmp == red[i-1]||tmp == red[i-2]||tmp == red[i-3])
            {
                tmp=rand()%33+1;
            }
            else
            {
                red[i]=tmp;
                ++i;
            }
            break;
        case 4:
            if(tmp == red[i-1]||tmp == red[i-2]||tmp == red[i-3]||tmp == red[i-4])
            {
                tmp=rand()%33+1;
            }
            else
            {
                red[i]=tmp;
                ++i;
            }
            break;
        case 5:
            if(tmp == red[i-1]||tmp == red[i-2]||tmp == red[i-3]||tmp == red[i-4]||tmp == red[i-5])
            {
                tmp=rand()%33+1;
            }
            else
            {
                red[i]=tmp;
                ++i;
            }
            break;

        default:
            break;
        }

    }
    int blue =rand()%16+1;

    cout<<"the result is :"<<endl;
    for(int i=0;i<6;++i)
    {
        cout<<"red("<<i+1<<") = "<<red[i]<<endl;
    }
    cout<<"\n"<<"blue(1) = "<<blue<<endl;

    return 0;
}
