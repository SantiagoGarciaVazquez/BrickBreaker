# Brick Breaker

## Objetivo

En BrickBreaker, el objetivo es romper todos los ladrillos en la pantalla usando una bola y una paleta. El jugador controla la paleta para evitar que la bola caiga fuera de la pantalla, reflejando la bola hacia los ladrillos para romperlos.


![Video](assets/imagenes/video r.mp4)

## Gameplay

El jugador controla una paleta en la parte inferior de la pantalla utilizando las teclas 'J' y 'L'. Para ajustar la dirección de la paleta, puede usar las teclas 'A' y 'D'. Al comienzo del juego, el jugador lanza la pelota presionando la tecla 'SPACE'. Si la pelota choca con el centro de la paleta, rebotará hacia arriba, y cuanto más cerca del borde de la paleta toque la pelota, más ángulo tendrá el rebote. Los ladrillos se destruyen con un solo golpe de la pelota. Después de destruir todos los ladrillos de la pantalla, el jugador pasará al siguiente nivel. Si la pelota pasa la barrera inferior de la pantalla, la partida terminará. ¡Buena suerte y diviértete jugando!

## Capturas
<img src="assets/imagenes/cap 11.jpg" width=640></image>

<img src="assets/imagenes/cap 1.jpg" width=640></image>


### Carpetas

##### bin/ - Contiene los ejecutables del proyecto
##### src/ - Contiene el codigo fuente
##### include/ - Los archivos de cabecera 
##### assets/ - Contiene los recuros del proyecto
##### docs/ - Contiene la documentacion del proyecto

## Instalación
Clonar el repositorio.

```bash
git clone https://github.com/SantiagoGarciaVazquez/BrickBreaker.git
```

Instalar el programa.

```bash
make
```

Una vez completada la instalación, se puede jugar al juego ejecutando el siguiente comando en el directorio raíz del proyecto.

```bash
make run
```

## Complementos necesarios en Visual Studio Code

##### - Material Icon
##### - C/C++
##### - PlantUML
##### - GitGraph
