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
	cout << "И ЧТОБЫ ВЫ МОГЛИ ПОЧУВСТВОВАТЬ АТМОСФЕРУ ПРАЗДНИКА, МЫ НАРИСОВАЛИ ДЛЯ ВАС ЕЛОЧКУ!!!" << endl;
	for(int i = 0; i < 3; i++){
		drawTree(20);	
	}
	return 0;
}
