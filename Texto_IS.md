Practica 1. Introduccion a Github, Markdown y Eclipse.
---

**Contenidos**

1.1. Git.

   1.1.1. Introducción.
   1.1.2. Instalación y configuración.
   1.1.3. Uso básico.
   1.1.4. Ramas.
   1.1.5. Github.

1.2. Markdown.

   1.2.1. Introducción.
   1.2.2. Código.

1.3. Eclipse

   1.3.1. Introducción
   1.3.2. Instalación.

1.4. Recursos.

---

**Evaluación**


* Las entregas en moodle se realizaran por medio del representante o líder de cada grupo.
* Se debe entregar en moodle la direccion del repositorio de Github.
* Se evaluará la realización de un pequeño tutorial de Github con los contenidos aprendidos durante las dos primeras sesiones practicas. El lenguaje de formateado sera Markdown.
* El repostiorio de Github contendrá tanto el tutorial como el historial de cambios realizados por los integrantes del grupo.

### 0. Git

#### 0.1. Introducción

#### Motivacion

* Código efímero.  
* Necesidad de mantener todas las versiones del código fuente.
* Problemas en organizaciones para mantener el código actualizado.
* Coherencia de versiones.
* Conocimiento del camvbio que ha provocado que el sistema no funcione.
* Fallos en el disco duro que suponen riesgos de información desactualizada.
* Satisfacer el compromiso de entrega.

### Git y Github

### Git

:sistema para el control distribuido de versiones de código. Fundamentalmente permite.
* Dar seguimiento a los cambios realizados sobre un archivo.
* Almacenar una copia de los cambios.

### Github

:sitio web donde podemos subir una copia de nuestro repositorio Git.

### Ventajas
### Git
* Habilidad de deshacer cambios.
* Historial y documentación de cambios.
* Múltiples versiones de código.
* Habilidad de resolver conflictos entre versiones de distintos programadores.
* Copias independientes.

### GitHub

* Documentacion de requerimientos.
* Ver el avance del desarrollo.

### 0.2 Instalación y configuración

### Instalación
* Para instalar Git: https://git-scm.com.
* En el curso se utlizará Git a través de líneas de comandos.
* Para eclipse existen *plugins* integrados:https://www.eclipse.org/egit.

### configuración básica
   Nombre del administrador:
   ~~~  
   git config --global user.name "Antonio M. Durán Rosal"
   ~~~  
   Correo electrónico:
   ~~~  
   git config --global user.email aduran@uco.es
   ~~~  
   Editor de texto:  
   ~~~
   git config --global core.editor "gedit"  
   ~~~
   Color de la interfaz:  
   ~~~
   git config --global color.ui true  
   ~~~
   Listado de la configuración:  
   ~~~
   git config --list  
   ~~~

### 0.3 Uso básico
### Los tres estados de Git
### Comandos basicos I
Iniciar repositorio en un direcotrio:  
~~~
git init  
~~~
Agregar cambios al area de *staging*:  
~~~
git add
~~~  
Validar cambios en el repositorio:  
~~~
git commit -m "Mensaje"  
~~~
Hacer los dos pasos anteriores en uno:
~~~  
git commit -am "Mensaje"  
~~~
Historial de commits:  
~~~
git log  
~~~
### Comandos básicos II
Ayuda del listado anterior:  
~~~
git help log  
~~~
Listar los 5 commits mas recientes:  
~~~
git log -n 5  
~~~
Listar los commits desde una fecha:  
~~~
git log --since=2018-09-18  
~~~
Listar los commits por autor:  
~~~
git log --atuthor="Antonio"  
~~~
Ver cambios en el directorio:  
~~~
git status  
~~~

### Comandos básicos III

Ver diferencia entre ficheros en el directorio y el repositorio de git:
~~~  
git diff  
~~~
Ver diferencia entre ficheros en el *staging* y el repositorio:  
~~~
git diff --staged  
~~~
Eliminar archivos:  
~~~
git rm archivo  
git commit -m "Mensaje"`
~~~

### Comandos básicos IV
Deshacer cambios con git:  
~~~
git checkout -- nombre_fichero  
~~~
Retirar archivos del *staging*:
~~~
git reset HEAD nombre_fichero  
~~~
