# lab-riscv-asm

## Задание
| Номер варианта  | Задание | Передача параметров |
| --- | --- | --- |
| 5  | Найти сумму элементов строки с заданным номером. (N = 4, M = 4)  | По ссылке |

## Ход работы
1. Написана программа на Си - **main.c**. Из репозитория с примером выполнения ЛР-1 был взят **makefile**.
2. 
```
admin_user@adminuser-virtual-machine:~/lr1$ PATH=/home/admin_user/riscv-tools/riscv-gcc-10.2.0-gbbc9263-210318T1412/bin:$PATH
admin_user@adminuser-virtual-machine:~/lr1$ make -f Makefile
```
3. В результате выполнения были получены :
- **lr1.elf** - результирующий исполняеый файл
- **lr1.dump** - дамп-файл программы на Си