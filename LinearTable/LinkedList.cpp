/*
 * @Author: dmc 1755875003@qq.com
 * @Date: 2023-04-07 23:27:17
 * @LastEditors: dmc 1755875003@qq.com
 * @LastEditTime: 2023-04-08 11:50:20
 * @FilePath: \DataStructure\LinearTable\LinkedList.cpp
 * @Description: 使用链表实现线性表
 */
#include<iostream>
using namespace std;
template<class T>
class Node{
    public:
        T data;
        Node *next;
};
template<class T>
class LinkedList{
    private:
        //指向头结点
        Node<T> *head;
        //链表尾结点
        Node<T> *tail;
        //链表长度
        int length;
    public:
        LinkedList(){
            head=new Node<T>();
            head->next=NULL;
            tail=head;
            length=0;
        }
        ~LinkedList(){
            Node<T> *pre=head;
            Node<T> *p=head->next;
            while(p!=NULL){
                delete pre;
                pre=p;
                p=p->next;
            }
            delete p;
        }
        //头插法建立链表
        void headInsert(){
             int x;
             cout<<"头插法建立链表,请输入x的值,输入9999表示插入结束:";
             cin>>x;
             while(x!=9999){
                Node<T> *node=new Node<T>();
                node->data=x;
                node->next=head->next;
                head->next=node;
                length++;
                if(length==1){
                    tail=node;
                }
                cout<<"头插法建立链表,请输入x的值,输入9999表示插入结束:";
                cin>>x;
                
             }
        }
        //尾插法建立链表
        void tailInsert(){
             int x;
             cout<<"尾插法建立链表,请输入x的值,输入9999表示插入结束:";
             cin>>x;
             while(x!=9999){
                Node<T> *node=new Node<T>();
                node->data=x;
                node->next=NULL;
                tail->next=node;
                tail=tail->next;
                length++;
                cout<<"尾插法建立链表,请输入x的值,输入9999表示插入结束:";
                cin>>x;
                
             }
        }
        //查找节点,1<=index<=length
        Node <T>*getItem(int index){
            if(index<1||index>length){
                return NULL; 
            }
            Node<T> *p=head->next;
            int i=1;
            while (i!=index)
            {
                i++;
                p=p->next;
            }
            return p;
        }
        //定位元素的位置,-1
        int locateItem(T e){
            Node<T> *p=head->next;
            int index=1;
            while(p!=NULL){
                if(p->data==e){
                    return index; 
                }
                p=p->next;
                index++;
            }
            return -1;
        }
        int linkedListLength(){
            return length;
        }
        void printLinkedList(){
            cout<<"链表内容如下:"<<endl;
            Node<T> *p=head->next;
            while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;

        }
        void printfTail(){
            cout<<"尾结点值为:"<<tail->data<<endl;
        }
        

};
int main(){
    LinkedList<int> *l=new LinkedList<int>();
    l->tailInsert();
    l->headInsert();
    cout<<l->linkedListLength()<<endl;
    l->printLinkedList();
    l->printfTail();
    Node<int> *s=l->getItem(2);
    cout<<s->data<<endl;
    cout<<l->locateItem(12)<<endl;
    cout<<l->locateItem(13)<<endl;
}


