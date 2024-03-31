# Archivo .gitignore 🎉

El archivo _.gitignore_ es un archivo que contiene configuraciones que usará Git para especificar cuales serán los archivos y directorios que se deben ignorar al momento de trackear y commitear archivos a nuestro repositorio. A continuacion veamos las ventajas de hacer uso de éste.

## ¿Por qué es conveniente incluirlo? 🤔

Como el _.gitignore_ nos permite manejar qué archivos vamos a incluir a nuestro repositorio y cuáles no, nos ayuda a evitar la inclusión de archivos no deseados y así potenciar la seguridad de nuestro repositorio dado que podríamos accidentalmente sumar información sensible y/o confidencial de nuestro proyecto.

## ¿Cuándo se debe hacer? 😱

Idealmente, se realiza antes de hacer el primer commit para evitar la inclusión de archivos no deseados desde el inicio, pero si no se creó antes del primer commit igual podemos configurarlo luego.

## ¿Cómo configuraría el archivo .gitignore? 😎

Para configurar un _.gitignore_ se siguen los siguientes pasos:

1. Crear el archivo `.gitignore` en el directorio raiz del repositorio, manualmente creando un archivo txt vacío y renombrándolo como `.gitignore` o bien usando la terminal.

2. Abrir el archivo `.gitignore` en un editor de texto (ej: [Visual Studio Code](https://code.visualstudio.com) ) y listamos los nombres de los archivos y/o patrones de archivos que deseamos ignorar. 

❗**IMPORTANTE: cada línea debe contener un solo patrón o archivo.**

```
Ejemplo: Ignoramos el archivo ignorado.txt
- Dentro del archivo `.gitignore` escribimos la línea

ignorado.txt

- Guardamos
```
❗**IMPORTANTE: si el archivo que deseamos ignorar ya está bajo seguimiento de Git, es decir ya ha sido confimado en el repositorio pero queremos dejar de incluirlo en futuros commits, debemos eliminarlo del área de seguimiento(staging area) sin eliminarlo de nuestro sistema de archivos local.**
**Para ello usamos el comando `git rm --cached nombre_del_archivo.txt` . ¡No olvides hacer el commit para confirmar estos nuevos cambios en tu repo!**

3. Si deseas ignorar archivos con una determinada extension puedes usar el patrón de coincidencia `*.extension`, o bien según un directorio completo con su contenido inclusive haciendo uso de su nombre con `/nombre_del_directorio`

```
Ejemplo: Ignoramos el directorio de dependencias de Node.js, archivos temporales y archivos de compilación
- Dentro del archivo `.gitignore` escribimos las líneas

*.class
*.tmp
/node_modules

- Guardamos
```

4. Finalmente, luego de guardar los cambios, quedará listo para ser agregado en nuestro próximo commit.


Para más información, leer la documentación recomendada de [Git Ignore](https://docs.github.com/es/get-started/getting-started-with-git/ignoring-files).
