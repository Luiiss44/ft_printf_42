# ft_printf

Este proyecto es una implementación personalizada de la función `printf` en C, que permite formatear e imprimir datos en la consola. A continuación se detallan los pasos necesarios para compilar y ejecutar el proyecto.

## Compilación y Ejecución

Para compilar y ejecutar este proyecto, sigue los siguientes pasos utilizando los comandos proporcionados.

### Paso 1: Compilar los archivos fuente

gcc -c *.c

gcc: Este es el compilador de GNU para el lenguaje C.
-c: Le dice al compilador que compile los archivos, pero sin combinarlos en un programa ejecutable.
*.c: Esto indica que el compilador debe compilar todos los archivos con la extensión .c en el directorio actual. Un archivo .c contiene el código fuente en lenguaje C.

Resultado: Este comando genera archivos de objeto .o (por ejemplo, ft_printf.o) a partir de cada archivo fuente .c. Estos archivos de objeto contienen código compilado que aún no está listo para ser ejecutado porque no están enlazados entre sí.

### Paso 2: Crear la librería estática

ar rcs libftprintf.a *.o

ar: Este es un programa que crea, modifica y extrae archivos de bibliotecas. En este contexto, crea una librería estática.
rcs: Son tres opciones usadas juntas:
r: Reemplaza o añade archivos en la biblioteca.
c: Crea la biblioteca si no existe.
s: Crea un índice para la biblioteca, lo que acelera el acceso a sus componentes.

libftprintf.a: Es el nombre de la biblioteca estática que se está creando.
*.o: Esto indica que todos los archivos de objeto .o generados en el paso anterior deben ser incluidos en la biblioteca.

Resultado: Este comando crea una librería estática llamada libftprintf.a, que agrupa todos los archivos de objeto en un solo archivo de biblioteca.

### Paso 3: Compilar el programa principal y enlazar la librería estática

gcc main.c libftprintf.a -o test_ft_printf

gcc: Nuevamente, este es el compilador de GNU para el lenguaje C.
main.c: Es el archivo fuente que contiene la función principal main. Este es el punto de entrada del programa.
libftprintf.a: Es la librería estática creada en el paso anterior que contiene el código compilado de las funciones de ft_printf.
-o test_ft_printf: Esta opción le dice al compilador que el nombre del archivo ejecutable resultante debe ser test_ft_printf.

Resultado: Este comando compila main.c y enlaza (combina) el código con la librería estática libftprintf.a para crear un programa ejecutable llamado test_ft_printf.

Paso 4: Ejecutar el programa

./test_ft_printf
./test_ft_printf: Este comando ejecuta el archivo test_ft_printf en el directorio actual. El prefijo ./ le dice al sistema operativo que busque el archivo en el directorio actual.

## Limpieza de archivos intermedios
Si deseas eliminar los archivos de objeto y la librería estática después de la compilación, puedes usar los siguientes comandos:

rm *.o libftprintf.a
rm: Este comando elimina archivos.
*.o: Esto elimina todos los archivos de objeto generados durante la compilación.

libftprintf.a: Esto elimina la librería estática creada.

# Ejemplo Completo
Aquí está el flujo completo de comandos para compilar, enlazar y ejecutar tu programa:

## Compilar los archivos fuente en archivos de objeto
gcc -c *.c

## Crear la librería estática
ar rcs libftprintf.a *.o

## Compilar el programa principal y enlazar la librería estática
gcc main.c libftprintf.a -o test_ft_printf

## Ejecutar el programa
./test_ft_printf

## Limpiar archivos intermedios
rm *.o libftprintf.a
