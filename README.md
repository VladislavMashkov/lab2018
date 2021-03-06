## Laboratory work MMXVIII
[![Build Status](https://travis-ci.org/VladislavMashkov/lab2018.svg?branch=master)](https://travis-ci.org/VladislavMashkov/lab2018)

Данная лабораторная работа посвящена поздравлению Вячеслава Вадимовича с Новым Годом 2018
```ShellSession
$ open https://travis-ci.org/VladislavMashkov/lab2018
```
## Tasks

- [X] 1. Ознакомиться со ссылками учебного материала
- [X] 2. Написать программу для поздравления Вячеслава Вадимовича с Новым Годом
- [X] 3. Составить отчет и отправить ссылку личным сообщением в **Slack**

## Tutorial
Исходный код файла main.cpp:
```ShellSession
#include <iostream>
using namespace std;

void drawLine(int countSpaces, int countStars) {
	for(int i = 0; i < countSpaces; i++) {
		cout << " ";
	}
	for(int j = 0; j < countStars; j++) {
		cout << "*";
	}
	cout << endl;
}

void drawTree(int countLines) {
	for(int j = 1; j < countLines; j++) {
		drawLine(countLines - j, j*2 - 1);
	}
}

int main(){
	cout << "ВЯЧЕСЛАВ ВАДИМОВИЧ, ОТ ИМЕНИ ГРУППЫ ИУ8-33 ПОЗДРАВЛЯЮ ВАС С НАСТУПАЮЩИМ 2018 ГОДОМ!!!" << endl;
	cout << "ЖЕЛАЕМ ВАМ СЧАСТЬЯ, ЗДОРОВЬЯ И ЧТОБЫ ВАШИ СТУДЕНТЫ РАДОВАЛИ ВАС СВОИМИ УСПЕХАМИ!!!" << endl;
	cout << "И ЧТОБЫ ВЫ МОГЛИ ПОЧУСТВОВАТЬ АТМОСФЕРУ ПРАЗДНИКА, МЫ НАРИСОВАЛИ ДЛЯ ВАС ЕЛОЧКУ!!!" << endl;
	for(int i = 0; i < 3; i++){
		drawTree(20);	
	}
	return 0;
}

```
Вывод:
```ShellSession
ВЯЧЕСЛАВ ВАДИМОВИЧ, ОТ ИМЕНИ ГРУППЫ ИУ8-33 ПОЗДРАВЛЯЮ ВАС С НАСТУПАЮЩИМ 2018 ГОДОМ!!!
ЖЕЛАЕМ ВАМ СЧАСТЬЯ, ЗДОРОВЬЯ И ЧТОБЫ ВАШИ СТУДЕНТЫ РАДОВАЛИ ВАС СВОИМИ УСПЕХАМИ!!!
И ЧТОБЫ ВЫ МОГЛИ ПОЧУСТВОВАТЬ АТМОСФЕРУ ПРАЗДНИКА, МЫ НАРИСОВАЛИ ДЛЯ ВАС ЕЛОЧКУ!!!
                   *
                  ***
                 *****
                *******
               *********
              ***********
             *************
            ***************
           *****************
          *******************
         *********************
        ***********************
       *************************
      ***************************
     *****************************
    *******************************
   *********************************
  ***********************************
 *************************************
                   *
                  ***
                 *****
                *******
               *********
              ***********
             *************
            ***************
           *****************
          *******************
         *********************
        ***********************
       *************************
      ***************************
     *****************************
    *******************************
   *********************************
  ***********************************
 *************************************
                   *
                  ***
                 *****
                *******
               *********
              ***********
             *************
            ***************
           *****************
          *******************
         *********************
        ***********************
       *************************
      ***************************
     *****************************
    *******************************
   *********************************
  ***********************************
 *************************************

```

## Links

- [Поздравление](https://travis-ci.org/VladislavMashkov/lab2018)
```
Copyright (c) 2017 Братья Вершинины
```
