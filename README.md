# ft_printf

Este proyecto es una implementación personalizada de la función `printf` en C, que permite formatear e imprimir datos en la consola. A continuación se detallan los pasos necesarios para compilar y ejecutar el proyecto.

## Compilación y Ejecución

Para compilar y ejecutar este proyecto, sigue los siguientes pasos utilizando los comandos proporcionados.

### Paso 1: Compilar los archivos fuente

```sh
gcc -c *.c
gcc: Compilador de GNU para el lenguaje C.
-c: Compila los archivos sin combinarlos en un ejecutable.
*.c: Compila todos los archivos con extensión .c en el directorio actual.
Este comando genera archivos de objeto .o (por ejemplo, ft_printf.o) a partir de cada archivo fuente .c. Estos archivos de objeto contienen código compilado que aún no está listo para ser ejecutado.

Paso 2: Crear la librería estática
sh
Copiar código
ar rcs libftprintf.a *.o
ar: Programa que crea, modifica y extrae archivos de bibliotecas.
rcs: Opciones usadas juntas:
r: Reemplaza o añade archivos en la biblioteca.
c: Crea la biblioteca si no existe.
s: Crea un índice para la biblioteca, acelerando el acceso a sus componentes.
libftprintf.a: Nombre de la librería estática creada.
*.o: Incluye todos los archivos de objeto generados en el paso anterior.
Este comando crea una librería estática llamada libftprintf.a, que agrupa todos los archivos de objeto en un solo archivo de biblioteca.

Paso 3: Compilar el programa principal y enlazar la librería estática
sh
Copiar código
gcc main.c libftprintf.a -o test_ft_printf
gcc: Compilador de GNU para el lenguaje C.
main.c: Archivo fuente que contiene la función principal main.
libftprintf.a: Librería estática creada en el paso anterior.
-o test_ft_printf: Especifica el nombre del archivo ejecutable resultante.
Este comando compila main.c y enlaza el código con la librería estática libftprintf.a para crear un programa ejecutable llamado test_ft_printf.

Paso 4: Ejecutar el programa
sh
Copiar código
./test_ft_printf
./test_ft_printf: Ejecuta el archivo test_ft_printf en el directorio actual.
Este comando ejecuta el programa y deberías ver el texto "Hello, World!" impreso en la consola si ft_printf está implementado correctamente.

Limpieza de archivos intermedios
Para eliminar los archivos de objeto y la librería estática después de la compilación, usa los siguientes comandos:

sh
Copiar código
rm *.o libftprintf.a
rm: Comando para eliminar archivos.
*.o: Elimina todos los archivos de objeto generados durante la compilación.
libftprintf.a: Elimina la librería estática creada.
Ejemplo Completo
Aquí está el flujo completo de comandos para compilar, enlazar y ejecutar tu programa:

sh
Copiar código
# Compilar los archivos fuente en archivos de objeto
gcc -c *.c

# Crear la librería estática
ar rcs libftprintf.a *.o

# Compilar el programa principal y enlazar la librería estática
gcc main.c libftprintf.a -o test_ft_printf

# Ejecutar el programa
./test_ft_printf

# Limpiar archivos intermedios
rm *.o libftprintf.a
