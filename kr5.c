#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//Нахождение произведения всех чисел, кратных 5; удаление элементов,
//стоящих на позиции, номер которой (в исходном списке) совпадает
//с самим элементом, добавление после каждого элемента его копии,
//уменьшенной в 10 раз (целой части полученного частного).

struct list{
	int data;
	struct list * next;
};

int pushh(struct list * first, int value);

int pushh(struct list * first, int value){ //добавить элемент
	int err=0;
	struct list * p = malloc(sizeof(struct list));
	if(p){
		struct list * n = first->next;
		p->data=value;
		first->next=p;
		p->next=n;
	} else {
		err=1;
	}
	return err;
}
int main(){
	struct list * first;//первый симв структуры
	struct list * old;//предыдущий символ в цыкле
    
	int f=0, i=0,kr=1;//i номер переменной----- kr кратность
	int in[5]={2, 4, 3, 5, 6};//массив данных
	first = malloc(sizeof(struct list));//выделение памяти спискам
	first->data=1;//первый элемент
	struct list * go=first;//переход к первому элементу
	for(int i=0;i<5;go=go->next, i++){//ввод массива в список
		pushh(go, in[i]);
	}

	go=first;//переход к 1 элементу
	for(;go;go=go->next) printf("[%d], ", go->data);//вывод 
	printf("\n");
	go=first;
	for(;go;){//цикл структуры	
		i++;//счётчик номера элемента
		f=1;
		if (go->data % 5 == 0) kr=kr*go->data;//перемножить все элементы кратные 5
		if (go->data==i){//удалить все элементы которые равны своему номеру в списке
		    if(go==first){
		    first=go->next;
				free(go);
				go=first;
				old = first;
				f=0;
		    } else {
		    old->next=go->next;
				free(go);
				go=old;
		    }
	    } else {//если элемент не удалён то добавить элемент который меньше предыдущего в 10 раз
			old=go->next;
			struct list * mem = malloc(sizeof(struct list));
			mem->next=old;
			mem->data=go->data / 10;
			go->next=mem;
			go=mem;
		}
		if (f){
			old=go;
			go=go->next;
		}
	}
	go=first;//переход к 1 элементу
	for(;go;go=go->next) printf("[%d], ", go->data);//вывод
	printf("kratnost %d\n",kr );
	return 0;
}

