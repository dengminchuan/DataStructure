/*
 * @Author: dmc 1755875003@qq.com
 * @Date: 2023-04-07 10:41:17
 * @LastEditors: dmc 1755875003@qq.com
 * @LastEditTime: 2023-04-07 14:49:22
 * @FilePath: \DataStructure\LinearTable\Sequencetable.cpp
 */

#include<iostream>
using namespace std;
//��󳤶�
#define MAX_SIZE 1
//ģ����
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
     * ��˳���ĵ�i��λ�ò���Ԫ��
     * @description: 1<=i<=length+1,i-1Ϊ�����±�
     * @param {int} i,T e
     * @return bool 
     */    
    bool insert(int i,T e){
        if(length>=maxSize){
            printf("��������");
            return false;
        }
        if(i<1||i>length+1){
            return false;
        }

        int index=i-1;
        //�ƶ�Ԫ��
        T after;
        for(int j=index;j<length+1;j++){
            

        }
    }
    
};

int main(){
    Sequencetable<int> seq;
    
}

