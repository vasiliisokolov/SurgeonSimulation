#pragma once
#include <iostream>


enum operation
{
	no = 0,
	scalpel = 1 /*Скальпель*/,
	hemostat = 2 /*Зажим*/,
	tweezers = 3 /*Пинцет*/,
	suture = 4 /*Игла*/
};

void scalpel(patient& p)
{
	std::cout << "Enter coordinates of encisium: " << std::endl;
	std::cout << "Start (x y): ";
	std::cin >> p.enc.x >> p.enc.y;
	std::cout << "Stop (x y): ";
	std::cin >> p.enc.z >> p.enc.w;
	
}

void hemostat (patient& p)
{
	int x, y;
	std::cout << "Enter coordinates of hemostat: " << std::endl;
	std::cin >> x >> y;
	std::cout >>
}



// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
