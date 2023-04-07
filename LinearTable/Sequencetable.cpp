/*
 * @Author: dmc 1755875003@qq.com
 * @Date: 2023-04-07 10:41:17
 * @LastEditors: dmc 1755875003@qq.com
 * @LastEditTime: 2023-04-07 14:49:22
 * @FilePath: \DataStructure\LinearTable\Sequencetable.cpp
 */

#include<iostream>
using namespace std;
//最大长度
#define MAX_SIZE 1
//模板类
template<class T>
class Sequencetable{
private:
    /* data */
    int length;
    int maxSize;
    int *arr;

public:
    Sequencetable(){

    }
    Sequencetable(int length,int maxSize){
        this.length=length;
        this.maxSize=maxSize;        
        arr=new T[maxSize];
    }
    ~Sequencetable(){

    }
    /**
     * 在顺序表的第i个位置插入元素
     * @description: 1<=i<=length+1,i-1为数组下标
     * @param {int} i,T e
     * @return bool 
     */    
    bool insert(int i,T e){
        if(length>=maxSize){
            printf("数组已满");
            return false;
        }
        if(i<1||i>length+1){
            return false;
        }

        int index=i-1;
        //移动元素
        T after;
        for(int j=index;j<length+1;j++){
            

        }
    }
    
};

int main(){
    Sequencetable<int> seq;
    
}

