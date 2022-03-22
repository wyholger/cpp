#include "../include/MateriaSource.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Character.hpp"
#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource(); 	//Создаем завод материи у него 4 конвеера
	src->learnMateria(new Ice()); 				//Учим первый свободный конвеер производить материю типа Ice
	src->learnMateria(new Cure()); 				//Учим следующий свободный конвеер производить материю типа Cure
	ICharacter* me = new Character("me"); 		//Создаем персонажа у которого есть 4 слота в инвентаре для материи
	AMateria* tmp; 								//Создаем указатель на родительский тип для материи
	tmp = src->createMateria("ice"); 			//Создаем запрос у завода материи на материю типа Ice если она производится то получаем ее экземпляр
	me->equip(tmp);								//Экиперуем свободный слот инвентаря персонажа созданной на заводе материей
	tmp = src->createMateria("cure"); 			//Создаем запрос у завода материи на материю типа Cure если она производится то получаем ее экземпляр
	me->equip(tmp);								//Экиперуем свободный слот инвентаря персонажа созданной на заводе материей
	ICharacter* bob = new Character("bob"); 	//Создаем нового персонажа
	me->use(0, *bob); 							//Персонаж me стреляет в персонажа bob материей находящейся в 0 слоте инвенторя
	me->use(1, *bob); 							//Персонаж me стреляет в персонажа bob материей находящейся в 1 слоте инвенторя
	delete bob; 								//Удаляем персонажа bob
	delete me; 									//Удаляем персонажа me
	delete src; 								//Удаляем завод по производству материи
	return 0;
}
