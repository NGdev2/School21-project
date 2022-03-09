              Push Swap - проект, нацеленный на написание программы сортировки стека заданным набором инструкций:
– sa : swap a — поменять местами первые 2 элемента в верхней части стека a. Ничего не делать, если есть только один элемент или ни одного).<br>
– sb : swap b — поменять местами первые 2 элемента в верхней части стека b. Ничего не делать, если есть только один элемент или ни одного).<br>
– ss : sa и sb одновременно.<br>
– pa : push a — взять первый элемент в верхней части b и поместить его в верхнюю часть a. Делать ничего, если b пусто.<br>
– pb : push b — взять первый элемент в верхней части a и поместить его в верхнюю часть b. Делать ничего, если a пусто.<br>
– ra : rotate a — сдвинуть вверх все элементы стека a на 1. Первый элемент становится последний.<br>
– rb : rotate b — сдвинуть вверх все элементы стека b на 1. Первый элемент становится последний.<br>
– rr : ra и rb одновременно.<br>
– rra : reverse rotate a- сдвинуть вниз все элементы стека a на 1. Последний элемент становится первым. 7 Push_swap Потому что Swap_push не такой естественный<br>
– rrb : reverse rotate b — сдвинуть вниз все элементы стека b на 1. Последний элемент становится первым.<br>
– ррр : рра и ррб одновременно<br>

Стек это структура данных. Стек хранит последовательность данных. каждый элемент указывает на тот, который нужно использовать следующим. Это линейная связь — данные идут друг за другом и нужно брать их по очереди. Из середины стека брать нельзя. Этот принцип называется First in First out.
Задача проекта строится на том, чтобы написать алгоритм, который бы сортировал стек "a" из неповторяющихся чисел в порядке возрастания с помощью стека "b", укладывался бы в требования по скорости сортировки и который бы обрабатывал все исключения, и исключал непредвиденного поведения программы (bus error, segmentation fault, leaks и т.д.)

Требования:
– сортировка 100 чисел меньше чем за 700 операций.
– сортировка 500 чисел меньше чем за 5500 операций.
– сортировка 5 чисел меньше чем за 12 операций

      Как запустить программу:
Для запуска программу следует в папке с проктом запустить через терминал команду make, которая соберет проект.
Исполнительный файл "push_swap". Запуск сортировки с числами производится следующим образом:
./push_swap 2 1 3 6 5 8
или
ARG="4 67 3 87 23"; ./push_swap $ARG
После выполнения сортировки на экран выводятся инсктрукции. чтобы проверить правильность работы программы, можно использовать программу "checker". Но сначала его нужно собрать "make bonus".
запуск checker программы производится одним из следующих способов:
./push_swap 2 1 3 6 5 8 | ./checker 2 1 3 6 5 8
ARG="2 1 3 6 5 8"; ./push_swap $ARG | ./checker_OS $ARG
./checker после выполнения сортировки выведет либо OK либо KO в зависимости от отсорнированности/неотсортированности стека.
В программе  "checker" имеется ручная сортировка. выполняется она по принципу:
./checker <числа на сортировку>
<команды сортировки>
пример:
<img width="549" alt="Снимок экрана 2022-03-09 в 22 11 38" src="https://user-images.githubusercontent.com/19801851/157514565-111f8f73-4883-4407-9390-b23e35e58d06.png">

