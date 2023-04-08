#pragma once
#include <iostream>


/*enum operation
{
	no = 0,
	scalpel = 1 ,
	hemostat = 2 ,
	tweezers = 3 ,
	suture = 4 
};*/

void scalpel(patient& p)
{
	std::cout << "Enter coordinates of the encisium: " << std::endl;
	std::cout << "Start (x y): ";
	std::cin >> p.enc.x >> p.enc.y;
	std::cout << "Stop (x y): ";
	std::cin >> p.enc.z >> p.enc.w;
	
}

void hemostat ()
{
	int x, y;
	std::cout << "Enter coordinates of the hemostat: " << std::endl;
	std::cin >> x >> y;
	std::cout << "Hemostat on (" << x << " " << y << ")." << std::endl;
}

void tweezers()
{
	int x, y;
	std::cout << "Enter coordinates of tweezers: " << std::endl;
	std::cin >> x >> y;
	std::cout << "Tweezers on (" << x << " " << y << ")." << std::endl;
}

bool suture(patient& p)
{
	patient su;
	std::cout << "Enter coordinates of the seam: " << std::endl;
	std::cout << "Start (x y): ";
	std::cin >> su.enc.x >> su.enc.y;
	std::cout << "Stop (x y): ";
	std::cin >> su.enc.z >> su.enc.w;

	if (su.enc.x == p.enc.x && su.enc.y == p.enc.y
		&& su.enc.z == p.enc.z && su.enc.w == p.enc.w)
	{
		return true;
	}
	else
	{
		return false;
	}
}


// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
