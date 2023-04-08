/*
 * @Author: dmc 1755875003@qq.com
 * @Date: 2023-04-07 10:41:17
 * @LastEditors: dmc 1755875003@qq.com
 * @LastEditTime: 2023-04-07 23:36:02
 * @FilePath: \DataStructure\LinearTable\Sequencetable.cpp
 * @Discribution: ˳���ʵ�����Ա�
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
    //��ǰ����
    int length;
    //��󳤶�
    int maxSize;
    //��̬����
    int *arr;

public:
    Sequencetable(){
        length=0;
        maxSize=0;        
        arr=new T[maxSize];
    }
    Sequencetable(int maxSize){
        length=0;
        this->maxSize=maxSize;        
        arr=new T[maxSize];
    }
    ~Sequencetable(){
        delete arr;
    }
    /**
     * @description: ��˳���ĵ�i��λ�ò���Ԫ��,1<=i<=length+1,i-1Ϊ�����±�
     * @param {int} i,T e
     * @return bool 
     */    
    bool insert(int i,T e){
        if(length>=maxSize){
            printf("��������");
            return false;
        }
        if(i<1||i>length+1){
            printf("insert index error");
            return false;
        }

        int index=i-1;
        //�ƶ�Ԫ��
        for(int j=length;j>index;j--){
            arr[j]=arr[j-1];
        }
        arr[index]=e;
        length++;
        return true;
    /**
     * @description: ɾ���±�Ϊi��Ԫ��,1<=i<=length
     * @return {*}
     */
    }
    bool remove(int i,T&e){
        if(i<1||i>length){
            return false;
        }
        int index=i-1;
        e=arr[index];
        for(int j=index;j<length-1;j++){
            arr[j]=arr[j+1];
        }
        length--;
        return true;
    }
    /**
     * @description: ����ֵΪe��Ԫ�ز��������±�
     * @return {*}
     */    
    T get(T e){
        for(int i=0;i<length;i++){
            if(arr[i]==e){
                return i+1;
            }
        }

        return 0;
    }
    /**
     * @description: �޸ĵ�i��Ԫ��,1<=i<=length
     * @param {int} i,T e
     * @return {*}
     */
        
    bool set(int i,T e){
        if(i<1||i>length){
            return false;
        }
        arr[i-1]=e;
        return true;
    }
    void printArr(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Sequencetable<int> seq(10);
    seq.insert(1,20);
    seq.insert(2,30);
    seq.insert(3,40);
    seq.insert(3,50);
    seq.insert(3,70);
    seq.printArr();
    int a=0;
    seq.remove(2,a);
    cout<<a<<endl;
    seq.printArr();
    int b=seq.get(40);
    cout<<b<<endl;
    seq.set(2,48);
    seq.printArr();
}

